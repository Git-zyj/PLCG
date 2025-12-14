/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29215
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
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_19))) ^ (var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_3] [i_2 - 1] [i_3] [i_0] = ((/* implicit */_Bool) var_7);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 - 2] [i_1] [(unsigned short)11]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_3 [i_3] [i_1 - 3])))))));
                        arr_12 [i_0] [i_3] [i_2 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) >= (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (short)-31109))))), ((~(arr_4 [i_0 - 2])))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) > (var_6)))), (((((/* implicit */_Bool) (signed char)22)) ? (13204308635851509193ULL) : (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_3 - 1])) != (((/* implicit */int) arr_2 [i_0] [17ULL]))))) != (((/* implicit */int) var_2)))))))));
                        arr_13 [i_3] = ((/* implicit */signed char) max((1408788658U), (((/* implicit */unsigned int) ((arr_3 [i_0 - 2] [i_1 - 2]) || (arr_3 [i_0 + 3] [i_1 + 1]))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_23 &= ((/* implicit */long long int) var_0);
                            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_2 + 1]);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_2] [21LL] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38831))) * (13204308635851509182ULL))) : (((/* implicit */unsigned long long int) ((long long int) (short)-32758)))));
                        }
                        var_26 = ((/* implicit */unsigned short) arr_0 [(signed char)12]);
                        arr_20 [i_0 - 1] [i_1 - 3] [i_4] [i_2] [i_4 + 4] = (+(((((/* implicit */_Bool) (short)32740)) ? (var_8) : (arr_19 [i_0 + 1] [i_0 + 2] [i_1 - 1] [i_4] [i_2] [i_4 + 4]))));
                    }
                    for (short i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_6 + 3] [i_0] [i_6 + 3] [(unsigned short)2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551615ULL)));
                        arr_25 [i_0] [i_1] [i_2] [i_0] [(unsigned short)6] [i_6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_22 [i_1] [i_1 + 2] [i_1] [i_6])) ? (((/* implicit */int) arr_22 [i_0 - 1] [i_1 - 1] [i_2] [i_6])) : (((/* implicit */int) arr_22 [i_0 + 3] [i_1] [i_2 + 2] [i_6])))));
                        var_27 &= ((/* implicit */unsigned short) (!(max((arr_16 [i_1 + 1] [i_1] [i_0] [i_1] [i_1 - 2] [(signed char)20]), (arr_8 [i_0 + 1] [i_0] [i_2 + 2] [i_6 - 1])))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((((/* implicit */unsigned long long int) (_Bool)1)), (15ULL)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(max((((/* implicit */long long int) (signed char)-30)), (6043424395251822730LL))))))));
}
