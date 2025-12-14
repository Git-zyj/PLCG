/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194820
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
    var_15 = ((/* implicit */unsigned int) var_2);
    var_16 |= ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1 - 2])) - (23ULL))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 36028659580010496ULL)) || (((/* implicit */_Bool) 18446744073709551592ULL)))) ? (arr_0 [i_0 - 2] [i_1 - 2]) : (arr_3 [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 23ULL)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [8] [i_2] [i_3] [i_1] [i_3 - 2]))))));
                                var_18 = ((/* implicit */unsigned char) ((((0) & (262143))) << (((unsigned int) 23ULL))));
                                var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1152358554653425664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [3U])))))) ? ((+(1152358554653425662ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551597ULL) >= (17294385519056125961ULL))))))), (23ULL)));
                                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((23ULL) << (((4294967295U) - (4294967236U))))) : (((17294385519056125951ULL) % (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]))))))) ? (((23ULL) | (max((18446744073709551593ULL), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) ((arr_9 [i_0 + 1]) % (var_11))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((2ULL) & (23ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */long long int) 31703500U)) : (arr_7 [(short)4] [i_1] [i_1])))))))) != (max((((/* implicit */unsigned int) arr_2 [i_1])), (arr_0 [i_0 - 1] [i_1])))));
            }
        } 
    } 
    var_22 |= ((/* implicit */int) (-(((((1152358554653425664ULL) * (((/* implicit */unsigned long long int) 1875071760U)))) << (((var_14) - (821435295U)))))));
    var_23 = ((((((23ULL) | (18446744073709551614ULL))) + (((/* implicit */unsigned long long int) var_3)))) * (((/* implicit */unsigned long long int) var_8)));
}
