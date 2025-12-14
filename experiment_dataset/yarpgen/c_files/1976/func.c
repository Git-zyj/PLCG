/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1976
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
    var_12 = (((_Bool)1) ? (((/* implicit */unsigned int) 780138918)) : (1554665250U));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((((_Bool) (_Bool)1)) || (((/* implicit */_Bool) arr_0 [i_1])));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_7)) : (max((((/* implicit */int) arr_1 [i_1])), (-780138926))))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    var_16 -= ((/* implicit */long long int) max((arr_5 [i_0] [(short)0] [i_2 + 1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)63)) > (((/* implicit */int) (unsigned char)227)))))));
                    var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 1012526938618714708LL)) ? (min((((/* implicit */unsigned int) (unsigned char)169)), (1865404409U))) : (1965611153U))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)161)) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (838213471) : (-780138919))) : (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned char)60)) : (1056752450)))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    var_19 += arr_0 [i_0];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) arr_8 [i_3] [i_3] [i_1] [i_3]);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_7))));
                        var_22 = (_Bool)1;
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 2]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_0] [i_1] [i_3]) : (((/* implicit */int) (unsigned char)97))))) ? (1101732010) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_12 [i_0] [4ULL] [4ULL] [(unsigned char)12])))))));
                        var_25 = ((/* implicit */_Bool) (~(2344488806U)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_19 [i_3] [i_6] [i_3] [i_1] [i_0]))));
                            arr_21 [i_3 - 2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((arr_20 [i_3]) / (((/* implicit */long long int) (~(1101732010))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) + (2760326961996116647ULL)));
                        }
                        for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1884066931U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_8 + 1] [i_8]))) : (arr_18 [i_3 - 2] [i_3] [i_8 + 1] [i_8] [i_8 + 2])));
                            arr_26 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (arr_25 [i_6]) : (((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3])) ? (2329356142U) : (((/* implicit */unsigned int) -642336835))))) : (arr_12 [i_0] [i_3 + 1] [i_8 + 2] [i_6])));
                        }
                        arr_27 [i_0] [i_0] [i_3] = arr_23 [i_3] [i_3];
                        var_29 |= ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)36)))) <= (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)1))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) 2344488806U)) ? (arr_20 [i_3]) : (((/* implicit */long long int) arr_7 [i_3 + 1] [i_3 + 1] [i_3]))));
                        arr_28 [3] [3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                    }
                }
                arr_29 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((((/* implicit */long long int) 2)), (8575774521680420979LL))))) >> (((((/* implicit */int) (unsigned char)157)) - (150)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_9] [i_9] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 709672857U))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_9] [i_9] [i_9]))))) : (1950478489U)))) : (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)175))))), (arr_4 [i_9] [i_9] [i_9]))))))));
        var_32 = ((/* implicit */_Bool) 16664459531773560381ULL);
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10784)) ? (((/* implicit */long long int) arr_0 [i_9])) : (((((/* implicit */_Bool) 3585294438U)) ? (-18458812736811195LL) : (((/* implicit */long long int) arr_32 [(unsigned char)6])))))))));
    }
    for (unsigned long long int i_10 = 4; i_10 < 7; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            for (int i_12 = 2; i_12 < 8; i_12 += 3) 
            {
                {
                    arr_41 [(signed char)2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)158)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_33 [i_10] [i_11])) | (arr_2 [i_10]))))))) >> (min((arr_18 [i_10 - 1] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_11 [i_10 - 4] [i_10 - 4] [i_12] [i_12 - 2] [i_12 - 2])), (var_11))))))));
                    arr_42 [i_10] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1782284541935991234ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5849963131237646218ULL)) ? (2344488801U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10])))))) : (max((((/* implicit */unsigned long long int) 69969427U)), (14033727717521995293ULL))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((max((((unsigned long long int) arr_18 [i_10] [i_10] [i_10] [i_10 - 3] [(unsigned short)0])), (((/* implicit */unsigned long long int) min((88242564U), (((/* implicit */unsigned int) arr_16 [i_10]))))))) == (((/* implicit */unsigned long long int) (~(((arr_37 [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7646))) : (arr_0 [i_10])))))))))));
        var_35 &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7942))) - (((((/* implicit */_Bool) arr_20 [i_10])) ? (arr_8 [i_10] [i_10] [i_10] [i_10 + 4]) : (16664459531773560377ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [10] [i_10 + 1] [i_10])))))));
    }
}
