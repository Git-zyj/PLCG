/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32754
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
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (var_14)));
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_23 |= ((/* implicit */int) (_Bool)1);
        var_24 += ((/* implicit */signed char) max(((-(min((0U), (((/* implicit */unsigned int) var_11)))))), (0U)));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_6 [i_1] [i_2])))) ? (((/* implicit */int) ((arr_3 [i_2 + 1] [i_1]) > (((/* implicit */int) var_18))))) : (((/* implicit */int) var_8)))) == (max(((+(((/* implicit */int) (signed char)24)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (var_1))))))));
            var_26 = ((/* implicit */_Bool) max((var_26), (var_18)));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_2 [i_1] [i_2 + 1]))));
        }
        /* LoopSeq 4 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_10 [5ULL] = ((/* implicit */int) (signed char)24);
            arr_11 [i_1] [12U] [i_1] = ((/* implicit */_Bool) var_16);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_17 [i_3] [i_4] [14ULL] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_5)))))) : (arr_8 [i_3 - 1] [i_3] [i_5]))));
                        arr_18 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) (signed char)-120));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_21 [i_4] [(unsigned short)2] [i_4] [1] [i_4] = ((var_18) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_4] [i_5] [i_3] [i_6]))))));
                            arr_22 [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_13);
                        }
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */int) arr_20 [i_1] [i_3] [i_1] [i_7 - 2] [i_7]);
                            arr_27 [i_7] [i_5] [i_1] [i_4] [i_3] [i_1] [i_1] = var_2;
                            var_29 = ((/* implicit */unsigned long long int) ((signed char) min((arr_2 [i_7 + 3] [i_7 - 1]), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) > (arr_24 [i_3] [i_4])))))));
                        }
                        arr_28 [i_4] [i_4] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (_Bool)0)) : (2147483647))) : (((/* implicit */int) (unsigned short)58365)))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) var_9);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [i_8] = ((/* implicit */unsigned int) 0LL);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (min((var_7), (((/* implicit */signed char) var_14))))))) ? (((/* implicit */int) min((arr_37 [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 2]), (arr_37 [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 1])))) : (((/* implicit */int) ((arr_12 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_12)))))))))));
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))))))) ? (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) (unsigned short)0)) : (arr_15 [(_Bool)1] [i_10] [i_9] [i_1] [i_1] [i_1]))) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) var_14);
                var_34 &= ((/* implicit */unsigned short) (signed char)12);
            }
            /* vectorizable */
            for (unsigned short i_12 = 1; i_12 < 12; i_12 += 1) 
            {
                arr_44 [i_8] = ((/* implicit */unsigned short) ((arr_43 [i_12 + 2] [i_12] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_8])))));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 14; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            var_35 -= ((/* implicit */int) var_18);
                            var_36 = ((/* implicit */signed char) var_8);
                            arr_51 [i_1] [i_1] [i_8] = ((/* implicit */_Bool) (-(1348458728099870682ULL)));
                            arr_52 [i_1] [i_8] [i_8] [i_1] [(unsigned short)2] |= (+(arr_39 [i_1] [i_8] [i_12 - 1] [12U] [i_14 + 1]));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_36 [i_1] [i_12 - 1])) : (var_1))))))));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_17 = 1; i_17 < 14; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */int) arr_55 [13U] [i_17 + 1])) > (arr_45 [i_1] [i_1] [i_15] [i_1] [i_17 + 1])))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) == (((((/* implicit */_Bool) (unsigned short)0)) ? (var_16) : (((/* implicit */unsigned int) arr_45 [i_1] [i_8] [i_15] [i_16 + 2] [i_17]))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        var_40 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1] [i_15] [i_16 + 3] [i_16 + 2] [i_16] [i_16 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_49 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 3] [i_16 + 3] [i_16 - 1] [i_16 - 1])));
                        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8610567555170355152LL))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        arr_65 [i_1] [i_8] [i_1] [i_16 - 1] [6] [(unsigned short)0] [i_19] = ((/* implicit */signed char) arr_49 [i_1] [i_15] [i_16 + 1] [(signed char)8] [i_19] [i_1] [i_16]);
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [(signed char)0] [(unsigned short)0] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                        arr_66 [i_1] [i_8] [i_1] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_1] [i_8] [i_1] [i_8] [i_19])) ? (((/* implicit */int) arr_60 [i_1] [i_1] [3U] [i_19] [7LL])) : (arr_45 [i_1] [i_8] [1ULL] [i_1] [i_1]))))));
                        var_43 &= ((/* implicit */unsigned short) arr_54 [i_1] [i_1] [i_15] [i_19]);
                    }
                    for (unsigned short i_20 = 1; i_20 < 11; i_20 += 2) 
                    {
                        arr_71 [i_1] [i_1] [14LL] [i_16] [i_8] = ((/* implicit */unsigned long long int) arr_8 [i_20 - 1] [i_20] [i_20]);
                        var_44 = ((/* implicit */unsigned long long int) arr_15 [i_20 + 1] [i_16] [i_15] [i_15] [1] [i_1]);
                        var_45 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)60113)) : (((/* implicit */int) var_13))))) : ((-(arr_19 [1LL] [i_20] [i_1] [i_15] [i_8] [i_1])))));
                    }
                    var_46 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (unsigned short)57170)) : (((/* implicit */int) (_Bool)0))));
                }
                for (int i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 3; i_22 < 13; i_22 += 1) 
                    {
                        arr_77 [i_1] [i_8] [i_15] [(unsigned short)4] [i_1] [i_1] = ((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                        arr_78 [i_21] [i_8] [i_8] [(_Bool)0] = ((/* implicit */unsigned short) arr_72 [5U] [i_1]);
                    }
                    for (signed char i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (var_19)))));
                        arr_82 [(unsigned short)10] [i_8] [i_8] [i_1] [0ULL] = arr_75 [(_Bool)0] [(_Bool)0] [(unsigned short)5] [(signed char)3] [(unsigned short)5] [(_Bool)0];
                    }
                    var_48 = ((/* implicit */unsigned short) arr_47 [9ULL] [i_15] [i_8] [i_1]);
                    var_49 = ((/* implicit */unsigned short) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                for (unsigned int i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    var_50 = ((/* implicit */_Bool) ((arr_15 [i_1] [i_1] [i_1] [i_8] [9U] [13ULL]) ^ (1145311077)));
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 2) 
                    {
                        arr_89 [(_Bool)1] [(_Bool)1] [i_15] [i_8] [i_15] = ((/* implicit */int) arr_67 [i_1] [i_8] [(_Bool)1] [9U] [i_8] [i_8]);
                        arr_90 [i_1] [i_8] [i_15] [i_25] [i_25] |= ((((/* implicit */int) arr_16 [i_1] [i_8] [i_8] [i_25])) == (((/* implicit */int) var_8)));
                        var_51 = ((/* implicit */_Bool) arr_1 [i_15]);
                        arr_91 [i_1] [i_24] [i_1] [i_8] [i_25] = ((/* implicit */unsigned short) var_12);
                    }
                    for (unsigned int i_26 = 1; i_26 < 13; i_26 += 2) 
                    {
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(14915758560438384055ULL)))) ? (2933191068U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [9U] [i_26 + 2] [(unsigned short)6] [4])))));
                        var_53 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_81 [i_26 - 1] [i_1] [i_1] [i_26 + 2]))));
                    }
                }
                for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 1) 
                {
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_27])) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_69 [i_8] [i_8] [i_8] [i_8] [i_8])));
                    var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_94 [i_8] [i_15] [i_27])) : (((/* implicit */int) arr_72 [i_8] [i_1])))))));
                }
                arr_98 [10U] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_14))));
            }
            /* vectorizable */
            for (unsigned short i_28 = 0; i_28 < 15; i_28 += 1) 
            {
                arr_101 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [8U] [i_28] [(_Bool)1] [i_28] [i_8])) ? (((/* implicit */int) arr_5 [i_8] [(_Bool)1])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57145)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_28])))) : (var_4)));
                var_56 &= ((/* implicit */signed char) ((3295563793U) == (4294967295U)));
                var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551612ULL))))))));
            }
            var_58 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (max((12852770930199186615ULL), (((/* implicit */unsigned long long int) max((var_14), ((_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)50991), (((/* implicit */unsigned short) var_11))))))));
            var_59 = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_79 [i_1] [i_1] [i_8] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65491))) : (((-4125257259973916351LL) - (((/* implicit */long long int) ((/* implicit */int) arr_54 [4] [i_1] [i_1] [i_1]))))))));
            /* LoopSeq 3 */
            for (int i_29 = 0; i_29 < 15; i_29 += 1) 
            {
                var_60 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 1 */
                for (long long int i_30 = 0; i_30 < 15; i_30 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_31 = 0; i_31 < 15; i_31 += 2) 
                    {
                        arr_111 [(signed char)6] [i_8] [1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) ((arr_15 [i_1] [i_8] [i_29] [i_8] [9U] [i_30]) | (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8365)) : (((/* implicit */int) (_Bool)1))))))));
                        var_61 = ((/* implicit */signed char) arr_94 [i_1] [i_1] [i_1]);
                        arr_112 [6LL] [i_8] [(unsigned short)5] [i_30] [i_31] = ((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_1])));
                        var_62 = ((/* implicit */long long int) arr_94 [i_31] [i_30] [i_29]);
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        var_63 = (-(((((/* implicit */int) (unsigned short)22)) & (((((/* implicit */_Bool) arr_88 [(_Bool)0] [i_8] [i_29] [i_8] [(unsigned short)12])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_59 [i_32] [i_1] [i_1])))))));
                        arr_117 [i_1] [i_29] [i_8] [i_30] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-106)), ((unsigned short)65535))))));
                    }
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        var_64 = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)102)) * (((/* implicit */int) arr_102 [i_30] [i_8] [i_8]))))) : (arr_13 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                        var_65 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_107 [0] [i_8] [i_8] [i_29] [i_30] [i_33])) ? (arr_107 [i_33] [i_8] [5LL] [i_29] [i_8] [i_1]) : (arr_107 [i_1] [i_8] [i_1] [i_29] [(unsigned short)8] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31192)) != (((/* implicit */int) (unsigned short)57170))))))));
                    }
                    var_66 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_93 [i_1] [i_1] [i_8])));
                }
                arr_120 [i_1] [i_8] = ((/* implicit */long long int) ((unsigned short) (-(((4200552257U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                arr_121 [i_8] [i_8] [i_29] = ((/* implicit */int) arr_75 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            }
            for (int i_34 = 0; i_34 < 15; i_34 += 1) 
            {
                var_67 = ((/* implicit */long long int) (+((+((+(var_19)))))));
                var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) arr_88 [8ULL] [i_8] [i_34] [i_34] [i_34]))));
            }
            for (long long int i_35 = 0; i_35 < 15; i_35 += 1) 
            {
                var_69 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_36 = 2; i_36 < 13; i_36 += 1) 
                {
                    for (long long int i_37 = 3; i_37 < 13; i_37 += 1) 
                    {
                        {
                            var_70 = ((/* implicit */_Bool) 1818071230222898060ULL);
                            var_71 += var_2;
                        }
                    } 
                } 
                arr_132 [i_8] = ((/* implicit */int) var_14);
                var_72 = var_1;
            }
        }
        for (signed char i_38 = 0; i_38 < 15; i_38 += 1) 
        {
            var_73 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)7))))))));
            arr_136 [i_38] [i_38] [i_38] = ((/* implicit */long long int) (((-(((/* implicit */int) ((_Bool) 230558175U))))) + ((~(arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_38])))));
            var_74 = ((/* implicit */signed char) ((((arr_83 [i_1] [i_1] [i_38]) == (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_11)))))));
        }
        for (unsigned short i_39 = 0; i_39 < 15; i_39 += 1) 
        {
            var_75 = ((/* implicit */unsigned int) ((signed char) ((1097948320) * (((/* implicit */int) (_Bool)1)))));
            arr_140 [i_1] [i_1] = ((/* implicit */long long int) (-(((unsigned int) (!(var_14))))));
            var_76 -= ((/* implicit */unsigned int) (~(min((min((((/* implicit */int) (_Bool)1)), (-271173061))), (((/* implicit */int) var_13))))));
            var_77 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_92 [i_1] [i_39] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
            arr_141 [i_1] [i_39] = (-(max((arr_57 [i_1]), (arr_57 [i_1]))));
        }
        var_78 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((min((var_16), (((/* implicit */unsigned int) var_8)))), (max((((/* implicit */unsigned int) var_13)), (1838778730U)))))) + (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (-9223372036854775787LL)))));
        arr_142 [i_1] = ((/* implicit */int) arr_60 [i_1] [i_1] [i_1] [2] [i_1]);
        var_79 = ((/* implicit */signed char) var_17);
    }
}
