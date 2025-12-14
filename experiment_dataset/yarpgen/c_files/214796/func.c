/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214796
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((unsigned long long int) arr_1 [i_0] [i_0]))));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [6ULL] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [12] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((arr_1 [i_0] [i_0]) - (15763584461426923502ULL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_4 [13ULL] [i_1]);
        var_15 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_5 [i_3]))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_2] [i_4]))));
                            var_18 = ((/* implicit */long long int) ((int) (!(((((/* implicit */_Bool) arr_4 [i_5] [i_2])) && (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_4] [i_5])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) ? (17462015684993828026ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (1203577922) : (((/* implicit */int) (signed char)29)))) + (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])))))));
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((arr_11 [i_1] [i_1] [i_3]), (((/* implicit */long long int) arr_9 [(signed char)2] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 15222338480131079588ULL)) ? (3224405593578472010ULL) : (15222338480131079605ULL)))))));
                            var_21 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [5LL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1])) || (arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (signed char)-6))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((int) arr_16 [i_1] [i_1]));
                        arr_26 [i_1] = ((/* implicit */long long int) (signed char)-94);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    {
                        arr_38 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11 - 1] [i_11] [7ULL] [i_11 - 1]))) + ((-(2688836237413263682ULL)))));
                        var_24 = ((/* implicit */signed char) arr_19 [i_10]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_10 [i_10] [i_10] [i_10]))))) ? (((int) arr_10 [i_10] [i_10] [i_10])) : ((+(((/* implicit */int) arr_10 [i_10] [i_10] [i_10])))))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                {
                    var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 33554432)) ? (arr_22 [i_10] [i_15] [i_15] [i_15]) : (((/* implicit */int) arr_9 [i_10] [(signed char)1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [i_14] [i_15]))) : (arr_44 [i_10] [i_15] [i_10])))) || (((/* implicit */_Bool) ((int) arr_43 [i_10] [i_14]))))))) : (arr_13 [i_10] [i_15] [i_10] [i_10] [10])));
                    var_27 -= ((((((/* implicit */_Bool) ((unsigned long long int) (short)0))) ? (((((/* implicit */_Bool) arr_7 [i_15])) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) arr_9 [i_10] [i_10])))) : (((/* implicit */int) ((_Bool) arr_34 [i_10] [i_10] [i_10] [i_10]))))) >> ((((~(max((((/* implicit */int) arr_9 [i_10] [i_14])), (arr_32 [i_10] [i_10] [i_10]))))) + (2101205420))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 15222338480131079599ULL))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            arr_49 [i_10] [i_10] = ((/* implicit */signed char) ((unsigned long long int) arr_46 [i_10]));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_30 [1ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [5ULL] [i_16] [(signed char)6] [10]))))) : (((/* implicit */long long int) ((int) 3224405593578472020ULL)))))) || (((/* implicit */_Bool) arr_43 [i_10] [i_10]))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (signed char)-95))))) : (((/* implicit */int) (signed char)119))))));
        /* LoopSeq 3 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) arr_44 [i_20] [i_18] [i_19]);
                        var_32 *= ((((/* implicit */_Bool) arr_57 [i_18 + 1] [i_18] [i_18 + 1])) ? (((/* implicit */int) arr_31 [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) arr_31 [i_18 + 1] [i_18])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_18] [i_18 + 1] [i_18])) ? (((/* implicit */int) arr_20 [i_18] [i_18 + 1] [i_18])) : (((/* implicit */int) arr_20 [i_18] [i_18 + 1] [10LL]))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 11; i_22 += 4) 
                {
                    for (int i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_56 [i_17] [i_21]))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_18])) || (((/* implicit */_Bool) arr_35 [(signed char)4]))));
                            var_36 = ((/* implicit */long long int) (_Bool)1);
                            var_37 |= ((signed char) arr_13 [i_17] [i_22] [i_21] [4ULL] [i_18 + 1]);
                        }
                    } 
                } 
                var_38 = arr_28 [i_18] [i_18 + 1];
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_18 + 1])) ? (((unsigned long long int) arr_4 [i_18] [i_18])) : (((((/* implicit */_Bool) (short)-16748)) ? (arr_66 [i_18 + 1] [1ULL] [i_18] [1ULL] [i_18] [7ULL]) : (((/* implicit */unsigned long long int) arr_41 [i_17]))))));
            }
            /* LoopNest 2 */
            for (signed char i_24 = 1; i_24 < 10; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    {
                        arr_76 [i_17] [i_18] = ((/* implicit */short) arr_12 [i_24 - 1] [i_24 - 1] [i_24 + 1] [i_24 - 1]);
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_18] [i_24 + 1])) || (((/* implicit */_Bool) arr_28 [i_18] [i_24 + 1]))));
                    }
                } 
            } 
            arr_77 [i_18] [i_18 + 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_37 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_74 [i_18] [i_18] [i_18] [i_17])) : (((/* implicit */int) arr_69 [0] [i_18] [i_18] [i_17] [i_18])))));
        }
        for (int i_26 = 2; i_26 < 8; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 11; i_27 += 4) 
            {
                for (unsigned long long int i_28 = 2; i_28 < 10; i_28 += 2) 
                {
                    {
                        arr_86 [i_17] [i_17] [i_17] [i_17] [i_17] |= ((unsigned long long int) 5476682141587327796ULL);
                        /* LoopSeq 1 */
                        for (int i_29 = 0; i_29 < 11; i_29 += 4) 
                        {
                            var_41 *= ((/* implicit */signed char) arr_40 [i_17] [i_17] [i_17]);
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2120815976)) ? (((/* implicit */unsigned long long int) -1)) : (15222338480131079584ULL)));
                            var_43 &= ((/* implicit */int) (+(-5845922966871003928LL)));
                        }
                        arr_90 [(signed char)8] [10LL] [i_27] [(signed char)8] [i_27] |= ((/* implicit */signed char) arr_30 [i_17]);
                        var_44 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_26 + 1] [i_26] [i_26])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_17] [i_17] [i_17])) ? (arr_83 [i_17]) : (((/* implicit */unsigned long long int) arr_50 [i_17] [i_17])))))));
                        var_45 |= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_17]))))) ? (((((/* implicit */_Bool) -1497375200)) ? (9621290569319420982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
            var_46 |= ((/* implicit */int) arr_39 [i_26 + 1] [i_26 - 2]);
            var_47 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_1 [i_26] [i_26])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 4) 
            {
                var_48 = ((/* implicit */int) ((short) (short)16748));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_89 [i_26] [0LL] [i_26 + 2] [i_26 + 3])) ? (((/* implicit */int) arr_89 [i_26] [i_26] [i_26 + 1] [i_26 - 1])) : (((/* implicit */int) arr_89 [5] [i_26] [i_26 + 2] [i_26 + 3]))));
                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-588372193) : (((/* implicit */int) (signed char)127))));
                var_51 |= ((/* implicit */short) arr_73 [i_17] [i_26] [i_30] [i_30] [i_26]);
            }
        }
        for (long long int i_31 = 0; i_31 < 11; i_31 += 4) 
        {
            var_52 = ((/* implicit */unsigned long long int) arr_79 [(_Bool)0] [i_31]);
            arr_96 [i_31] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_31])) ? ((-(((/* implicit */int) arr_31 [i_17] [i_17])))) : (((/* implicit */int) arr_54 [i_31] [i_31]))));
            arr_97 [i_17] = ((/* implicit */signed char) 728698261);
        }
    }
    /* LoopNest 2 */
    for (int i_32 = 0; i_32 < 15; i_32 += 2) 
    {
        for (short i_33 = 0; i_33 < 15; i_33 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_34 = 0; i_34 < 15; i_34 += 4) 
                {
                    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_98 [1] [i_33]), (arr_103 [i_33] [i_33] [i_33] [i_33]))))))) ? (max((18446744073709551615ULL), (16041070841413884966ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-5)), (-337155660)))))))));
                    /* LoopNest 2 */
                    for (signed char i_35 = 0; i_35 < 15; i_35 += 4) 
                    {
                        for (signed char i_36 = 2; i_36 < 14; i_36 += 4) 
                        {
                            {
                                var_54 = ((/* implicit */_Bool) arr_103 [i_32] [i_32] [i_32] [i_32]);
                                var_55 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_32] [i_33] [i_34] [i_35] [i_32])) ? (((((/* implicit */_Bool) arr_10 [i_35] [i_35] [20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_107 [i_36 + 1] [i_36 + 1] [i_36] [(signed char)2] [i_36]))) : (arr_11 [i_35] [i_35] [i_35]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_107 [i_34] [i_34] [i_34] [i_34] [i_34])))))));
                                arr_112 [i_32] [i_33] [(signed char)9] [i_32] [i_32] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [i_36 - 2] [i_36] [i_36 - 1])))) && (((/* implicit */_Bool) arr_101 [i_33] [i_33] [i_34]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned long long int i_37 = 0; i_37 < 15; i_37 += 1) 
                {
                    for (int i_38 = 0; i_38 < 15; i_38 += 1) 
                    {
                        for (int i_39 = 0; i_39 < 15; i_39 += 1) 
                        {
                            {
                                var_56 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_109 [i_32] [i_32] [(signed char)5] [i_32] [i_32])) + (((/* implicit */int) arr_116 [i_32] [i_32] [i_32] [i_32]))))) && (((/* implicit */_Bool) arr_114 [i_32] [i_32] [i_32] [i_38]))));
                                var_57 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_32] [i_33] [i_33] [i_32] [i_32])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_32] [i_33] [i_32]))) : (arr_13 [i_32] [i_33] [i_32] [i_32] [i_32]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_32] [i_32] [i_32]))))))));
                                var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_39] [i_39])) ? (((long long int) -1507844137)) : (((/* implicit */long long int) ((int) arr_17 [i_32] [i_32] [i_32] [i_32] [i_32])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_32])) ? (arr_101 [i_33] [i_37] [i_37]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 337155652)) ? (arr_13 [i_33] [i_33] [i_33] [i_33] [i_33]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))) : (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_39] [i_39] [i_38] [i_39] [i_39] [i_33]))))) : ((((+(18446744073709551612ULL))) >> (((/* implicit */int) arr_24 [i_33] [i_33] [i_33]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_59 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)73)) ? (var_1) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)-11222)) : (((/* implicit */int) (short)-7))))))));
    var_60 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((3587820038442082396LL) - (3587820038442082376LL)))))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) var_7)))))))) ? (min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) var_0)));
}
