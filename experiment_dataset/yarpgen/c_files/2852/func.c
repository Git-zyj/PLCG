/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2852
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_12))))), (arr_5 [i_1] [i_1 + 1] [i_2 + 2]))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_3);
                    var_16 = ((/* implicit */short) max((((((((/* implicit */int) arr_2 [(unsigned short)6])) > (((/* implicit */int) arr_0 [i_2] [i_0])))) ? (var_11) : (((/* implicit */unsigned long long int) ((int) arr_1 [i_1] [i_2 - 1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1 + 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_1 + 1])))));
                                var_18 *= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned short)63865)), (var_8))) & (((/* implicit */unsigned long long int) 4294967295U))));
                                arr_15 [i_3] [i_1] [(unsigned short)1] [10U] [i_4] [i_0] &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)63862)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_12))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [10LL] [10LL] [i_2] [10LL]))) : (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
