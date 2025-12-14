/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192107
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
    /* vectorizable */
    for (short i_0 = 4; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(arr_12 [i_1] [i_2] [i_1]))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30101)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0] [3LL] [i_2]))))) < (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))))));
                                var_18 += ((/* implicit */unsigned int) var_5);
                                var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= ((+(4227858432U))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((_Bool) var_1))) >= (((/* implicit */int) (!(var_1)))))))));
        arr_13 [i_0] [i_0] = arr_4 [i_0];
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) * (852855558697767391ULL)));
    }
    for (short i_5 = 4; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-24)) ? (var_11) : (((/* implicit */long long int) 3899196864U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (max((var_2), (((/* implicit */unsigned int) arr_10 [i_5 - 1] [i_5] [i_5 - 2] [i_5] [i_5 - 2])))) : (((/* implicit */unsigned int) -1)))))))));
        /* LoopSeq 2 */
        for (short i_6 = 4; i_6 < 17; i_6 += 2) /* same iter space */
        {
            arr_19 [18] [i_5 - 4] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_5 - 4] [i_6] [i_6] [i_6 - 4] [i_6]))), (((unsigned long long int) ((((((/* implicit */int) (short)-1848)) + (2147483647))) >> (((4161536U) - (4161532U))))))));
            var_23 = ((/* implicit */signed char) max(((short)1338), (((/* implicit */short) (!(((/* implicit */_Bool) var_12)))))));
        }
        for (short i_7 = 4; i_7 < 17; i_7 += 2) /* same iter space */
        {
            arr_23 [(short)5] [i_5 - 1] [i_5] = ((/* implicit */short) arr_11 [i_5] [i_7] [7U] [i_7 + 1] [i_5]);
            var_24 &= ((/* implicit */unsigned int) var_6);
        }
        arr_24 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-80)) ? (var_8) : (((/* implicit */int) (_Bool)1))))))), (((unsigned int) min(((short)-17858), ((short)-9156))))));
        arr_25 [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 892133730U)) ? (((/* implicit */long long int) 1243074671)) : (6681177505367143637LL)))) ? (min((((/* implicit */int) min((((/* implicit */short) arr_9 [i_5] [i_5])), ((short)5640)))), (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [8ULL] [i_5] [8ULL])))))) : (var_10)));
    }
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_28 [(signed char)5] &= ((/* implicit */_Bool) min((var_8), (var_10)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 22; i_12 += 2) 
                        {
                            var_25 -= ((/* implicit */int) ((323397540) >= (((/* implicit */int) (unsigned short)0))));
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9] [i_12])) ? (33292288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 1203487064U)) ? (10107339367531589309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2398))))) >= (((/* implicit */unsigned long long int) 10U))))) >> (((var_11) - (6698103637147993212LL)))));
                            arr_41 [i_8] [i_8] [i_10] [i_8] [i_9] = ((/* implicit */unsigned int) var_8);
                        }
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((min((var_11), (((/* implicit */long long int) ((int) var_0))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9])) ? (((/* implicit */int) ((arr_29 [i_10] [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))))) : (((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_9] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-5079)))))))));
                            var_29 = min((((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_40 [i_9])), (var_2))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_40 [i_9])))))))), (((unsigned char) ((arr_38 [i_9] [i_9] [i_13]) / (arr_38 [i_9] [i_10] [i_9])))));
                        }
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_30 = (-(arr_36 [i_8] [i_9] [i_9] [i_14]));
                            arr_48 [i_14] [i_14] [i_14] |= ((/* implicit */_Bool) arr_45 [i_10] [(signed char)11]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) ((((int) 1048574U)) | (arr_35 [i_8] [i_9] [i_9] [i_10] [i_11] [i_15])));
                            arr_51 [i_9] [i_9] [(unsigned short)11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [16LL]))));
                            var_32 |= ((/* implicit */int) (signed char)63);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) 4039329295U)) ? (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (short)1))))) : (((/* implicit */int) arr_50 [i_9] [i_10] [i_11] [i_9]))));
                            var_34 = ((/* implicit */unsigned int) (_Bool)1);
                            var_35 = ((/* implicit */short) 4294967295U);
                        }
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((int) -1765450200))))) >= (min((((/* implicit */long long int) min((arr_55 [i_8] [i_9] [i_10] [i_9]), (((/* implicit */unsigned int) arr_42 [i_9] [i_9] [i_10] [i_9] [i_10]))))), (-3591289371845881895LL)))));
                        arr_57 [i_8] [i_17] [i_10] [i_17] |= ((/* implicit */unsigned int) var_4);
                    }
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22423)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : ((((_Bool)0) ? (2677439961599143831ULL) : (((/* implicit */unsigned long long int) 685559968U)))))))));
                        var_38 = ((/* implicit */unsigned char) var_3);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_19 = 1; i_19 < 22; i_19 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned long long int) arr_31 [i_8] [i_9]);
                            arr_66 [i_8] [i_9] [i_10] [i_10] [i_20] = (i_9 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_19] [i_19] [i_10] [i_19 + 1] [i_19 - 1] [(_Bool)1])) >> (((((/* implicit */int) arr_60 [i_9] [i_10] [i_19] [i_9])) - (1745)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_19] [i_19] [i_10] [i_19 + 1] [i_19 - 1] [(_Bool)1])) >> (((((((/* implicit */int) arr_60 [i_9] [i_10] [i_19] [i_9])) - (1745))) - (42930))))));
                        }
                        for (short i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) ((signed char) 18446744073709551599ULL));
                            arr_69 [i_10] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) ((arr_56 [i_9] [i_19 - 1] [i_19] [i_9]) >= (arr_56 [i_9] [i_19 + 1] [i_9] [i_9])));
                        }
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_46 [4] [i_10] [i_19] [i_10] [i_8] [i_8])) ? (((/* implicit */int) arr_50 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_42 [(_Bool)1] [i_8] [i_9] [i_10] [(short)2]))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((arr_72 [i_22] [i_9] [i_10] [i_9] [i_8]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)255))));
                            var_43 = -270323016;
                            var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_47 [i_8] [i_9] [i_10] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_15))));
                            var_45 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_33 [18U] [i_19 + 1] [i_10] [18U]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        for (unsigned char i_23 = 2; i_23 < 22; i_23 += 4) 
                        {
                            var_46 ^= ((/* implicit */short) (signed char)124);
                            var_47 = var_13;
                            arr_77 [i_8] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) >= (0U)))) | (((/* implicit */int) arr_32 [i_19 - 1] [i_9]))));
                            var_48 = arr_56 [i_9] [i_23] [i_19 + 1] [i_9];
                        }
                    }
                    for (long long int i_24 = 1; i_24 < 22; i_24 += 4) 
                    {
                        arr_82 [i_9] [i_9] [i_9] [15U] [i_9] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_7)) ? (21) : (((/* implicit */int) (unsigned char)221)))))), (((/* implicit */int) ((unsigned short) var_0)))));
                        var_49 = min((var_8), (((/* implicit */int) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((arr_61 [i_9]) >> (((((/* implicit */int) arr_62 [i_10] [i_10] [i_9] [i_8])) - (7008))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                        arr_85 [15] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_83 [i_8] [i_9])) >> (((((/* implicit */int) var_13)) + (16063)))));
                    }
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_88 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [(short)15] [i_9])) ? ((-(((/* implicit */int) var_7)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))));
                        /* LoopSeq 1 */
                        for (short i_27 = 3; i_27 < 21; i_27 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) arr_46 [i_8] [(short)9] [i_8] [i_10] [i_26] [i_8])))))))));
                            arr_91 [i_8] [i_8] [i_9] [i_10] [i_9] [i_27] = ((/* implicit */long long int) (unsigned short)8191);
                            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_27 - 3] [i_27 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_45 [i_27 + 1] [i_27 + 1]))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                {
                    var_53 = ((/* implicit */unsigned long long int) arr_75 [i_8] [(unsigned short)20] [19] [i_29 - 1] [i_29]);
                    arr_96 [i_8] [14] [(unsigned short)10] [i_8] |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(var_10)))))) : (((unsigned int) min((arr_45 [(_Bool)1] [(_Bool)1]), (((/* implicit */signed char) (_Bool)1)))))));
                    var_54 = ((/* implicit */unsigned short) ((short) max((((arr_86 [i_8] [i_28] [(unsigned short)9] [i_28] [i_8] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((int) (signed char)-108))))));
                    var_55 = ((/* implicit */int) arr_42 [i_28] [i_8] [16U] [i_29] [i_29]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_30 = 0; i_30 < 23; i_30 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_31 = 0; i_31 < 23; i_31 += 1) 
            {
                for (int i_32 = 0; i_32 < 23; i_32 += 4) 
                {
                    {
                        var_56 = ((/* implicit */short) min((arr_72 [(_Bool)1] [(short)5] [(short)5] [i_32] [(_Bool)1]), ((_Bool)0)));
                        /* LoopSeq 2 */
                        for (unsigned char i_33 = 0; i_33 < 23; i_33 += 2) /* same iter space */
                        {
                            var_57 = ((((/* implicit */int) (unsigned char)66)) * (((/* implicit */int) (unsigned char)95)));
                            var_58 = ((/* implicit */long long int) ((short) min(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((short) var_4))))));
                        }
                        for (unsigned char i_34 = 0; i_34 < 23; i_34 += 2) /* same iter space */
                        {
                            arr_112 [i_34] [i_34] [i_34] [i_34] [i_32] |= min((((int) arr_95 [i_8])), ((+(((/* implicit */int) arr_95 [i_34])))));
                            var_59 = ((/* implicit */int) max((var_59), ((-((+(-730498349)))))));
                            arr_113 [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (short)6783))) ^ (max((var_10), (((/* implicit */int) var_5))))))) : (arr_106 [i_34] [i_30] [i_8])));
                            var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -409876574)) ? (2666127738407683351LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18151)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_35 = 0; i_35 < 23; i_35 += 2) 
            {
                for (unsigned short i_36 = 0; i_36 < 23; i_36 += 3) 
                {
                    {
                        var_61 = ((/* implicit */int) (-((~(((unsigned int) var_13))))));
                        arr_118 [i_8] [i_30] [i_35] [i_36] [i_36] [i_30] = ((/* implicit */unsigned char) min((-1561912973), (((/* implicit */int) (signed char)-64))));
                    }
                } 
            } 
        }
        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
        {
            var_62 = ((/* implicit */short) min((((/* implicit */long long int) arr_59 [i_8] [i_8] [20U])), (min((((/* implicit */long long int) arr_93 [(short)22])), ((~(var_11)))))));
            /* LoopSeq 1 */
            for (unsigned char i_38 = 0; i_38 < 23; i_38 += 4) 
            {
                var_63 = ((/* implicit */long long int) (signed char)-54);
                arr_126 [i_8] [i_37] [i_38] [i_38] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) >= ((+(((unsigned long long int) 4294967290U))))));
            }
        }
    }
    for (short i_39 = 0; i_39 < 25; i_39 += 4) /* same iter space */
    {
        var_64 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_128 [i_39])) : (((/* implicit */int) arr_128 [i_39])))) | (((/* implicit */int) arr_128 [i_39])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2948083320U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) var_13)) : (-1106208841))) + (16050)))));
        arr_129 [i_39] [i_39] &= ((/* implicit */_Bool) arr_127 [i_39]);
    }
    for (short i_40 = 0; i_40 < 25; i_40 += 4) /* same iter space */
    {
        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) max((min((4290772992U), (((/* implicit */unsigned int) (unsigned short)14464)))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_128 [i_40])), (((((/* implicit */_Bool) (unsigned short)41319)) ? (((/* implicit */int) arr_131 [i_40] [i_40])) : (((/* implicit */int) arr_131 [i_40] [i_40]))))))))))));
        var_66 = ((/* implicit */_Bool) min((var_66), (((/* implicit */_Bool) min((min(((~(65535U))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (var_8)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_130 [i_40])) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_131 [i_40] [i_40])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_130 [i_40]))))))))))));
    }
}
