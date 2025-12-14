/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31221
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = ((/* implicit */_Bool) (unsigned char)4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) (unsigned short)127);
                            var_18 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (~(max((2056896134), (((/* implicit */int) var_12)))))))));
                            var_20 = ((/* implicit */unsigned long long int) var_6);
                            arr_10 [i_3] [i_2] [8U] [i_1] [i_0] = ((/* implicit */short) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_15 [i_5] [i_1 + 1] [i_4] [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0] [i_1 + 1]))));
                            arr_16 [i_0] [i_5] [i_4 - 1] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (signed char)64))));
                            arr_17 [6LL] [i_1] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (max((((unsigned long long int) (unsigned char)121)), (((/* implicit */unsigned long long int) arr_11 [i_5 + 2] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((int) 12)))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_8 [(unsigned short)16] [7] [i_4] [i_4] [i_1] [i_0]))), (arr_12 [i_5 - 1] [i_4 - 2] [i_1 + 1])))) : (((/* implicit */int) arr_7 [i_4]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
