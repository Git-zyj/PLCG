/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226683
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) (~(min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))));
            var_16 = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
            var_17 &= (-(((/* implicit */int) arr_2 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */short) (((~(((/* implicit */int) ((arr_4 [i_2]) < (((/* implicit */int) arr_9 [i_0] [i_0]))))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)116)) > (((/* implicit */int) (unsigned char)112)))))));
                            var_19 -= arr_2 [i_2 + 1];
                            var_20 = (unsigned char)122;
                        }
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_10 [12] [i_1] [i_0 - 1] [i_0] [i_1])))) ? (arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */int) var_12)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) * (1966080)))) ? (((((/* implicit */int) (unsigned char)158)) / (arr_8 [(unsigned char)0] [i_0] [i_5]))) : (((((/* implicit */int) (short)254)) * (((/* implicit */int) var_4)))));
            var_23 |= ((/* implicit */int) arr_6 [i_5] [i_5] [16] [(unsigned char)16]);
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min(((unsigned char)124), ((unsigned char)135))))));
            var_25 = ((int) max((arr_15 [i_0]), (max((((/* implicit */int) (unsigned char)114)), (arr_8 [i_6] [i_0] [i_0])))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)0])) ? (-1) : (((/* implicit */int) (short)-12488))))) ? (((/* implicit */int) arr_16 [4])) : (((/* implicit */int) (unsigned char)114)))), (174974402))))));
                var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-5148)) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_7]))))))) ? (((int) var_8)) : (max(((-(var_1))), (((/* implicit */int) (short)-29786))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)1])) ? (((/* implicit */int) arr_6 [i_0] [15] [15] [10])) : (((/* implicit */int) var_8)))))));
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_23 [i_0] [(short)14] [i_8] [i_9] [i_9 - 1] [i_8]) : (((/* implicit */int) var_4)))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) arr_17 [i_0]);
                        var_31 = ((((/* implicit */_Bool) 276382509)) ? (arr_10 [i_8] [i_10] [i_9 + 3] [i_10] [i_8]) : (var_6));
                    }
                    for (short i_11 = 2; i_11 < 17; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) (short)-29786)) ? (arr_4 [i_0]) : ((~(((/* implicit */int) arr_9 [(unsigned char)1] [i_9]))))))));
                        var_33 -= ((/* implicit */int) arr_22 [4] [i_8]);
                    }
                }
                for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_2 [i_0])))))));
                    var_35 = ((/* implicit */unsigned char) ((((arr_29 [i_0] [i_6] [i_6] [10] [7]) <= (((/* implicit */int) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_30 [15] [i_6] [i_6] [i_6]))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_13) : (1105218401))))));
                }
                var_37 = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_31 [(short)14] [16] [i_0 - 1] [i_6])) : (arr_0 [i_0 - 1]));
            }
            for (int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_38 = ((((((/* implicit */int) var_12)) & (arr_19 [i_0 - 1]))) << (((((min((arr_19 [i_0 + 1]), (arr_19 [i_0 + 1]))) + (462230195))) - (28))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    var_39 = ((/* implicit */int) ((unsigned char) (~(var_14))));
                    /* LoopSeq 3 */
                    for (int i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_0] [(unsigned char)2] [(unsigned char)2])) ? (((int) var_8)) : (arr_12 [i_0 + 1] [i_0])));
                        var_41 = var_9;
                    }
                    for (int i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        var_42 *= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_13 [i_6] [i_14])) ? (var_14) : (var_1))));
                        var_43 = ((/* implicit */short) min((var_43), (arr_28 [(unsigned char)16] [i_14] [(short)15])));
                        var_44 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_11)) : (arr_25 [i_14] [(short)6] [13])))) ? ((~(((/* implicit */int) arr_6 [i_14] [10] [i_13] [i_14])))) : (((/* implicit */int) ((-1105218409) > (((/* implicit */int) arr_17 [i_0]))))));
                    }
                    for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_45 = (~(((/* implicit */int) (unsigned char)147)));
                        var_46 = ((((/* implicit */int) arr_22 [(unsigned char)3] [i_0])) / (((/* implicit */int) ((unsigned char) arr_13 [1] [i_0]))));
                        var_47 = ((/* implicit */short) 68690322);
                    }
                    /* LoopSeq 4 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        var_48 -= ((/* implicit */short) arr_40 [i_0 - 1] [i_14]);
                        var_49 = ((/* implicit */short) ((int) 1966080));
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_8 [10] [i_0] [10]) : (-326627288)))) ? (((/* implicit */int) ((unsigned char) arr_13 [0] [i_0]))) : (arr_49 [(short)12] [i_6] [i_13] [i_0] [i_6] [i_18])));
                        var_51 = ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [(short)10] [i_14])) ? (((/* implicit */int) ((short) var_12))) : (((arr_45 [(short)10] [i_6] [(short)3] [i_14] [i_14]) / (((/* implicit */int) var_8)))));
                        var_52 = ((/* implicit */unsigned char) ((var_14) & (((/* implicit */int) arr_6 [i_0] [i_6] [i_6] [i_6]))));
                    }
                    for (int i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        var_53 = ((/* implicit */int) ((unsigned char) arr_28 [i_0 + 1] [i_0] [i_0 - 1]));
                        var_54 = var_13;
                    }
                    for (int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        var_55 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_6] [(short)1] [0] [i_6] [i_0] [i_20])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_0 + 1]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) (unsigned char)108)))));
                        var_56 = ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_47 [i_0] [i_0] [i_0])) : (arr_21 [i_0]));
                    }
                    for (int i_21 = 2; i_21 < 17; i_21 += 3) 
                    {
                        var_57 |= ((/* implicit */int) (unsigned char)209);
                        var_58 = (~(((/* implicit */int) arr_11 [(unsigned char)12] [(unsigned char)14] [i_0 - 1] [(unsigned char)12] [16])));
                        var_59 = ((/* implicit */short) var_6);
                        var_60 = ((unsigned char) ((arr_38 [i_0] [10] [i_0] [i_0] [i_21 - 2]) / (1762656481)));
                    }
                    var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_16 [i_14])) ? (((/* implicit */int) (unsigned char)211)) : (-1))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_11)))))))));
                }
                var_62 = ((/* implicit */int) min((var_62), (var_6)));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_22 = 4; i_22 < 16; i_22 += 3) 
        {
            for (short i_23 = 0; i_23 < 18; i_23 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        for (unsigned char i_25 = 1; i_25 < 16; i_25 += 1) 
                        {
                            {
                                var_63 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                                var_64 = ((/* implicit */int) (!(((/* implicit */_Bool) (((((+(((/* implicit */int) (short)(-32767 - 1))))) + (2147483647))) << (((((min((var_9), (arr_29 [(unsigned char)11] [i_22] [7] [i_24] [i_25 - 1]))) + (1125457148))) - (27))))))));
                            }
                        } 
                    } 
                    var_65 = ((/* implicit */short) ((max((arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned char)16] [i_22 - 1] [(unsigned char)16]), (2058022430))) <= (((/* implicit */int) var_7))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_26 = 2; i_26 < 17; i_26 += 3) 
        {
            var_66 = ((int) ((((arr_1 [1] [i_26 - 1]) / (((/* implicit */int) var_11)))) / (var_9)));
            var_67 -= ((/* implicit */unsigned char) ((arr_45 [i_0 - 1] [i_0] [7] [i_26] [9]) > (-1)));
            var_68 ^= ((/* implicit */short) arr_61 [i_0] [17] [i_0]);
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 18; i_27 += 3) 
        {
            var_69 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(short)15])) ^ (arr_29 [i_0] [i_27] [i_27] [7] [(short)15])))) ? (((/* implicit */int) arr_43 [i_0] [(short)2] [i_27] [i_27] [(unsigned char)4])) : (arr_44 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_0 + 1] [i_0 + 1] [12] [10])));
            /* LoopSeq 2 */
            for (short i_28 = 0; i_28 < 18; i_28 += 4) 
            {
                var_70 = ((/* implicit */unsigned char) arr_38 [6] [i_0 + 1] [i_27] [i_0] [i_28]);
                var_71 = ((int) ((int) arr_6 [i_0] [6] [i_28] [i_28]));
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 18; i_29 += 1) 
                {
                    for (short i_30 = 3; i_30 < 14; i_30 += 2) 
                    {
                        {
                            var_72 = ((((/* implicit */int) ((((/* implicit */int) var_10)) != (arr_68 [i_0] [i_30 + 3])))) / (((/* implicit */int) arr_9 [i_0] [(short)5])));
                            var_73 = ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) arr_31 [(unsigned char)5] [(short)0] [(unsigned char)5] [(unsigned char)10])))) : (((((/* implicit */_Bool) var_3)) ? (756124818) : (var_9))));
                            var_74 = 1253525081;
                        }
                    } 
                } 
            }
            for (int i_31 = 0; i_31 < 18; i_31 += 1) 
            {
                var_75 = (-(((/* implicit */int) arr_72 [i_31] [16] [i_0 + 1])));
                var_76 = ((/* implicit */unsigned char) ((int) 2096798756));
            }
            var_77 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)178))))) ? (arr_27 [i_0 + 1] [i_0] [i_0 - 1] [i_27] [i_0] [(unsigned char)3] [i_27]) : ((+(((/* implicit */int) var_10)))));
        }
        for (unsigned char i_32 = 0; i_32 < 18; i_32 += 3) 
        {
            var_78 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
            var_79 = -756124818;
        }
        var_80 -= ((/* implicit */short) min((min((-397557490), (((((/* implicit */_Bool) (unsigned char)132)) ? (var_6) : (-1253525081))))), (((((/* implicit */int) (unsigned char)224)) << (((((/* implicit */int) (short)8130)) - (8125)))))));
        /* LoopSeq 2 */
        for (short i_33 = 0; i_33 < 18; i_33 += 4) 
        {
            var_81 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_73 [i_0 - 1] [i_0 - 1] [i_33]) & (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) var_12))))))) ? (max((-1), (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) ((arr_86 [i_0] [i_0 + 1] [i_0]) > (((/* implicit */int) var_0)))))));
            var_82 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 1])) ? (arr_15 [i_0 - 1]) : (arr_15 [i_0 - 1])))) ? ((+(arr_60 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))) : (((int) (+(arr_54 [9] [9] [0] [i_33] [0] [i_33])))));
        }
        for (int i_34 = 3; i_34 < 16; i_34 += 1) 
        {
            var_83 = ((/* implicit */unsigned char) ((int) ((int) (+(((/* implicit */int) (unsigned char)122))))));
            var_84 = ((/* implicit */int) arr_31 [4] [i_0 - 1] [(short)3] [4]);
            /* LoopNest 2 */
            for (unsigned char i_35 = 4; i_35 < 15; i_35 += 3) 
            {
                for (int i_36 = 1; i_36 < 17; i_36 += 1) 
                {
                    {
                        var_85 = ((/* implicit */short) ((((/* implicit */_Bool) ((68690344) ^ (var_1)))) ? (((/* implicit */int) (!(((((/* implicit */int) arr_63 [12] [(short)10])) < (((/* implicit */int) var_7))))))) : (((/* implicit */int) var_5))));
                        var_86 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) arr_39 [4] [(short)1] [4] [i_36 - 1] [i_34] [i_34] [(unsigned char)9])) : (arr_60 [(short)11] [i_34] [i_34] [i_34])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_32 [i_0 + 1] [i_0 + 1] [(unsigned char)4] [i_0 + 1]) : (((/* implicit */int) arr_20 [i_35] [17])))) : ((~(arr_10 [i_0] [7] [(unsigned char)9] [i_0] [i_0])))))) ? (((int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (arr_83 [i_0]) : (((/* implicit */int) ((unsigned char) var_9)))))));
                        var_87 = ((/* implicit */short) ((((min((((/* implicit */int) var_10)), (1966064))) / (((838164554) << (((((/* implicit */int) (unsigned char)216)) - (216))))))) ^ (((/* implicit */int) var_2))));
                    }
                } 
            } 
        }
    }
    var_88 = (-(((((((/* implicit */_Bool) var_4)) ? (var_9) : (1158763593))) + (((int) var_10)))));
    /* LoopSeq 1 */
    for (int i_37 = 0; i_37 < 23; i_37 += 3) 
    {
        var_89 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_97 [i_37]) : (((-452000476) - (-1)))));
        var_90 = ((2147483647) << (((((((/* implicit */_Bool) 1056964608)) ? (max((68690354), (-1966097))) : (var_1))) - (68690354))));
        var_91 ^= ((((/* implicit */_Bool) arr_97 [i_37])) ? (((((/* implicit */_Bool) var_5)) ? (arr_95 [i_37] [i_37]) : (arr_95 [i_37] [i_37]))) : (min((134217727), (arr_97 [i_37]))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_38 = 4; i_38 < 10; i_38 += 3) 
    {
        var_92 ^= (-(((/* implicit */int) (unsigned char)243)));
        var_93 = ((/* implicit */int) var_4);
        var_94 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))) > (((int) var_0))))) <= (((int) min((((/* implicit */int) (short)-7447)), ((-2147483647 - 1)))))));
    }
    /* LoopNest 3 */
    for (int i_39 = 1; i_39 < 8; i_39 += 4) 
    {
        for (int i_40 = 0; i_40 < 10; i_40 += 3) 
        {
            for (unsigned char i_41 = 2; i_41 < 6; i_41 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_42 = 2; i_42 < 9; i_42 += 2) 
                    {
                        var_95 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_92 [i_41])), (-1253525065)))) ? (((int) ((unsigned char) arr_11 [13] [12] [(short)4] [(short)15] [(short)4]))) : (((arr_62 [i_41] [i_41 + 1] [i_41] [i_40]) & (((((/* implicit */_Bool) (short)-1)) ? (arr_77 [i_39] [i_39] [(short)0] [i_42] [(unsigned char)0] [5]) : (var_3))))));
                        var_96 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((arr_4 [i_39 + 2]) <= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_11)))))));
                    }
                    var_97 = (~(var_6));
                    var_98 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_107 [i_39 + 2] [(short)1] [i_41 + 3] [i_39 - 1])), (arr_17 [i_39 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) arr_45 [2] [i_40] [2] [i_39 + 1] [i_40]))))) : ((~(((/* implicit */int) min((arr_90 [i_39] [(short)1] [i_39]), ((unsigned char)181))))))));
                    var_99 += ((/* implicit */int) min((var_0), (arr_36 [i_39] [i_41] [i_41] [8] [i_41])));
                }
            } 
        } 
    } 
}
