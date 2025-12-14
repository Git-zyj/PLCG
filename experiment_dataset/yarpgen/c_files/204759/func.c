/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204759
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : ((~(10268130962829912348ULL))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) 3);
        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_7 [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))));
        var_17 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)8])))))));
    }
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                arr_16 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) arr_1 [i_2 - 1]);
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((arr_1 [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) : (arr_2 [13]))) : (min((max((var_8), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4LL]))))))))))));
                /* LoopSeq 4 */
                for (short i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    arr_19 [7] [i_3] [i_2] = ((/* implicit */unsigned short) (+(max((((unsigned long long int) arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1])), (((/* implicit */unsigned long long int) ((int) 5213246534542240855LL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_22 [i_2] [i_2] [i_4 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) 108757)) : (arr_10 [i_4 - 1])));
                        var_20 = ((/* implicit */short) ((-5213246534542240855LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_4 - 1] [i_5])))));
                    }
                    var_21 = ((/* implicit */unsigned short) var_5);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */long long int) var_13)) & (var_6))))));
                }
                for (short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), (max((arr_10 [2LL]), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [9ULL] [9ULL] [9ULL]))));
                    arr_25 [i_2] [i_2] [(unsigned short)11] [i_6 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_2]))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)64)), (((short) arr_10 [i_2]))))))));
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [3U])) ? (((/* implicit */int) arr_23 [i_2] [4] [(short)6] [i_7 + 1])) : (((/* implicit */int) (short)32749))))) : (((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2 + 1] [(short)6] [i_2] [(unsigned short)10] [i_2])) ? (-5213246534542240872LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                    arr_28 [11] [i_2] [i_7 - 1] = ((/* implicit */short) (-(arr_10 [i_7])));
                }
                for (short i_8 = 1; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)25321)) ? (((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2 + 1] [i_2] [(unsigned char)2] [i_2 - 1] [3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned short)45260)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))))), (((/* implicit */unsigned long long int) var_2))));
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_14 [i_2 + 1])), (max((((/* implicit */unsigned long long int) (unsigned short)55454)), (max((arr_2 [i_8 + 1]), (((/* implicit */unsigned long long int) var_2))))))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1]))));
                }
                /* LoopSeq 3 */
                for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_38 [i_2 + 1] [i_3] [i_2] [i_2] [(short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(var_6))), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_2 - 1] [i_2 - 1])) ? (arr_27 [i_2 + 1] [i_2 - 1]) : (arr_27 [i_2 + 1] [i_2 - 1])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) + (min((((/* implicit */unsigned long long int) arr_20 [i_2] [(signed char)0] [i_3] [i_9] [(signed char)0] [i_11])), (var_8)))))));
                                arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_2] [i_3] [i_9] [i_2] [i_11])) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_2])) : (arr_31 [i_2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                var_28 *= ((((/* implicit */_Bool) ((((6548054206040447918ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)5929)) : (((/* implicit */int) arr_17 [i_2] [i_13] [i_2] [i_13]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_13 [i_2] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_35 [i_2] [i_2] [i_2]))))) ? (arr_27 [i_2] [i_2]) : (((((/* implicit */_Bool) arr_11 [i_12])) ? (arr_27 [i_2] [i_2 + 1]) : (((/* implicit */long long int) var_13))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55454)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)92)), (arr_21 [(unsigned char)10] [i_3] [i_9 - 1] [i_12] [i_12] [i_12])))))));
                                var_29 = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    var_30 = ((((/* implicit */int) arr_42 [i_2] [i_3] [i_9 + 2] [i_9 + 1])) + (((/* implicit */int) var_4)));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                {
                    var_31 = var_9;
                    var_32 = ((/* implicit */int) arr_15 [(unsigned char)4] [(unsigned char)4]);
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_52 [i_2] [i_3] [i_15] [i_16] [(signed char)3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [(signed char)2] [(signed char)2] [i_15]))));
                        arr_53 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2]);
                        var_33 = ((/* implicit */unsigned int) var_2);
                        arr_54 [i_2 + 1] [(short)11] [i_15] [i_16] [i_2] [i_16] = ((/* implicit */long long int) arr_36 [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_57 [i_2] [i_2] [i_2] [i_2] [(unsigned char)0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)92))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_20 [6ULL] [6ULL] [6ULL] [i_15] [i_15] [6ULL])))) : (((/* implicit */int) var_4))));
                            arr_58 [2LL] [2LL] [i_2] [i_16] [i_17] = ((/* implicit */unsigned char) var_9);
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((5213246534542240850LL) / (((((/* implicit */_Bool) -108758)) ? (-5213246534542240872LL) : (((/* implicit */long long int) 1046498757)))))))));
                        }
                        for (signed char i_18 = 3; i_18 < 11; i_18 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) var_8);
                            var_37 = ((/* implicit */long long int) var_7);
                        }
                    }
                    for (long long int i_19 = 4; i_19 < 11; i_19 += 1) /* same iter space */
                    {
                        arr_65 [7] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_2 + 1] [(unsigned short)0] [i_15] [i_19 + 1])) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_49 [i_15])) ? (arr_21 [i_2] [i_2] [i_2] [(_Bool)1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_15] [i_15] [i_19 - 3] [i_2]))))) : (((/* implicit */long long int) 3))));
                        var_38 = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (long long int i_20 = 4; i_20 < 11; i_20 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            arr_71 [i_2] [(unsigned short)10] [(unsigned short)10] [i_20 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_2])) ? (5803242587756763005ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_2] [i_2] [i_2] [(unsigned char)3] [i_21])))));
                            var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5803242587756763000ULL)) ? (arr_61 [i_2 - 1] [i_2] [(unsigned char)11] [i_20 - 2] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) < (((/* implicit */unsigned long long int) ((int) arr_27 [i_2] [i_3])))));
                        }
                        arr_72 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (unsigned char i_22 = 4; i_22 < 11; i_22 += 2) 
                    {
                        arr_76 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2])) ? (((/* implicit */long long int) arr_29 [i_2] [i_3] [i_3])) : (arr_69 [i_2 - 1])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10))) : (18014329790005248LL)));
                        var_40 = ((/* implicit */int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_3])))))));
                        arr_77 [i_2] [i_2] [i_15] [i_15] [i_22] = ((/* implicit */int) (signed char)-123);
                        arr_78 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_66 [3ULL] [4] [8] [3U])) / (((/* implicit */int) arr_66 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_23 = 3; i_23 < 11; i_23 += 2) 
                    {
                        arr_83 [i_2] [i_2] [i_15] [9ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_62 [i_2])) : (((/* implicit */int) arr_47 [i_2] [i_2] [(unsigned char)7])))))));
                        arr_84 [i_2] = ((/* implicit */int) arr_41 [i_2 - 1] [i_3] [(_Bool)1] [i_15] [i_23] [i_23 - 2]);
                        var_41 *= ((/* implicit */signed char) arr_73 [i_2 - 1] [i_2 - 1] [6ULL] [6ULL] [i_23]);
                        arr_85 [i_2] [7LL] [i_2] [i_2] [8ULL] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_21 [i_2] [i_2] [i_15] [i_15] [8ULL] [i_23 - 3]) : (((/* implicit */long long int) var_13)))));
                    }
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        arr_90 [i_2] [i_2] [i_15] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((-(arr_59 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]))) : (((/* implicit */int) arr_42 [i_2] [i_3] [i_3] [i_3]))));
                        arr_91 [i_2] [i_2] [i_2] [i_2] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [(unsigned char)3] [i_24])) : (((/* implicit */int) (unsigned char)149))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (-108785) : (((/* implicit */int) var_14))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        for (long long int i_26 = 0; i_26 < 12; i_26 += 3) 
                        {
                            {
                                arr_97 [i_2 - 1] [i_3] [1] [(unsigned short)4] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
                                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 809521667)) ? (((/* implicit */int) arr_93 [(short)11] [i_2] [i_15] [i_15])) : (((/* implicit */int) arr_47 [i_2 + 1] [i_15] [i_26]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_26])))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    for (unsigned short i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        for (unsigned char i_29 = 0; i_29 < 12; i_29 += 1) 
                        {
                            {
                                arr_105 [i_3] [3U] [i_27] [i_28] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_2]), (((/* implicit */short) var_12)))))) * (max((arr_18 [i_2]), (((/* implicit */long long int) arr_100 [i_2 - 1] [i_2 - 1] [i_28] [(signed char)4])))))))));
                                arr_106 [i_28] [i_3] [i_3] [i_3] [i_3] |= arr_20 [i_2 + 1] [i_3] [i_27] [i_27] [i_28] [i_29];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-14179)), (var_4)))))) : (var_13)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_30 = 2; i_30 < 19; i_30 += 3) /* same iter space */
    {
        arr_110 [i_30 - 1] [i_30] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_109 [i_30 + 1])) ? (arr_107 [(short)2]) : (arr_107 [i_30 - 1]))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_111 [i_30] = ((/* implicit */unsigned long long int) var_3);
    }
    for (long long int i_31 = 2; i_31 < 19; i_31 += 3) /* same iter space */
    {
        arr_116 [i_31] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -108787)) ? (((/* implicit */int) arr_108 [i_31])) : (((/* implicit */int) var_1))))) ? (arr_107 [i_31 + 1]) : (arr_109 [i_31])))));
        var_45 = ((/* implicit */unsigned short) var_12);
    }
}
