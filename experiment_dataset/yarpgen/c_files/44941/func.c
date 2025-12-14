/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44941
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8348035178330285383ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) 8348035178330285383ULL)) ? (arr_6 [i_3] [i_2] [i_1] [i_0]) : (max((((/* implicit */unsigned long long int) arr_3 [(unsigned short)11] [i_1])), (8348035178330285383ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                        arr_11 [i_0] [i_0] [17LL] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_1] [i_0] [i_3] [i_4])) ? (arr_13 [i_4 - 1] [i_4 - 1] [i_2] [i_3] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22500)))));
                            var_17 = ((/* implicit */unsigned int) arr_9 [i_0] [i_1]);
                        }
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (12565767352963428887ULL)));
                    }
                    arr_15 [i_0] [i_1] [i_1] = max((arr_0 [i_2]), (((signed char) ((long long int) arr_2 [i_1]))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) arr_9 [4ULL] [i_1])))));
                    var_20 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_5 + 3])) ? (((/* implicit */int) arr_16 [(unsigned char)8] [(unsigned char)8] [i_2] [i_5 + 3])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5 + 3]))))) ? (((/* implicit */unsigned long long int) max((arr_19 [i_0] [i_1] [i_5] [i_5 + 3]), (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_5 + 3]))))) : (max((arr_13 [i_0] [16U] [i_2] [i_5 + 3] [i_6]), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_5] [i_5 + 3]))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */long long int) arr_5 [15U] [15U]);
                                var_22 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) arr_19 [2LL] [i_1] [2LL] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */unsigned int) arr_0 [i_6])), (arr_2 [i_0]))))), (max((((/* implicit */unsigned int) (unsigned short)65533)), (arr_18 [i_0] [i_5 + 2] [i_0] [0U] [i_5 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */unsigned int) (unsigned short)65533)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)22509)), (var_7)))) ? (var_10) : (((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33892))))))));
    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)9652)), (((((_Bool) 0ULL)) ? (((/* implicit */unsigned int) -4)) : (var_15)))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_26 += arr_9 [i_7] [i_10];
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9645))) : (4294967295U))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned long long int) arr_22 [i_7])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_8 - 1] [i_12])) ? (arr_10 [i_7] [i_8] [i_8 - 1] [i_12]) : (arr_10 [i_7] [i_7] [i_8 + 1] [i_12])));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [(_Bool)0] [(_Bool)0] [(_Bool)0])) ? (arr_6 [i_7] [i_7] [i_9] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7] [i_7])))))) ? (arr_7 [i_7] [i_7]) : (((/* implicit */long long int) arr_36 [i_7] [i_8] [i_8 - 2] [i_12]))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17311)) ? (arr_4 [i_12] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22500)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_31 [(unsigned char)5] [(unsigned char)5] [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_42 [i_7] [i_8]))))) ? (((/* implicit */long long int) max((1600791953U), (((/* implicit */unsigned int) (signed char)-109))))) : (arr_31 [(unsigned short)14] [i_8] [i_8] [i_8] [i_8])));
                            arr_44 [i_14] [i_8] [i_9] [i_14] [i_13] [i_13] [i_14] = ((unsigned short) arr_25 [i_8] [i_8] [i_8]);
                        }
                        for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((unsigned short) arr_41 [i_8 - 2] [i_8] [i_8 - 1]));
                            arr_48 [(signed char)8] [(signed char)8] [i_9] [i_13] [i_15] = ((/* implicit */long long int) arr_36 [i_15] [i_9] [i_9] [i_7]);
                            var_34 = ((/* implicit */unsigned long long int) arr_5 [i_13] [i_7]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */int) arr_35 [i_7] [i_8] [i_7] [i_8]);
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_9] [i_7])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)21894)), (((((/* implicit */_Bool) arr_5 [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_9] [i_16])) : (((/* implicit */int) arr_0 [i_8]))))))) : (arr_13 [i_8 - 1] [i_13] [i_9] [i_13] [i_16])));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_9])) ? (arr_38 [i_8]) : (((/* implicit */int) max((arr_42 [i_16] [i_16]), (((/* implicit */unsigned short) arr_24 [i_7] [i_7])))))))) ? (((((/* implicit */_Bool) arr_5 [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2354411918U)))) : (arr_30 [i_8 - 2]))) : (((/* implicit */long long int) 4294967295U))));
                            arr_51 [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (short)-9640);
                        }
                        /* vectorizable */
                        for (int i_17 = 3; i_17 < 14; i_17 += 4) 
                        {
                            arr_55 [i_8] [i_17] [i_8] |= ((/* implicit */_Bool) arr_40 [i_17] [i_17] [i_9] [i_17] [i_7]);
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_8 - 1] [i_17 - 3])) ? (((/* implicit */int) arr_33 [i_8 + 1] [i_17 - 2])) : (((/* implicit */int) arr_33 [i_8 - 2] [i_17 - 1]))));
                            arr_56 [i_17] [i_9] [i_17] = ((/* implicit */short) ((signed char) arr_17 [4LL] [i_8] [i_9] [(_Bool)1]));
                            arr_57 [i_17 - 2] [i_17] [i_17] [i_7] = ((/* implicit */unsigned char) arr_47 [i_7] [i_7] [(unsigned char)2] [i_13] [i_17 - 2]);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_60 [i_7] [i_8] [i_8] [i_18] [i_18] = arr_9 [i_7] [i_7];
                        arr_61 [i_7] [i_18] [i_7] [i_7] [i_7] = ((/* implicit */int) ((arr_27 [i_7] [i_8 + 1] [i_7]) ? (((((/* implicit */_Bool) arr_38 [i_18])) ? (1940555377U) : (arr_34 [i_9]))) : (arr_1 [i_18] [i_8 - 1])));
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 4; i_20 < 14; i_20 += 4) 
                    {
                        for (unsigned short i_21 = 3; i_21 < 14; i_21 += 4) 
                        {
                            {
                                var_39 &= ((/* implicit */unsigned short) 2298882260208154155LL);
                                var_40 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_40 [i_8] [i_8 - 2] [i_8 - 2] [i_8] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [12LL] [i_8 + 1] [12LL] [i_8]))) : (arr_40 [i_8] [i_8 - 2] [i_8] [i_8 - 1] [i_8]))));
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48371)) ? (((/* implicit */unsigned long long int) arr_65 [i_7] [i_8] [i_19] [i_7])) : (((((/* implicit */_Bool) (unsigned short)48388)) ? (((/* implicit */unsigned long long int) 2354411916U)) : (arr_40 [i_7] [i_8] [i_19] [i_20] [i_21])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_19] [i_19] [10])) ? (arr_58 [i_7] [i_8] [i_8] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57255)))))) ? (min((((/* implicit */unsigned int) arr_8 [i_21])), (arr_46 [i_8] [3U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_7] [i_8] [i_19] [i_20] [i_21])) ? (((/* implicit */int) arr_25 [i_7] [(unsigned short)5] [i_21])) : (((/* implicit */int) arr_50 [i_7] [i_7] [i_7] [i_7] [i_21 - 1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_7])))));
                                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((long long int) arr_53 [i_21] [i_21] [i_21])))));
                            }
                        } 
                    } 
                    arr_72 [i_19] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_8] [i_8 + 1] [i_8] [i_8 + 1])) ? (((((/* implicit */_Bool) 1940555377U)) ? (-7471437892899802889LL) : (((/* implicit */long long int) arr_19 [i_8] [i_8 + 1] [i_19] [i_19])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_8] [i_8 + 1] [i_19] [i_19]))))));
                }
                arr_73 [i_7] [i_7] [i_8 + 1] = ((/* implicit */unsigned int) arr_23 [i_8]);
            }
        } 
    } 
}
