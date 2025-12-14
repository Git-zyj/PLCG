/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243114
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_12 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (unsigned char)92))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) >> (((var_8) - (512589749)))))) : (var_9)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] |= ((/* implicit */int) ((_Bool) max(((~(((/* implicit */int) (signed char)-99)))), (((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)128)))))));
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_22 [i_3] [i_3] [(signed char)6] [i_2] [i_2] [(short)1] = ((/* implicit */unsigned short) (-(var_8)));
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_3 - 1] [i_4 - 2]))))))))));
                            var_14 = ((/* implicit */_Bool) arr_8 [(unsigned short)10]);
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_4 + 1] [i_3 - 1]))))) && (((/* implicit */_Bool) 2147483647))));
                        }
                    } 
                } 
            }
        } 
    } 
}
