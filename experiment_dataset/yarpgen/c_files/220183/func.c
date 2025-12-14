/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220183
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_8)) : (0ULL)))) ? (min((arr_4 [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_2])))) : (max((3072108905U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_2])))))) > (arr_4 [i_0] [i_2] [i_2])));
                                arr_12 [(unsigned short)4] [i_0] [6U] = ((/* implicit */_Bool) ((signed char) ((unsigned int) max((arr_3 [(short)4] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (((/* implicit */long long int) arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 7; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 2872009732U))) / (max((((((/* implicit */_Bool) 1784838710U)) ? (var_9) : (((/* implicit */unsigned long long int) 1757814277393244129LL)))), (((unsigned long long int) var_6))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_19 [i_2] [i_6 + 3] [i_6] [i_6] [i_6 + 3] [i_6 + 3] [0ULL]), (arr_19 [i_2] [i_6 + 3] [i_6] [i_6] [i_6 - 2] [i_6] [i_6 - 4])))))))));
                                var_16 += ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) arr_7 [i_0] [i_6 - 3] [i_6 + 1] [i_6])), (var_6))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [9LL] [i_2] = ((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_0] [i_2] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    arr_28 [i_0] [i_7] [i_7] = max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_7] [i_7] [i_0])) < (((/* implicit */int) arr_5 [0] [i_0] [i_7] [i_0]))))), (((((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_7] [i_7] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_7] [i_0] [i_0])) : (((/* implicit */int) arr_5 [6U] [6U] [i_8] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) arr_15 [i_0] [i_0]);
                        var_17 -= ((/* implicit */unsigned char) (signed char)35);
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_10 = 3; i_10 < 8; i_10 += 1) 
        {
            arr_35 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)13603))))), (arr_4 [i_0] [i_10 - 2] [i_0])))));
            var_18 ^= ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_10] [(signed char)6])), (var_8))));
            /* LoopSeq 4 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 8; i_12 += 3) 
                {
                    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) arr_16 [(signed char)2] [i_0] [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1]);
                            var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */long long int) var_11)) & (min((((/* implicit */long long int) arr_33 [6ULL])), ((+(arr_19 [(unsigned char)4] [i_12] [i_10 - 1] [i_11] [i_11] [i_10 - 1] [(unsigned char)4])))))))));
                            var_21 = ((/* implicit */signed char) ((arr_29 [i_13 + 2] [(unsigned char)2] [i_0] [i_0] [i_13 - 1] [(unsigned char)2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29918))) : (((((((/* implicit */_Bool) var_2)) ? (arr_42 [i_0] [i_11] [i_0] [(unsigned short)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_11] [i_11])))))));
                        }
                    } 
                } 
                arr_47 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? ((-(((/* implicit */int) arr_40 [i_0] [i_10] [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))) - (((/* implicit */int) max((arr_3 [i_11] [i_0] [i_0]), (((/* implicit */unsigned short) arr_21 [8U] [i_0])))))));
                arr_48 [i_10 - 3] [i_10 - 1] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11] [(unsigned char)9] [i_11] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_11])) - (((/* implicit */int) (signed char)(-127 - 1)))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_10 - 1] [i_0] [i_10 - 3] [i_10 + 2] [6ULL] [i_11])) ? (((/* implicit */int) arr_16 [i_10 - 2] [i_0] [i_10] [i_10 + 1] [i_11] [i_10 - 2])) : (((/* implicit */int) arr_16 [i_10 + 2] [i_0] [(_Bool)1] [i_10 - 2] [i_10 + 1] [i_10 + 2])))))));
            }
            for (long long int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max(((-(arr_42 [i_10 - 2] [i_10] [0LL] [i_14]))), (((/* implicit */unsigned int) ((signed char) arr_42 [i_10 - 1] [i_10] [(unsigned char)4] [i_0]))))))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_23 = ((/* implicit */int) max((((/* implicit */short) arr_27 [i_10] [i_14] [i_15] [i_16])), (arr_16 [i_10 + 2] [i_0] [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 - 1])));
                        var_24 *= ((/* implicit */unsigned char) (~((~(arr_8 [i_0] [i_14] [i_15] [i_10 - 1])))));
                    }
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_22 [i_10] [(signed char)8]);
                        arr_57 [(unsigned char)7] [i_10] [i_14] [i_15] [i_0] = ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0]));
                    }
                    for (short i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        arr_62 [i_0] [i_10 + 1] [(_Bool)1] [i_0] [i_18] = ((/* implicit */unsigned char) max((((unsigned short) arr_15 [i_0] [i_10 + 1])), (((/* implicit */unsigned short) ((arr_0 [i_10 - 1]) <= (arr_0 [i_10 - 1]))))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_19]))) - (((((/* implicit */_Bool) arr_14 [(unsigned char)1] [i_10] [i_14] [i_15] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) : (arr_13 [i_0] [i_0] [8U] [i_15]))))))));
                        var_28 = ((/* implicit */int) ((unsigned long long int) arr_60 [i_10 - 1] [i_10] [i_10 + 1] [i_10] [i_10 - 1]));
                        var_29 = ((/* implicit */int) (!(arr_40 [i_0] [i_10] [(unsigned short)5] [(unsigned short)5])));
                    }
                    arr_66 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-36))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
            {
                arr_70 [i_20] [i_0] [i_20] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)35)) ? (arr_68 [i_10 - 3] [i_0]) : (arr_68 [i_10 + 2] [i_0])));
                var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_59 [i_10 + 2] [i_10] [i_20] [i_20] [i_10] [i_10] [i_20]))));
                var_31 = ((/* implicit */short) (-(((var_9) - (((/* implicit */unsigned long long int) var_11))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
            {
                arr_73 [4LL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_10 - 3] [i_0] [i_0] [i_10])) ? (arr_8 [i_10 - 3] [i_0] [i_0] [i_10]) : (arr_8 [i_10 - 3] [i_0] [i_0] [i_0])))) : (min((arr_68 [i_0] [i_0]), (53409939U)))));
                arr_74 [i_0] [i_10] [i_10] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [(unsigned char)2] [i_10] [i_0] [i_21])))))) * (min((((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_10] [i_0] [i_21] [0]))), (max((var_7), (((/* implicit */long long int) 0U))))))));
            }
        }
        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            arr_77 [i_0] [(_Bool)1] [i_22] = ((/* implicit */long long int) ((unsigned char) (~(((((/* implicit */int) (short)13603)) ^ (((/* implicit */int) var_1)))))));
            var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_40 [i_0] [i_22] [i_22] [i_22])) < (((/* implicit */int) (unsigned char)0)))))));
            /* LoopSeq 1 */
            for (short i_23 = 1; i_23 < 9; i_23 += 3) 
            {
                arr_80 [i_0] [i_22] [i_0] [i_0] = ((/* implicit */int) (+(((unsigned long long int) max((arr_51 [i_0] [i_22] [i_23] [i_23]), (((/* implicit */unsigned char) arr_29 [i_0] [i_22] [i_0] [i_22] [i_22] [i_23 - 1])))))));
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    for (unsigned int i_25 = 1; i_25 < 9; i_25 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)59590), (arr_14 [i_0] [(unsigned short)2] [i_25 - 1] [i_25] [i_25]))))) <= (min((((/* implicit */unsigned int) arr_11 [i_25] [0LL] [i_22] [i_25 + 1] [i_25])), (((arr_29 [(unsigned char)8] [i_24] [i_22] [i_22] [i_22] [i_0]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))))))))));
                            arr_87 [i_22] [i_25] [i_23] [i_24] [i_0] [i_23 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0] [i_23])))), (((/* implicit */int) arr_71 [i_23 - 1] [i_25 - 1] [i_25] [i_25 - 1]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((arr_53 [i_0] [i_22] [8U] [i_24] [i_23 - 1] [i_25]), (arr_53 [i_0] [i_22] [i_25] [i_24] [i_23 + 1] [i_25]))))));
                            arr_88 [9U] [i_22] [i_22] [i_23 + 1] [i_0] [i_24] [9U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-36)), ((unsigned char)0)))), ((~(arr_83 [i_0] [i_22] [i_22]))))))));
                            arr_89 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_22] [i_23] [i_24]))) > (arr_41 [i_0]))))) % (arr_72 [i_0]))), (((/* implicit */long long int) arr_8 [i_0] [i_23 - 1] [i_0] [i_25 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_26 = 0; i_26 < 10; i_26 += 1) 
                {
                    arr_92 [i_0] [0U] [i_23] [i_26] = ((/* implicit */int) arr_15 [i_0] [4LL]);
                    arr_93 [i_0] [i_22] [i_23] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_0] [4LL] [i_0] [i_23 + 1] [i_26])), (arr_13 [i_0] [i_0] [i_23] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_22] [i_0] [5] [i_26]))))) : ((((-(arr_26 [i_0] [i_22] [4LL] [i_0]))) / (arr_90 [i_22] [i_22] [i_23 - 1])))));
                }
                arr_94 [i_0] [i_0] [3ULL] = ((/* implicit */long long int) min((min((arr_18 [i_23 - 1] [i_23 - 1]), (arr_18 [i_23 - 1] [i_23]))), (arr_18 [i_23 + 1] [i_23 + 1])));
            }
        }
        for (int i_27 = 4; i_27 < 7; i_27 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 1) 
            {
                var_34 -= ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_55 [i_0] [i_27 - 3] [i_27] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_75 [(unsigned short)0] [i_27] [(unsigned short)0])) ? (((/* implicit */int) arr_95 [8ULL] [8ULL])) : (((/* implicit */int) arr_50 [i_0] [2U] [i_28] [(signed char)4]))))))));
                var_35 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [(unsigned char)6] [i_0] [i_27 - 4] [i_28]))))), ((+(var_3)))));
            }
            var_36 = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_10 [i_0] [2LL] [i_0] [i_0] [i_0]))));
            /* LoopSeq 3 */
            for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                arr_103 [i_0] [i_0] [i_27] [i_29] = (-(arr_42 [i_27] [i_27 - 3] [i_0] [i_27 - 1]));
                arr_104 [i_0] [i_0] [i_27] [i_29] = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(arr_26 [i_0] [i_27 - 4] [i_0] [i_0])))) ? (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) arr_40 [i_0] [i_27] [i_0] [i_29]))))) : (min((((/* implicit */long long int) var_11)), (9151314442816847872LL)))))));
                arr_105 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_27 - 3] [i_27] [i_27 - 3] [i_27 + 1] [i_29] [i_29])) ? (((/* implicit */int) arr_55 [i_27 - 3] [i_27] [i_27] [i_27 + 1] [i_27] [i_27 + 1])) : (((/* implicit */int) (signed char)24))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -239937719)) ? (1459918074U) : (arr_0 [i_27 + 1])))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)122)), (var_3)))), (max((arr_10 [i_0] [i_27] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-101))))))));
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 10; i_30 += 3) 
                {
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_91 [i_0] [i_0]), (arr_69 [i_29] [i_31 - 1] [i_31 - 1] [i_27 - 1]))))) <= (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_75 [i_0] [i_29] [i_30])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21879)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3)))) : (min((arr_6 [i_30] [i_27] [i_27] [i_27 + 1]), (var_9)))))));
                            arr_112 [i_27] [i_27 + 3] [i_29] [i_0] [i_31] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_49 [i_27 + 3] [i_27 + 1])) ? (arr_52 [i_27 - 2] [i_0] [i_27] [2U]) : (arr_52 [i_27] [i_0] [i_27] [i_27]))), (((/* implicit */unsigned int) ((unsigned short) arr_52 [i_27] [i_0] [i_27] [1U])))));
                            arr_113 [i_27] [i_0] [i_29] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) min((arr_24 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))))) / (arr_110 [i_0] [i_31] [i_0] [i_30] [i_31 - 1] [i_31] [i_31])));
                        }
                    } 
                } 
                arr_114 [i_29] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_16 [i_27 - 1] [i_0] [i_27 - 4] [i_27] [i_27 - 4] [i_27 - 4])))), (((/* implicit */int) ((unsigned char) (+(arr_37 [i_0] [i_0] [i_0] [i_29])))))));
            }
            for (unsigned char i_32 = 0; i_32 < 10; i_32 += 3) 
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_4)), (-7738182981980394371LL)))))) ? ((-((+(((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_85 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_32])))))))));
                arr_118 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */short) min(((+(((((/* implicit */_Bool) arr_36 [i_0] [i_0] [(unsigned char)7] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (var_9))))), (((/* implicit */unsigned long long int) (~((~(arr_115 [i_0] [i_0] [i_0]))))))));
                arr_119 [i_0] [i_0] [i_27 - 3] [i_0] = ((/* implicit */unsigned short) arr_58 [i_0] [i_0] [i_0] [i_27 + 2] [(unsigned char)6]);
            }
            for (unsigned short i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                arr_123 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(arr_100 [i_0] [i_27 - 1] [i_33] [i_27 + 3]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))) ? (max((((/* implicit */unsigned long long int) arr_78 [i_27 - 1] [i_27 + 1])), (var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) var_8))), (var_0))))));
                arr_124 [i_0] [i_0] [i_33] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [4U])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_122 [i_27 - 1]))))) : (((/* implicit */int) min(((unsigned char)48), (((/* implicit */unsigned char) arr_111 [i_0] [i_0] [i_27 - 4])))))));
            }
        }
    }
    for (int i_34 = 0; i_34 < 10; i_34 += 1) 
    {
        arr_128 [i_34] [i_34] = ((/* implicit */long long int) min(((-(max((arr_115 [4U] [4U] [i_34]), (arr_83 [i_34] [i_34] [i_34]))))), (((/* implicit */int) ((min((arr_72 [i_34]), (((/* implicit */long long int) 4294967295U)))) >= (((/* implicit */long long int) arr_121 [i_34] [i_34] [i_34] [i_34])))))));
        var_39 = ((/* implicit */long long int) var_0);
    }
    var_40 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((var_0) / (4294967295U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) var_4))))));
}
