/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248821
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((unsigned char) var_3));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_6 [11LL] [11LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-87)))) : (((/* implicit */int) ((_Bool) var_11)))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (signed char)-109;
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_15 [6ULL] [(short)0] [i_4] = ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)-32))))));
            arr_16 [i_3] = ((/* implicit */signed char) (+(var_6)));
            var_16 = ((/* implicit */long long int) (signed char)-26);
            arr_17 [i_3] = ((((/* implicit */_Bool) arr_0 [(short)4])) ? (arr_14 [i_3] [(unsigned short)10]) : (arr_14 [i_3] [i_3]));
            var_17 = ((/* implicit */short) (_Bool)1);
        }
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_6 [i_3] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), ((_Bool)1)));
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 4; i_7 < 11; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_37 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)23038)))) + (2147483647))) << (((2ULL) - (2ULL)))))) % (((((/* implicit */_Bool) 3949151873179642376ULL)) ? (-932467940431950695LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36942)))))));
                                var_21 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                                arr_38 [(short)10] [(signed char)7] [i_10] [(short)9] [(short)9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned int) arr_30 [(short)6] [(short)6] [(short)6] [(short)6] [i_5] [(short)6]))))))) && (((/* implicit */_Bool) (-(631259388U))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (4026531840U))))));
                                arr_39 [i_10] [i_10] [i_7 - 2] [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (signed char)-17))))), (min((var_8), (((/* implicit */unsigned int) (signed char)7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (438562479U));
                                arr_46 [i_12] [i_12] [(short)8] [i_11] [i_12] = ((/* implicit */short) (~(((/* implicit */int) (signed char)85))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) 3789686008U);
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_10 [i_5]))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_50 [8LL] [i_5] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(arr_40 [i_13]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [1LL] [1LL] [1U] [5LL] [1LL] [i_5]))) : (((3820053316259197442LL) / (((arr_13 [i_13] [i_5]) + (arr_13 [i_5] [i_13])))))));
            /* LoopSeq 3 */
            for (signed char i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                var_26 = ((/* implicit */_Bool) var_0);
                arr_53 [i_5] [i_13] [i_14 + 1] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) max((arr_12 [i_13]), (arr_33 [i_14 + 1] [(_Bool)1] [11LL] [1U])))))));
            }
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                arr_57 [(unsigned char)6] [i_13] [1U] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [i_15] [i_15] [(unsigned char)6] [i_5] [(unsigned char)6] [i_5])))) & (((/* implicit */int) (signed char)15))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) arr_21 [i_5] [i_13] [i_15])) : ((-(((/* implicit */int) (signed char)-15)))))))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((int) ((arr_19 [(unsigned char)4]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((long long int) ((arr_56 [(signed char)3] [(signed char)0] [(unsigned char)3]) / (var_1)))))))));
            }
            for (short i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                arr_60 [i_5] [(short)11] [(signed char)1] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)18218)) : (((/* implicit */int) (unsigned char)216))))) ? (2773676271U) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_14 [i_5] [i_13])) ? (((/* implicit */int) arr_29 [i_16] [i_16])) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) arr_24 [i_5])))))))));
                var_29 = ((/* implicit */unsigned long long int) arr_30 [0LL] [i_5] [0LL] [i_5] [i_5] [i_5]);
            }
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_36 [(signed char)10] [1] [(signed char)10] [(signed char)10] [9ULL])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
        }
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        for (unsigned char i_20 = 2; i_20 < 11; i_20 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) (((+(((/* implicit */int) arr_31 [i_5] [i_20 + 1] [i_5] [2LL] [i_20])))) * (((((/* implicit */_Bool) arr_31 [(unsigned short)9] [i_20 + 1] [(short)6] [i_5] [i_5])) ? (((/* implicit */int) arr_31 [i_5] [i_20 - 1] [i_20 - 1] [i_17] [i_20])) : (((/* implicit */int) arr_31 [i_5] [i_20 - 1] [i_5] [i_5] [i_20]))))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((arr_68 [1ULL] [1ULL] [i_18]), ((+(((((/* implicit */_Bool) var_8)) ? (arr_72 [i_5] [4U] [10U] [5] [i_17] [i_5]) : (var_8))))))))));
                                arr_74 [i_5] [i_17] [i_19] [i_20 - 2] = (~(((/* implicit */int) arr_33 [i_5] [(signed char)9] [i_5] [i_20 - 1])));
                            }
                        } 
                    } 
                    arr_75 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (signed char)-104)))));
                    var_33 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(((((/* implicit */_Bool) -1094911337)) ? (6194912149985732674LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-938))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-30704)))))));
    var_35 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (((unsigned short) var_13)))))));
}
