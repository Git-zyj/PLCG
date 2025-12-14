/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218090
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (unsigned char)255))));
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) arr_3 [i_0]))), (arr_3 [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_12 [i_0] [i_1] [i_0] [(unsigned short)18] [i_0] [i_1])))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_3] [i_4] [i_4 + 3] [i_0] [i_4]))) + ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_4 + 4] [i_4 + 2] [i_0] [i_4])))))))));
                                arr_13 [i_3] = ((/* implicit */unsigned short) var_7);
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) min((var_5), (2863061066U)))), (((((/* implicit */unsigned long long int) 1431906230U)) * (0ULL))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_3 [i_3]))))))))) | (((unsigned long long int) ((((/* implicit */int) (unsigned short)7)) >> (((arr_5 [i_0] [i_2] [i_3 - 2]) - (7355414539227638068LL))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned char)211))));
    var_20 = ((/* implicit */unsigned char) ((var_11) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2705142067U)))) | (((var_7) ? (((/* implicit */unsigned long long int) var_1)) : (9746825964541234657ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((18446744073709551615ULL) - (18446744073709551606ULL)))))), (min((var_2), (2863061066U)))))) ? (((/* implicit */long long int) min(((-(2556875457U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))))) : (min((((/* implicit */long long int) ((717164725U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    var_22 = ((/* implicit */_Bool) (-(max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)41)))))))));
}
