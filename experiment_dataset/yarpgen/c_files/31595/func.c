/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31595
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [(_Bool)1] [i_3 + 2] = ((/* implicit */_Bool) var_8);
                            arr_11 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) max((((arr_9 [i_3 + 3] [i_3] [(_Bool)1] [i_3 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_3 + 3] [i_3 + 3] [i_3 + 3] [(unsigned char)13])))));
                            arr_12 [i_0] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_2 + 1] [i_3 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) (~(((unsigned long long int) arr_14 [i_0] [i_0] [i_0 - 1]))));
                            arr_17 [i_0 - 2] [i_1] [i_4] [(unsigned char)1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)84)) && ((!(((/* implicit */_Bool) (unsigned char)105)))))))) < (6871559052958114176ULL)));
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) arr_1 [i_0] [i_4])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_4] [i_4])))) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min(((unsigned short)24576), (((/* implicit */unsigned short) arr_6 [i_0] [i_4] [i_5])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((unsigned int) (!((_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
}
