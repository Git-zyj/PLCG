/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237917
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
    var_11 = ((/* implicit */int) ((unsigned char) var_7));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = var_4;
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) ((short) ((8362133433412555625ULL) != (((/* implicit */unsigned long long int) -187703875552168318LL)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) (+(arr_7 [i_1 + 3] [i_1 - 1] [13U] [i_0 + 1])));
                        arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_9 [i_0 - 4] [i_1] [i_1] [i_3]);
                        var_15 = ((/* implicit */_Bool) arr_6 [i_0] [i_3]);
                    }
                }
                for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (1558372295681557264LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_17 -= ((/* implicit */short) arr_13 [12ULL] [i_0 - 3] [12ULL] [12ULL]);
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -1)) : (35184372023296ULL))))));
                }
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_22 [i_6] [(short)2] [i_0 - 1] [i_1 + 2] [i_7])), (arr_7 [9LL] [i_1] [i_5] [i_0 + 1]))), (((/* implicit */long long int) min(((+(-2136418326))), (((/* implicit */int) arr_3 [i_5] [i_7])))))));
                                var_20 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (268435455) : (((/* implicit */int) (short)28438))))) % (8362133433412555640ULL)))));
                                var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [i_6] [i_6]) << ((((+(arr_0 [i_0]))) - (4780261593077865800LL))))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */short) arr_13 [(short)5] [i_1] [i_5] [i_5]);
                    var_23 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((arr_11 [i_0 - 4] [i_1 + 4] [i_5] [i_5]) == (arr_11 [i_1] [i_1 + 4] [i_5] [i_1]))))));
                }
                for (short i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((max((((/* implicit */unsigned int) var_1)), (arr_14 [i_0] [i_1] [i_8 + 1]))) << (((((/* implicit */int) min((var_1), (var_6)))) + (10396))))));
                    arr_25 [i_1] = (-(max((((/* implicit */int) var_7)), ((+(((/* implicit */int) arr_24 [(short)12])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_32 [i_1] [i_1] [i_8] [i_9] [i_10] = ((short) ((((/* implicit */_Bool) arr_28 [i_0 - 1])) ? (arr_28 [i_0 - 1]) : (arr_28 [i_0 - 1])));
                                arr_33 [i_0] [i_1 + 2] [i_8 - 1] [i_1] [i_10] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_7 [i_8 + 1] [i_1 + 1] [i_1] [i_0 - 4]))));
                                arr_34 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)97)) ? (35184372023287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))))));
                                var_25 = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_22 [i_1] [i_1] [i_8] [(signed char)3] [i_8 + 1]), (arr_22 [i_1] [i_1 + 2] [i_1 + 2] [i_10] [i_8 + 1]))));
                            }
                        } 
                    } 
                    arr_35 [i_1] [i_1] [i_8 - 1] = ((((/* implicit */_Bool) ((int) max((4294967295U), (((/* implicit */unsigned int) var_7)))))) ? ((~(((((/* implicit */long long int) var_10)) / ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))));
                }
                var_26 = ((/* implicit */unsigned long long int) (unsigned char)15);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
                {
                    var_27 = ((/* implicit */int) ((long long int) 18446708889337528330ULL));
                    var_28 ^= ((/* implicit */signed char) ((_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_1] [i_11] [i_11 - 1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 3; i_14 < 15; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((long long int) arr_19 [(signed char)5] [i_1] [17U] [i_13])) >= (((/* implicit */long long int) (+(arr_45 [i_0] [i_1] [i_12] [i_13] [i_14]))))));
                            arr_47 [(short)15] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)26)) >> (((-187703875552168318LL) + (187703875552168344LL)))))));
                        }
                        for (long long int i_15 = 3; i_15 < 17; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_0])) : (((/* implicit */int) var_2))))) ? ((+(35184372023306ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 2])))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((signed char) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_6))))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */int) var_9))))) : (arr_8 [i_0 + 1])));
                        }
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1959707313670572443LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 35184369991680LL)))) : (((unsigned long long int) var_7))));
                        arr_50 [i_1] [i_1] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (3027058387261125566LL)));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_34 &= ((/* implicit */signed char) var_8);
                            var_35 = ((/* implicit */unsigned char) ((unsigned int) arr_22 [i_1] [i_1] [13] [11ULL] [i_17]));
                            arr_56 [i_1] [i_12] = ((short) arr_8 [i_1 + 4]);
                            arr_57 [i_0 - 3] [(_Bool)1] [i_0 - 3] [i_1] [i_1] [i_16] [i_17] = ((/* implicit */short) var_8);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) arr_58 [i_18] [i_1] [i_1 + 2] [i_1] [i_0 + 2]);
                            var_37 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                        }
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_1 + 1] [(unsigned char)6] [i_1 + 1] [i_0 - 1] [i_0 - 4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_49 [i_1 + 2] [(short)3] [i_0] [i_0 - 4] [i_0 - 2])))))));
                        var_39 = ((/* implicit */short) (+(((var_8) / (-187703875552168318LL)))));
                    }
                    for (int i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
                    {
                        arr_65 [i_0] [i_1] [(short)1] [i_19] = ((/* implicit */unsigned int) arr_23 [i_1]);
                        var_40 = ((/* implicit */short) ((unsigned int) var_6));
                    }
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_41 = (+(arr_67 [i_1] [i_1 + 1] [i_1 + 1] [i_1]));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_12] [i_20]))));
                    }
                }
                for (long long int i_21 = 3; i_21 < 14; i_21 += 4) 
                {
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((short) min((arr_45 [i_0] [i_0] [i_1 + 1] [i_21] [i_21]), (arr_45 [i_21] [i_21 + 4] [i_21] [i_1 + 2] [i_0 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 15; i_22 += 2) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 18; i_23 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */long long int) max((var_44), (max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)96))))) ? (((((/* implicit */_Bool) 4294967276U)) ? (3027058387261125566LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) 177482278U)))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
                                var_45 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_0)))));
                                arr_74 [i_0] [i_0] [i_1] [(signed char)4] [i_0] [i_22] [i_23] = ((/* implicit */signed char) max((((((arr_7 [i_0] [i_0] [i_21 + 1] [i_0 + 2]) + (9223372036854775807LL))) << (((arr_45 [i_0] [i_0] [i_21 + 2] [i_0 + 1] [i_22 + 2]) - (1459445694U))))), (arr_40 [i_1])));
                            }
                        } 
                    } 
                    arr_75 [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) arr_52 [i_21] [i_1] [4] [i_0 - 3] [i_1] [i_0 - 1]);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_24 = 3; i_24 < 21; i_24 += 2) 
    {
        var_46 = ((/* implicit */unsigned char) arr_76 [i_24] [i_24]);
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (int i_25 = 1; i_25 < 11; i_25 += 4) 
    {
        var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_25] [i_25 - 1] [i_25] [i_25 - 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((short) var_10))))))));
        /* LoopNest 3 */
        for (short i_26 = 1; i_26 < 9; i_26 += 3) 
        {
            for (unsigned int i_27 = 0; i_27 < 12; i_27 += 3) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 1) 
                {
                    {
                        arr_91 [i_26] [i_26] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [(short)2] [i_26])) ? (arr_76 [i_26 + 3] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_25] [i_26] [i_27] [i_28] [i_28] [i_26]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [12LL])))));
                        /* LoopSeq 4 */
                        for (short i_29 = 0; i_29 < 12; i_29 += 4) 
                        {
                            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_6)) - (31171)))))))));
                            var_51 = ((/* implicit */unsigned long long int) (~(arr_84 [i_26])));
                        }
                        for (int i_30 = 0; i_30 < 12; i_30 += 3) 
                        {
                            var_52 = ((/* implicit */_Bool) var_5);
                            arr_96 [i_26] [i_26] [i_28] [i_28] [i_27] [i_26] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) var_5)) ? (var_3) : (arr_64 [i_30] [(_Bool)1] [(short)7] [i_26] [i_30])))));
                        }
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            var_53 = ((/* implicit */_Bool) var_10);
                            var_54 = ((/* implicit */unsigned char) (((~(-2630159003051039209LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        }
                        for (signed char i_32 = 3; i_32 < 10; i_32 += 2) 
                        {
                            arr_104 [i_25] [3U] [i_28] [i_26] [3ULL] [5LL] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_25 - 1] [i_26 - 1])) || (((((/* implicit */_Bool) arr_53 [i_25] [i_25] [i_27] [i_28])) || (((/* implicit */_Bool) arr_30 [i_28] [i_27] [i_26] [i_25]))))));
                            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) + (8375241363804752164LL))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_33 = 0; i_33 < 12; i_33 += 2) 
        {
            for (unsigned char i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_35 = 1; i_35 < 11; i_35 += 1) 
                    {
                        for (int i_36 = 2; i_36 < 8; i_36 += 3) 
                        {
                            {
                                var_56 = ((var_3) ^ (((((/* implicit */int) arr_6 [i_33] [i_34])) & (((/* implicit */int) arr_99 [i_36] [6LL] [i_35] [i_33] [i_25])))));
                                arr_114 [i_25 - 1] [i_35] = ((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_35 + 1] [i_25 - 1] [i_25 + 1] [i_25 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792))) - (35184372023323ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_25 + 1] [i_33] [i_33] [i_33])) - (((/* implicit */int) arr_10 [i_25 - 1] [(unsigned char)4] [i_33] [i_36 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_37 = 0; i_37 < 12; i_37 += 4) 
                    {
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (arr_26 [i_25 - 1] [i_34] [i_25 + 1] [i_25 - 1] [i_34] [i_33])));
                        var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_72 [i_25] [8ULL] [i_33])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_83 [i_25 - 1] [i_25])));
                        var_60 += ((/* implicit */unsigned long long int) arr_5 [i_25] [i_37] [(short)8]);
                        var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) arr_6 [i_34] [i_34]))));
                    }
                    var_62 = ((/* implicit */int) arr_51 [i_25] [i_25 - 1] [i_33] [12ULL]);
                }
            } 
        } 
    }
    var_63 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))))))));
}
