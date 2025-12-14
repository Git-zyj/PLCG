/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244606
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        arr_3 [(short)4] = ((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])));
        var_13 = ((/* implicit */signed char) min((((7967282460223612326ULL) ^ (((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0 + 1])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) >= ((+(((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) (short)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))) : (((/* implicit */int) var_11)));
        var_15 = ((/* implicit */unsigned char) ((((((arr_2 [i_1] [i_1]) + (2147483647))) << (((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1])))) + (41))) - (25))))) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
        var_16 = ((/* implicit */long long int) ((unsigned char) var_9));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */int) arr_0 [i_1] [i_1]);
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((signed char) 536870911ULL))) : (((/* implicit */int) arr_7 [i_2]))));
            arr_10 [i_1] [i_1] = ((/* implicit */long long int) min((((_Bool) arr_2 [i_2] [i_1])), (((((/* implicit */int) (short)0)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            arr_14 [i_3] [i_1] [i_1] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (short)0)), (arr_13 [i_1] [i_3])))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 4; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3]))) < (arr_11 [i_4 + 1] [i_6] [i_4 + 1])))), (min((((/* implicit */short) arr_20 [i_4 + 1] [i_3] [i_4 + 1] [i_3])), (arr_17 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_3])))));
                            var_19 = ((/* implicit */unsigned long long int) min((arr_11 [i_1] [10ULL] [10ULL]), (((((/* implicit */_Bool) max((arr_18 [i_3] [i_1]), (((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_5]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-3215))))) : (((long long int) var_3))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_22 [17] [i_1] [i_3] [i_6 + 4] [i_6])) : (arr_2 [i_6] [i_6 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_5] [i_4] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [(short)13] [i_4]) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_4] [(signed char)7])))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 - 4] [i_6] [i_6 - 1] [i_6 - 4] [i_4] [i_4]))) / (max((((/* implicit */unsigned long long int) arr_0 [i_6] [i_3])), (var_3)))))));
                        }
                    } 
                } 
            } 
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) (signed char)16)) : ((-((-(2147483632))))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_35 [i_1] [i_1] [i_1] [4LL] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_1] [i_7] [i_7] [i_7] [i_9] [i_10])))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_29 [i_9] [i_9] [i_9 + 1] [i_10] [i_10] [21ULL])) : (((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_1] [i_10])))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) min((arr_20 [i_1] [i_7] [i_9 - 1] [i_1]), (arr_20 [i_1] [i_1] [i_9 + 1] [i_1]))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_16 [i_1] [(short)3] [i_1]))))))));
        }
        for (short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((min((arr_36 [(signed char)8]), (arr_36 [i_11]))) << (((((((/* implicit */unsigned long long int) arr_2 [i_1] [i_11])) + (arr_36 [i_11]))) - (9486625628830457494ULL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_12])) ? (arr_36 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                var_27 = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_47 [i_13] [i_13] [i_13] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2032162447) : (((2147483647) >> (((17179869183ULL) - (17179869156ULL)))))));
                    var_28 = (-((-(((/* implicit */int) var_12)))));
                    arr_48 [i_13] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) < (arr_24 [i_11] [(short)20])))) == (((/* implicit */int) ((((/* implicit */int) arr_23 [i_11] [i_11] [i_12])) <= (((/* implicit */int) (signed char)122)))))));
                    arr_49 [i_13] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */int) var_2);
                }
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_52 [i_1] [i_1] [i_1] [(signed char)10] = ((/* implicit */unsigned long long int) arr_40 [i_1] [i_11]);
                    arr_53 [i_1] [i_1] [(short)16] [i_14] = ((/* implicit */short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((((/* implicit */_Bool) -843233777)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (18446744073709551615ULL))) : (arr_24 [i_12] [i_11])));
                    /* LoopSeq 4 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        var_29 = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [(short)17])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                        arr_56 [i_1] [i_1] [i_1] [i_12] [(unsigned char)4] [i_15] [i_15] = ((/* implicit */short) ((signed char) arr_25 [i_15] [i_15]));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-370488052283945366LL)))) ? (((/* implicit */int) var_4)) : (((((((/* implicit */int) arr_22 [11ULL] [i_11] [i_12] [11ULL] [i_15])) + (2147483647))) >> (((((/* implicit */int) var_4)) + (8475)))))));
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        arr_60 [i_16] [i_14] [i_16] [i_1] [i_1] = ((/* implicit */int) arr_12 [i_14]);
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_1] [i_11] [i_12])) << (((var_5) + (3735743034933365905LL)))))) ? ((~(((/* implicit */int) (short)127)))) : (((/* implicit */int) arr_22 [i_1] [i_12] [i_12] [20ULL] [i_12])));
                    }
                    for (short i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-2154))));
                        var_33 = ((/* implicit */unsigned char) (-(-264109996)));
                        arr_64 [(_Bool)1] [i_17] [i_1] = ((((/* implicit */_Bool) arr_15 [3] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_11] [i_12])) : (((/* implicit */int) arr_16 [i_1] [i_11] [i_12])));
                        var_34 = (+(((/* implicit */int) arr_62 [i_1] [(short)9] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (short i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        var_35 = ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */int) (short)12572)) : (((/* implicit */int) arr_38 [i_11])));
                        arr_68 [i_18] = ((((((/* implicit */_Bool) arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_36 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))));
                    }
                    arr_69 [i_1] [(signed char)3] [(signed char)3] = ((/* implicit */_Bool) (+(var_5)));
                }
                for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    arr_73 [(signed char)19] [(signed char)19] [i_11] [(signed char)19] [i_19] = ((((((/* implicit */int) var_7)) > (((/* implicit */int) var_10)))) ? (arr_24 [i_1] [i_12]) : (4611686018418999296ULL));
                    var_36 = ((/* implicit */unsigned int) ((signed char) arr_2 [i_11] [i_11]));
                    var_37 = ((/* implicit */signed char) (unsigned char)45);
                    var_38 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (12U) : (arr_4 [i_12])))));
                }
                var_39 = ((/* implicit */unsigned int) arr_40 [i_1] [i_1]);
            }
            /* vectorizable */
            for (signed char i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                var_40 = ((/* implicit */long long int) ((unsigned int) var_3));
                var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_20 + 1]))));
            }
            for (int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_78 [i_1] [i_1] [i_1] = 2962999208144428372ULL;
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    arr_81 [(short)20] [i_11] [i_11] [i_11] [(short)20] = ((/* implicit */_Bool) ((arr_28 [i_11] [i_11]) ? (((unsigned long long int) arr_54 [i_22] [i_1] [i_11] [(_Bool)1] [i_1] [i_1] [i_1])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0)))))));
                    var_42 = ((/* implicit */unsigned long long int) arr_63 [14ULL] [i_11] [i_21] [i_22] [i_22]);
                    var_43 = ((/* implicit */short) (~(((/* implicit */int) arr_75 [i_11] [i_11] [i_11] [i_1]))));
                    var_44 = ((/* implicit */_Bool) ((arr_12 [i_1]) ? (((/* implicit */int) arr_65 [i_1] [i_1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) var_12))))));
                }
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    arr_84 [2ULL] [2ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1481035148)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_70 [i_23] [i_1] [i_11] [i_1]))))) : (var_8)));
                    arr_85 [i_1] [i_1] [20ULL] = var_1;
                    arr_86 [(signed char)18] [(signed char)18] [(signed char)18] = ((/* implicit */unsigned char) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11] [i_1])))));
                    arr_87 [i_1] [i_1] [i_1] [i_23] = ((((/* implicit */int) arr_74 [i_23])) ^ (((/* implicit */int) var_10)));
                    arr_88 [i_23] [4U] [i_21] [i_11] [4U] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483647)) > ((-9223372036854775807LL - 1LL))));
                }
                /* vectorizable */
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) 
                {
                    var_45 = ((/* implicit */signed char) var_0);
                    arr_92 [i_11] [(short)13] [i_24] [i_24] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-14905)) ? (var_5) : (-1LL))));
                }
                /* vectorizable */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    arr_96 [i_11] = ((/* implicit */unsigned int) -1);
                    var_46 = ((((/* implicit */_Bool) arr_89 [(short)4] [i_21] [i_21] [(_Bool)1] [18LL] [i_1])) ? (((((/* implicit */_Bool) arr_29 [i_1] [i_21] [i_1] [i_11] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 503316480)) : (arr_36 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_11] [i_11] [i_11]))) : (var_5)))));
                    arr_97 [(signed char)19] = ((/* implicit */_Bool) arr_91 [i_25] [i_25] [i_25 + 1] [i_25] [i_25] [(unsigned char)5]);
                }
            }
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 22; i_26 += 3) 
            {
                for (short i_27 = 2; i_27 < 21; i_27 += 2) 
                {
                    {
                        var_47 = ((/* implicit */signed char) (-(var_2)));
                        arr_105 [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (max((var_6), (((/* implicit */int) ((((/* implicit */int) var_12)) > (-7)))))) : (((/* implicit */int) arr_70 [i_1] [(_Bool)1] [i_26] [i_27]))));
                        var_48 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11418697864120625019ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1691280365265638165LL)))) ? (((/* implicit */int) (unsigned char)175)) : (((((/* implicit */_Bool) 3LL)) ? (-843233777) : (((/* implicit */int) arr_80 [i_1]))))))), (var_8));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 20; i_28 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_29 = 0; i_29 < 20; i_29 += 1) 
        {
            /* LoopNest 2 */
            for (short i_30 = 0; i_30 < 20; i_30 += 1) 
            {
                for (short i_31 = 2; i_31 < 18; i_31 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_32 = 0; i_32 < 20; i_32 += 2) 
                        {
                            var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_98 [i_28] [i_28] [i_28] [i_31 + 1]))));
                            arr_117 [i_29] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            arr_118 [i_31] [i_29] [i_31] [i_30] [i_29] [i_29] [i_28] = ((/* implicit */int) 0LL);
                            var_50 = ((/* implicit */unsigned int) (!((_Bool)0)));
                        }
                        arr_119 [i_28] [i_29] [i_30] [i_30] [i_29] = ((/* implicit */signed char) var_6);
                        var_51 = ((/* implicit */_Bool) 387070463);
                    }
                } 
            } 
            var_52 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_113 [i_28] [i_28] [i_28] [i_29] [i_28] [i_29])) : (((/* implicit */int) arr_18 [i_28] [i_28]))));
            /* LoopNest 2 */
            for (long long int i_33 = 3; i_33 < 19; i_33 += 4) 
            {
                for (short i_34 = 0; i_34 < 20; i_34 += 2) 
                {
                    {
                        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_28] [i_29] [i_29] [i_33] [i_29])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_93 [(_Bool)1] [(_Bool)1] [i_33] [i_34] [(_Bool)1]))))) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 4 */
                        for (short i_35 = 2; i_35 < 19; i_35 += 2) 
                        {
                            arr_128 [i_29] [i_34] [i_33] [i_29] [i_29] = ((short) var_5);
                            var_54 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_72 [(short)21] [i_29] [i_33])) + (2147483647))) << (((((/* implicit */int) var_12)) - (238)))));
                        }
                        for (signed char i_36 = 0; i_36 < 20; i_36 += 2) 
                        {
                            var_55 = ((/* implicit */int) (short)56);
                            arr_132 [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [13ULL] [i_34] [i_33 + 1] [i_29] [i_28]))));
                            arr_133 [i_29] [i_34] [i_29] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_108 [i_34])))) ? (((/* implicit */long long int) arr_111 [i_28] [i_28] [i_33] [i_34])) : (arr_82 [i_28] [i_29] [i_33 - 2] [i_34] [i_36] [i_34])));
                        }
                        for (unsigned char i_37 = 3; i_37 < 18; i_37 += 2) 
                        {
                            arr_137 [i_28] [i_33] [(short)3] [i_29] = ((/* implicit */int) arr_51 [i_28] [i_28] [i_33] [i_33] [i_28] [i_37]);
                            var_56 = ((_Bool) arr_126 [i_28] [i_34] [i_37 + 1] [i_34] [i_33 - 1] [i_34] [i_33]);
                        }
                        for (unsigned char i_38 = 1; i_38 < 16; i_38 += 4) 
                        {
                            arr_140 [i_28] [i_28] [i_28] [i_28] [i_28] [i_29] [i_28] = ((/* implicit */_Bool) ((((/* implicit */int) arr_83 [i_28] [i_28] [i_28] [i_28] [i_28])) >> (((/* implicit */int) (_Bool)1))));
                            arr_141 [i_28] [i_28] [7ULL] [i_28] [i_34] [i_38] [i_29] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                            var_57 = (-((+(var_3))));
                        }
                        arr_142 [i_29] [i_29] [i_29] [i_34] [i_34] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))));
                        var_58 = ((/* implicit */short) arr_58 [i_29] [i_29] [i_29] [i_29] [i_29]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (int i_39 = 4; i_39 < 19; i_39 += 1) 
        {
            for (short i_40 = 0; i_40 < 20; i_40 += 2) 
            {
                for (signed char i_41 = 0; i_41 < 20; i_41 += 4) 
                {
                    {
                        arr_152 [i_28] [i_39] [i_39] [i_41] [i_39] = ((int) ((((/* implicit */_Bool) arr_27 [(unsigned char)18])) ? (arr_144 [i_39]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_28] [i_39])))));
                        var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1960300044)) ? (((/* implicit */int) arr_8 [i_39] [i_41])) : (((/* implicit */int) arr_8 [i_41] [i_39 - 2]))));
                    }
                } 
            } 
        } 
    }
}
