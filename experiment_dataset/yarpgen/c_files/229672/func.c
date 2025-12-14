/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229672
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (signed char)63))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_1] [11LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-47))));
                var_21 = ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]);
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((var_6), (var_14)))) != (arr_0 [i_0])))) <= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((min((var_4), (((/* implicit */int) var_16)))) * (((((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned short)10])) / (arr_0 [i_0]))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [(signed char)17] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)5048))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), ((unsigned short)60504))), (var_9)))) : (((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */int) (unsigned short)4690)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)60481)))))))));
                        var_24 *= ((/* implicit */unsigned char) (-(var_12)));
                        arr_10 [(signed char)3] [i_1] [i_3] = ((/* implicit */signed char) max((((((((/* implicit */int) var_14)) << (((3063500398019233760LL) - (3063500398019233757LL))))) / (((/* implicit */int) ((_Bool) var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5031)) ^ (((/* implicit */int) (signed char)28))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 2] [i_1])))));
                        arr_14 [i_1] [i_1] [i_2] [19] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)17))));
                        arr_15 [i_1] [i_4] = arr_3 [(signed char)9] [i_2 - 3] [i_2 - 3];
                    }
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) (signed char)-99);
                        arr_20 [i_0] [i_5] [i_5] |= min((((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [(short)4] [i_5])) ? (arr_8 [i_0] [i_2 + 3] [i_2 - 4] [17U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) var_18)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            arr_28 [(unsigned char)21] [i_1] [(unsigned char)21] [(unsigned char)21] [i_1] [i_6] = ((/* implicit */unsigned int) var_10);
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_17)) * (((/* implicit */int) var_5)))) >= ((-(var_18)))))) == (max((((/* implicit */int) arr_11 [(unsigned short)22] [i_6] [i_2 - 1] [i_1] [i_1])), (((((/* implicit */_Bool) (unsigned short)60508)) ? (((/* implicit */int) (unsigned short)60846)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))));
                            arr_29 [i_1] [i_0] [i_1] [i_2 - 1] [(unsigned short)4] [i_6] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7 - 1])))))) >= (((((/* implicit */_Bool) arr_16 [i_7 - 1])) ? (arr_16 [i_7 - 1]) : (var_19))));
                        }
                        arr_30 [i_0] [(unsigned short)21] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_6] [i_1]))))), (arr_24 [i_2] [i_2 - 3] [i_1] [i_0] [i_6] [i_6])));
                        arr_31 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(arr_22 [i_0] [i_1])));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned int) arr_23 [i_0] [(short)16] [i_0])))));
                        var_29 *= ((/* implicit */signed char) ((((var_13) ? (arr_27 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)4705))))));
                    }
                    for (signed char i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        arr_34 [i_1] [i_2] = ((/* implicit */short) arr_19 [(short)13] [i_1] [(short)13] [i_8] [i_2] [i_8 - 2]);
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))) : (14020545124650504942ULL))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) arr_13 [(short)13]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_41 [i_10] [i_0] [i_2 + 3] [i_1] [i_10] = ((/* implicit */long long int) 2185271106U);
                                arr_42 [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned char)18] [i_2] [i_2 - 2] [(unsigned char)18] [i_2 + 2])) || (((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_2 + 3] [i_10] [i_10 + 3])))))));
                                arr_43 [(unsigned short)4] [i_2] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), (max((((/* implicit */unsigned int) arr_36 [i_10 - 2] [i_10 + 2] [i_10 - 1] [i_10 - 1])), (2929230895U)))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_26 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 3]) : (arr_26 [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 - 2])))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_1]))) : (((((/* implicit */_Bool) max((arr_36 [i_0] [i_0] [16U] [i_10]), (arr_13 [i_9])))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)22884)))) : (((((/* implicit */int) arr_40 [22U] [i_1] [17LL] [i_1] [22U])) / (((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_11 = 4; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_1] = ((unsigned int) arr_1 [i_11 + 2]);
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        arr_50 [i_12 + 2] [i_1] [(signed char)23] [(signed char)23] [i_0] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)55435)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) arr_38 [(_Bool)1] [i_1] [i_12 + 2] [i_1] [i_11 + 3]))));
                        var_32 *= ((/* implicit */unsigned int) var_16);
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_53 [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_12 + 2]) <= (arr_0 [i_12 - 1])));
                            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30866)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-34))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11] [i_11 - 4] [i_12 - 1]))) : ((-(797912006821101121ULL)))));
                            var_34 *= ((/* implicit */short) ((signed char) arr_44 [i_12 + 1] [i_11] [i_11] [i_1]));
                        }
                    }
                    for (unsigned int i_14 = 1; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        arr_56 [24LL] [i_0] [i_1] [(_Bool)1] [i_1] [3U] = ((/* implicit */unsigned int) ((long long int) var_3));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_18)) < (arr_33 [i_0])));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((short) arr_48 [i_15 + 1] [i_15 - 1] [i_11] [i_15 - 1] [(unsigned short)24] [i_15])))));
                            var_37 = ((/* implicit */unsigned short) ((unsigned long long int) (short)-393));
                            arr_59 [i_0] [i_1] [(short)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) << (((var_4) - (565772292)))))) ? (arr_58 [7ULL] [i_14 + 3] [i_15 + 2] [i_15 + 2] [i_15 + 2]) : (arr_39 [18U] [(_Bool)1] [18U] [i_1] [(_Bool)1])));
                        }
                        for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_63 [i_1] = ((/* implicit */unsigned int) var_8);
                            var_38 ^= ((((/* implicit */_Bool) arr_55 [i_11 + 1] [i_14 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])) ? (arr_55 [5LL] [i_14 - 1] [5LL] [16] [i_11 + 1]) : (arr_55 [i_16] [i_14 - 1] [i_14] [i_14 + 1] [i_11 + 1]));
                            var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 1799675456))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_25 [i_0] [i_14 - 1] [(signed char)10] [i_16] [i_16] [(short)16] [i_0])));
                            arr_64 [19U] [19U] [i_16] [i_16] [i_16] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) ^ (var_1))));
                        }
                        arr_65 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_14 + 1] [i_1]))));
                        arr_66 [i_1] [i_1] = ((/* implicit */short) (+(var_8)));
                    }
                    for (unsigned int i_17 = 1; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        arr_71 [i_1] = ((/* implicit */unsigned int) ((unsigned short) var_14));
                        var_40 = ((/* implicit */unsigned int) var_9);
                        arr_72 [i_0] [i_1] [i_11 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)35)) ? ((((_Bool)1) ? (var_4) : (arr_52 [i_0] [i_1] [i_1] [(unsigned char)19]))) : (((/* implicit */int) ((signed char) -5591523519168683068LL)))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        arr_76 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)60487))));
        /* LoopNest 2 */
        for (unsigned short i_19 = 3; i_19 < 12; i_19 += 4) 
        {
            for (unsigned short i_20 = 1; i_20 < 15; i_20 += 1) 
            {
                {
                    var_41 = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        var_42 *= ((/* implicit */short) ((((unsigned int) arr_36 [i_20] [i_19 - 2] [i_20] [i_18 - 1])) & (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_18] [(unsigned short)15] [i_21] [i_18 - 1])))));
                        arr_83 [i_18] [i_20] [i_20] [i_20 - 1] = ((/* implicit */signed char) arr_54 [i_18] [i_18] [i_18] [i_18] [i_20] [i_20]);
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        arr_86 [i_18] [i_22] [i_20] [i_20 - 1] [i_19] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)5048)) * (((/* implicit */int) (unsigned short)55448)))) | (((/* implicit */int) arr_70 [i_20 + 1] [i_20] [i_20 - 1] [i_20]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
                        {
                            arr_90 [i_18] [i_22] [i_22] [i_18] [i_18] [i_19 + 1] [i_18] = ((/* implicit */unsigned short) (((~(636943608U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_54 [i_18] [i_19] [i_20 + 1] [i_22] [i_22] [11]))))));
                            var_43 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (short)-15272)) > (((/* implicit */int) (unsigned short)55447)))))));
                            var_44 *= ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)37)))) >> (((/* implicit */int) arr_32 [i_18 - 1] [i_18 - 1] [i_20 - 1] [i_18 - 1] [i_19 + 2]))));
                        }
                        arr_91 [14LL] [i_19 + 1] [i_20 - 1] [i_22] |= ((/* implicit */unsigned long long int) arr_45 [i_18] [i_18] [i_20] [(unsigned short)9]);
                        arr_92 [i_18 - 1] [(signed char)0] [i_18] [i_18] &= ((/* implicit */unsigned short) (signed char)-37);
                        var_45 *= ((/* implicit */unsigned short) ((arr_84 [0U] [i_19 + 3] [i_22]) <= (((/* implicit */long long int) var_4))));
                    }
                    for (short i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_25 = 3; i_25 < 15; i_25 += 4) 
                        {
                            arr_99 [i_18] = ((/* implicit */signed char) ((3658023700U) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_89 [i_20] [i_20] [i_20 + 1] [i_20 + 1]))))));
                            var_46 *= ((/* implicit */signed char) ((short) (signed char)75));
                        }
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (signed char)-16))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) var_19)) : (arr_96 [i_19] [i_19] [i_26] [(short)2] [i_18 - 1])));
                        var_49 = ((/* implicit */signed char) ((arr_62 [i_18] [i_18] [i_18] [i_18] [i_18]) != (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)2232)) >= (((/* implicit */int) (signed char)-115))))))));
                        arr_102 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_26] [i_20] [i_20] [i_19] [i_18])) | (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-73))))) ? (max(((~(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_96 [(unsigned short)0] [i_18] [i_20] [i_18] [i_18 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [(signed char)4] [i_20] [i_20] [i_20 + 1] [i_20 + 1])))))));
                    }
                    var_50 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_19 - 3] [i_19 - 1] [i_19] [(signed char)4] [i_19 + 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60487)) && (((/* implicit */_Bool) arr_98 [i_20 + 1] [i_18] [(short)5] [i_20] [i_20 - 1]))))) : (((/* implicit */int) max((arr_7 [i_18] [i_18] [(unsigned char)2]), ((signed char)-34))))))), (arr_78 [i_18] [i_19]));
                }
            } 
        } 
    }
}
