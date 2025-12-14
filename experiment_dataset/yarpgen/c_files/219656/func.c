/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219656
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
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((unsigned long long int) var_15))));
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */short) ((signed char) arr_8 [(_Bool)1] [i_0 + 1]))), (max((arr_8 [i_0] [i_0 + 3]), (arr_8 [i_0] [i_0 + 4])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        var_20 &= ((/* implicit */_Bool) var_3);
                        var_21 = ((/* implicit */_Bool) 38452647);
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        arr_13 [(signed char)8] [i_2] [i_2] [i_4] = ((/* implicit */short) ((unsigned long long int) ((((var_1) ? (11530835593069082287ULL) : (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4] [i_1]))))) : ((~(733824887106612904ULL))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_5]);
                        arr_17 [(signed char)3] [i_5] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) arr_10 [(_Bool)1] [i_2] [i_2] [i_2] [i_0]);
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8128)) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */int) (_Bool)1);
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_1] [0U] [(unsigned short)3] [(unsigned short)11] = ((/* implicit */unsigned char) ((int) max((((signed char) 2031382695U)), (arr_22 [i_0] [2ULL] [(signed char)11] [(short)1] [i_7]))));
                            arr_24 [i_0] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)6] [i_7]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_12 [4ULL] [i_1] [i_2] [i_5]))))), (11U)));
                            arr_25 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)18)), ((-2147483647 - 1))));
                            arr_26 [i_2] [i_7] [(unsigned short)8] [i_5] [5] = ((/* implicit */unsigned short) (+((-(arr_0 [(_Bool)1] [i_0 + 1])))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_8] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)112)))) / (((/* implicit */int) var_13))))));
                            var_26 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)-12))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (arr_21 [i_0 + 1] [i_1] [0U] [i_1])))), (max((((/* implicit */unsigned int) max((arr_27 [i_0] [i_5] [i_1] [i_2] [i_5] [i_8] [i_8]), (((/* implicit */int) var_7))))), (var_16)))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */int) 18446744073709551615ULL);
                        arr_33 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 5491503484315086457ULL);
                        arr_34 [i_0] [i_1] [i_2] [i_2] = (-(((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 4])));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_37 [i_0] [9] [i_2] [i_0] [i_0] [6ULL] = ((/* implicit */short) (((_Bool)1) ? (max((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_0 [i_1] [i_2]))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_28 [(signed char)1] [1LL] [(short)11] [i_10] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_18 [i_0] [i_1])))))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((18446744073709551615ULL) * (((/* implicit */unsigned long long int) var_10))))))) ? (var_6) : ((+(((int) 5793657180654594175ULL))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_40 [i_2] [i_10] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_29 = ((arr_9 [i_10] [(unsigned short)9] [i_1] [i_0]) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_0 + 2] [1ULL] [i_0] [i_0 + 1] [i_0 + 4] [i_0 + 4])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0] [0U] [i_0 + 4] [i_0 + 1] [i_0 + 4])))) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_29 [i_0 - 1] [i_2] [i_0 - 1] [(_Bool)1] [i_2] [(_Bool)1])))));
                            arr_41 [i_11] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_11 [i_0 + 4] [i_1] [(unsigned char)8] [i_10]), (arr_11 [i_0 + 3] [i_1] [i_2] [i_10]))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3])))), (((/* implicit */int) min((arr_6 [i_0 + 3] [i_0 + 3]), (arr_6 [i_0 + 1] [i_0 + 4]))))))));
                            var_31 = (+(((((/* implicit */_Bool) 0ULL)) ? (arr_15 [i_2] [4] [i_10]) : (((/* implicit */int) max(((signed char)-125), (((/* implicit */signed char) (_Bool)1))))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((int) arr_15 [i_2] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_32 [i_12] [i_10] [(signed char)8] [i_1])))))) : (((/* implicit */int) arr_14 [i_0] [11ULL] [i_0] [i_0] [0ULL] [i_0]))));
                            var_33 = ((/* implicit */int) (_Bool)1);
                        }
                    }
                }
            } 
        } 
    } 
}
