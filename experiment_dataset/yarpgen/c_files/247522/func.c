/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247522
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
    var_14 |= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (signed char)-83))), (max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_4)))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)-35)))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (unsigned char)5))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)15));
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (-(((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)239))))))) & ((((!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned char)8])) * (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_2)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) ((arr_5 [i_1 + 1]) && (((/* implicit */_Bool) 4286733088U))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    arr_13 [i_0] [i_1] [i_2] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8234207U)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0]))));
                    arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_12 [i_2 + 2] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_2 + 2] [i_1] [i_1] [i_1 - 1]))));
                    arr_15 [5ULL] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) arr_8 [i_2 + 2]));
                    arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_2] [i_3])) ? (((/* implicit */int) arr_12 [(signed char)2] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 2]))));
                }
                arr_17 [i_1] = ((/* implicit */unsigned short) ((arr_10 [i_1] [i_2 + 1] [i_1] [i_1]) ? (arr_6 [i_2 + 2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))));
                var_18 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [(signed char)2] [i_1] [i_2])))))) - (((arr_0 [i_2]) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-25)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [2LL] [i_0]))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 4; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [5] [i_2 - 1] [5] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [(unsigned short)8] [i_4] [i_5 + 2])) == (((/* implicit */int) (unsigned char)97)))) ? (((/* implicit */int) (short)-3675)) : (((/* implicit */int) arr_1 [i_5 - 1]))));
                        arr_24 [i_0] [i_1] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4286733088U))));
                        arr_25 [i_0] [i_1] [i_2 - 1] [(unsigned short)7] [i_5] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1 + 1]) || (arr_5 [i_1 - 1])));
                        var_20 = ((/* implicit */unsigned int) ((arr_6 [i_5 - 2] [i_5] [i_1 + 1]) & (((/* implicit */long long int) 2615601070U))));
                    }
                    for (short i_6 = 4; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_1 - 2]);
                        var_22 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1 - 2] [i_1 - 2] [i_2]))));
                    }
                    for (short i_7 = 4; i_7 < 9; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) > (1188556056684481188ULL));
                        arr_31 [i_0] [i_2] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    }
                }
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_22 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_20 [i_0] [i_2 - 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8])));
                    var_23 = ((/* implicit */unsigned long long int) (~(arr_21 [i_1])));
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((1188556056684481200ULL) - (18446744073709551604ULL))) > (((/* implicit */unsigned long long int) 1679366225U))));
                        arr_39 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_0]) + (arr_2 [i_10])));
                    }
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_25 = ((unsigned long long int) (_Bool)0);
                        arr_42 [2] [i_0] [i_1] [i_2] [i_2] [i_9] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 17258188017025070396ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551604ULL)))));
                        var_26 = ((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0]);
                    }
                    arr_43 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (signed char)53));
                    arr_44 [i_1] = ((/* implicit */signed char) arr_19 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0]);
                    arr_45 [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) 1679366225U));
                }
            }
            arr_46 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((int) var_4)), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1] [i_1])))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)151))))), (max(((unsigned short)15197), ((unsigned short)657))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_52 [i_12] = ((/* implicit */short) 0ULL);
            /* LoopSeq 4 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                arr_55 [i_12] [i_12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_12])) ? (((/* implicit */int) arr_49 [i_13])) : ((+(((/* implicit */int) arr_48 [i_12] [i_12]))))));
                var_27 = ((/* implicit */unsigned int) arr_48 [i_12] [i_12]);
            }
            for (signed char i_15 = 4; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) ((short) arr_56 [i_12] [i_12] [i_12] [i_12]));
                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_49 [i_15 - 2]))));
                var_30 |= ((/* implicit */unsigned short) ((signed char) ((unsigned short) arr_50 [i_12] [i_13] [i_15])));
            }
            for (signed char i_16 = 4; i_16 < 13; i_16 += 2) /* same iter space */
            {
                arr_61 [i_16] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) arr_49 [i_13]);
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!(((((/* implicit */_Bool) -1705443983)) && (((/* implicit */_Bool) (unsigned short)52010)))))))));
                var_32 |= ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                var_33 = ((/* implicit */unsigned short) arr_57 [i_16] [i_13] [i_12] [i_12]);
            }
            for (int i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                arr_64 [(unsigned short)0] [i_13] [(unsigned short)0] [i_12] = ((/* implicit */unsigned char) (-(arr_56 [i_12] [i_13] [i_17 + 2] [i_12])));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 11; i_19 += 1) 
                    {
                        {
                            arr_69 [i_12] [i_12] [i_12] [i_12] [i_18] [i_19] = ((/* implicit */unsigned char) arr_66 [i_19 + 1] [i_13] [i_17 + 2] [i_12]);
                            var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)64908))));
                            arr_70 [i_12] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 18446744073709551611ULL))) - (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) arr_48 [i_12] [i_12])) : (((/* implicit */int) (unsigned short)29005))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_12] [i_12] [i_12] [i_12])) || (((/* implicit */_Bool) 862319422U))));
            }
        }
        for (unsigned int i_20 = 1; i_20 < 12; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_67 [i_21] [i_20 - 1]))));
                        var_37 = ((/* implicit */int) arr_53 [9] [i_20] [i_20 + 1]);
                        var_38 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) 11956024225151484273ULL)))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 12ULL)) && (((/* implicit */_Bool) arr_49 [i_12])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_63 [i_12]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_20]))) - (1188556056684481195ULL)))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_23 = 3; i_23 < 11; i_23 += 2) 
        {
            arr_81 [i_12] = (i_12 % 2 == zero) ? (((/* implicit */unsigned short) ((((arr_56 [(unsigned char)7] [i_23 - 2] [i_12] [i_12]) + (9223372036854775807LL))) >> (((arr_56 [i_23] [i_23 + 1] [i_12] [i_12]) + (8435461670642248929LL)))))) : (((/* implicit */unsigned short) ((((((arr_56 [(unsigned char)7] [i_23 - 2] [i_12] [i_12]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((arr_56 [i_23] [i_23 + 1] [i_12] [i_12]) - (8435461670642248929LL))) + (3250020813427109375LL))))));
            /* LoopNest 3 */
            for (short i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                for (unsigned int i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)37952)))))));
                            var_41 = ((/* implicit */long long int) (unsigned char)111);
                        }
                    } 
                } 
            } 
            var_42 = arr_88 [i_23 + 2] [i_23] [i_23 - 3] [i_23] [i_23] [i_23 - 1] [i_23 + 1];
        }
        for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 1) 
        {
            var_43 |= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [(short)8] [8LL] [(short)8]))) : (0ULL)))) && (((/* implicit */_Bool) ((15U) >> (((arr_62 [i_12] [i_12] [(short)3] [i_27]) - (667247442))))))));
            /* LoopSeq 1 */
            for (unsigned char i_28 = 1; i_28 < 13; i_28 += 2) 
            {
                var_44 = ((/* implicit */long long int) (~(((/* implicit */int) (short)4367))));
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 14; i_29 += 1) 
                {
                    for (unsigned short i_30 = 0; i_30 < 14; i_30 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 12ULL)) || (((/* implicit */_Bool) arr_58 [i_28] [i_29]))))) : (((/* implicit */int) arr_60 [i_28 - 1] [(unsigned short)6] [i_28 + 1])))))));
                            arr_101 [10LL] [i_12] [i_29] [i_29] [i_30] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) & (-1160695336))) > (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (short)-5532)))))));
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [i_28] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
                arr_102 [i_12] [i_12] = ((/* implicit */_Bool) ((short) arr_95 [i_12] [i_12] [i_28 - 1]));
            }
        }
    }
    for (signed char i_31 = 0; i_31 < 10; i_31 += 1) 
    {
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) arr_56 [i_31] [i_31] [i_31] [6LL]))));
        var_48 = ((/* implicit */unsigned int) ((unsigned short) max((((var_10) ? (arr_74 [(unsigned short)4] [i_31]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned int) ((arr_62 [i_31] [i_31] [i_31] [i_31]) <= (1461347214)))))));
    }
    for (int i_32 = 3; i_32 < 20; i_32 += 3) 
    {
        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_105 [i_32 + 3])))))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_105 [i_32])))), (((/* implicit */int) arr_105 [i_32 + 2]))))) : (arr_106 [i_32 - 3] [i_32 + 2])));
        /* LoopNest 2 */
        for (signed char i_33 = 0; i_33 < 23; i_33 += 4) 
        {
            for (signed char i_34 = 3; i_34 < 21; i_34 += 2) 
            {
                {
                    arr_112 [i_34] [0U] [i_34] [i_32 + 1] = ((/* implicit */int) (unsigned short)20252);
                    arr_113 [i_34] [i_34] [i_34 + 1] = ((/* implicit */long long int) ((short) max((arr_110 [i_33] [i_34 - 2] [(unsigned char)18] [i_32 + 1]), (((/* implicit */unsigned long long int) -8665644629860570145LL)))));
                    var_50 |= ((/* implicit */int) min((268435454U), (((/* implicit */unsigned int) (unsigned short)48777))));
                }
            } 
        } 
        arr_114 [i_32] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_105 [i_32 + 1])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_35 = 0; i_35 < 17; i_35 += 1) 
    {
        for (unsigned short i_36 = 1; i_36 < 15; i_36 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_37 = 0; i_37 < 17; i_37 += 1) 
                {
                    for (unsigned long long int i_38 = 0; i_38 < 17; i_38 += 1) 
                    {
                        for (short i_39 = 1; i_39 < 15; i_39 += 2) 
                        {
                            {
                                arr_127 [i_35] [i_36] [i_35] [i_35] [i_39] [12U] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_121 [i_37]))) ^ (arr_106 [i_37] [i_37]))))));
                                var_51 = ((/* implicit */unsigned int) 9393515916020053736ULL);
                                arr_128 [i_35] [i_36] [i_36] [i_35] [i_35] = ((/* implicit */unsigned char) (-(min(((-(arr_118 [i_35]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_120 [i_35] [i_36 + 1] [i_38] [i_39])), (arr_107 [i_35] [i_35] [i_37]))))))));
                                var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_107 [16U] [i_36] [(unsigned short)6]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_122 [i_35] [i_37] [i_37] [i_35])) : (((/* implicit */int) arr_108 [i_36 - 1] [i_36]))))) ? (((((/* implicit */_Bool) (-(arr_109 [i_35] [i_38] [i_35])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_115 [i_35]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_125 [i_35] [i_35] [i_37] [i_38] [i_39]))))))) : (max((((/* implicit */unsigned int) var_7)), (arr_115 [i_35]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_108 [i_39 + 1] [i_39])) <= (((/* implicit */int) arr_111 [i_39 + 1] [i_35] [i_35]))))))));
                                arr_129 [i_35] [i_35] [i_37] [i_35] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_107 [i_36] [(unsigned char)0] [i_39 + 1])) ? ((-(arr_115 [i_35]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_126 [i_35] [i_35] [i_37] [i_37] [i_39]), (arr_111 [(unsigned short)18] [i_35] [i_35])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_40 = 2; i_40 < 14; i_40 += 1) 
                {
                    for (unsigned int i_41 = 4; i_41 < 15; i_41 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) (signed char)-64)), (8665644629860570159LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_107 [i_36] [i_36] [i_36])) - (((/* implicit */int) arr_120 [i_41] [i_41 - 4] [i_40 + 3] [i_40 - 2]))))))))));
                            arr_136 [i_35] [i_35] [i_35] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_123 [12U] [i_36 - 1] [i_40] [i_35])) ? (((/* implicit */int) arr_111 [i_36 + 1] [i_35] [i_36 - 1])) : (((/* implicit */int) arr_134 [i_35] [10] [(unsigned short)6] [i_40 + 3] [i_35]))))) ? (((max((var_8), (((/* implicit */unsigned int) (_Bool)1)))) >> (((max((4897766063901311029LL), (((/* implicit */long long int) (unsigned char)125)))) - (4897766063901311025LL))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1890033748U))))))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */int) (+(min(((-(2404933548U))), (((/* implicit */unsigned int) 2143289344))))));
            }
        } 
    } 
}
