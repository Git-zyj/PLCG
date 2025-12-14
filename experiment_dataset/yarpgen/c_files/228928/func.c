/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228928
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (unsigned short)1009))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1667430396)) ? (2621055890U) : (((/* implicit */unsigned int) -1054125765)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 + 3]), ((unsigned short)43670)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_2 [i_0 + 2]))))) : (((int) (unsigned short)1009))));
                    arr_10 [3U] [i_1 + 2] = ((/* implicit */unsigned short) ((3962840561U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48962)))));
                }
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    var_19 = ((/* implicit */int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((unsigned short) ((((332126735U) ^ (var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42575))))));
                        arr_17 [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)0);
                    }
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)56444))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2])))))));
                    arr_18 [i_0] [i_0] [i_3 - 3] [(unsigned short)13] = ((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)41548)));
                }
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    var_22 ^= ((int) var_11);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_26 [i_7] [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) 395063198U));
                                var_23 = ((/* implicit */unsigned int) (unsigned short)10313);
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 2606444054U))));
                                var_25 ^= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)37712)), (2606444054U)))) ? (((unsigned int) var_8)) : (((unsigned int) (!(((/* implicit */_Bool) arr_19 [i_0 - 1] [5] [i_6] [5]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_29 [i_8] = ((int) (+(3899904101U)));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_28 [i_8]))));
        arr_30 [i_8] &= ((/* implicit */unsigned short) (~(arr_28 [i_8])));
        /* LoopSeq 3 */
        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    {
                        var_27 |= ((unsigned short) arr_32 [i_8] [(unsigned short)20] [i_9 - 3]);
                        var_28 = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) min((var_29), ((unsigned short)3100)));
        }
        for (unsigned int i_12 = 4; i_12 < 18; i_12 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65516))));
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                var_31 = ((int) arr_28 [i_12 - 3]);
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */_Bool) (unsigned short)21449)) ? (((/* implicit */unsigned int) arr_27 [10])) : (var_12))))))));
                arr_48 [i_8] [i_12] [i_12] = ((/* implicit */int) ((unsigned int) arr_34 [i_12 + 2] [i_12] [i_13]));
            }
            var_33 &= ((/* implicit */unsigned short) (-(arr_35 [i_12 + 1] [i_12 - 1] [i_12 - 4] [i_12 + 3])));
        }
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_34 = ((/* implicit */int) (unsigned short)12363);
            var_35 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20617)) < (((/* implicit */int) (unsigned short)0))));
        }
        var_36 |= ((/* implicit */int) arr_28 [i_8]);
    }
    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        var_37 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)7103))))), (((arr_50 [i_15] [i_15]) | (arr_50 [i_15] [i_15])))));
        arr_54 [i_15] = ((/* implicit */unsigned short) ((((((arr_50 [i_15] [i_15]) / (1254777864U))) + (((unsigned int) (unsigned short)21439)))) == (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)1548)), (((int) arr_53 [i_15] [i_15])))))));
    }
    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        var_38 ^= ((/* implicit */int) (+(((arr_40 [i_16] [i_16] [i_16] [(unsigned short)9] [i_16]) - (3252684737U)))));
        /* LoopNest 3 */
        for (unsigned short i_17 = 2; i_17 < 19; i_17 += 3) 
        {
            for (unsigned short i_18 = 1; i_18 < 18; i_18 += 3) 
            {
                for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    {
                        var_39 = max((((/* implicit */int) ((((/* implicit */int) var_5)) < (arr_45 [i_17 - 1] [19U] [i_18 + 2] [i_18 + 1])))), (((((/* implicit */_Bool) (unsigned short)45811)) ? (((/* implicit */int) arr_43 [i_17 - 2] [i_18 + 1] [(unsigned short)11])) : (((/* implicit */int) arr_43 [i_17 - 2] [i_18 + 1] [18])))));
                        arr_64 [i_16] [i_17] [i_16] [(unsigned short)6] [i_18] = ((/* implicit */unsigned int) ((unsigned short) var_16));
                        var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) 1107337228)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            arr_69 [i_20] = ((/* implicit */unsigned int) (unsigned short)53785);
            var_41 = ((/* implicit */int) arr_36 [i_16] [i_16] [i_20] [2]);
            arr_70 [i_16] [i_20] [i_20] = ((/* implicit */unsigned short) ((unsigned int) min((arr_61 [i_20]), (arr_61 [i_16]))));
        }
        var_42 = ((/* implicit */unsigned short) ((unsigned int) max((2430450657U), (((/* implicit */unsigned int) (unsigned short)44086)))));
    }
    for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_22 = 1; i_22 < 8; i_22 += 3) 
        {
            var_43 = var_8;
            arr_77 [i_21] [i_22 + 2] [3U] = ((/* implicit */int) ((((unsigned int) (unsigned short)65535)) >> (((((unsigned int) arr_55 [i_22 + 1] [i_22 - 1])) - (24345U)))));
            var_44 = ((/* implicit */unsigned int) (unsigned short)7103);
            /* LoopSeq 1 */
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        {
                            var_45 = ((int) (~(2430450657U)));
                            var_46 = arr_23 [i_21] [i_22] [i_24] [13U];
                            arr_84 [i_21] [i_22] [(unsigned short)9] [i_24] [(unsigned short)9] = max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)45915))), (((((/* implicit */_Bool) 2114361690)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 3858246266U)))))) : (((unsigned int) (unsigned short)15343)))));
                            var_47 = (~(((int) arr_78 [i_23] [i_22] [i_22 + 2])));
                            var_48 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [(unsigned short)13] [(unsigned short)13] [(unsigned short)10] [i_23] [(unsigned short)10] [(unsigned short)10]))));
                        }
                    } 
                } 
                arr_85 [i_21] [i_22 + 1] [i_23] [i_23] = ((/* implicit */unsigned int) var_14);
                arr_86 [i_21] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_37 [i_22 + 2] [i_22 + 1] [i_22])));
                var_49 = min((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (arr_73 [i_22 + 1] [i_21]));
                var_50 = ((/* implicit */int) ((unsigned short) min((((unsigned int) (unsigned short)6958)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_65 [i_21]))))))));
            }
        }
        for (unsigned short i_26 = 0; i_26 < 10; i_26 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_27 = 3; i_27 < 8; i_27 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_28 = 1; i_28 < 6; i_28 += 1) 
                {
                    var_51 = var_7;
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned short) (-(((unsigned int) arr_5 [i_27 + 2]))));
                        var_53 = arr_83 [i_21] [i_21] [i_28 + 2] [i_29];
                        arr_98 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((unsigned short) ((((((/* implicit */_Bool) (unsigned short)30890)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_62 [i_26] [(unsigned short)0] [i_26] [1U])))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26562)) || (((/* implicit */_Bool) var_11)))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_30 = 0; i_30 < 10; i_30 += 2) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (unsigned short i_31 = 3; i_31 < 9; i_31 += 2) 
                    {
                        arr_105 [i_21] [i_26] [i_21] [5] [(unsigned short)0] [i_31 - 2] = ((/* implicit */unsigned int) arr_12 [i_31] [i_30] [i_21] [i_21]);
                        var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7694)) >> (((arr_91 [i_31] [i_31] [i_31 - 3] [i_31 - 3]) - (1215286529U)))));
                    }
                    arr_106 [i_21] [i_26] [i_27] [i_30] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46809)) ? (178047702U) : (((/* implicit */unsigned int) -1113919635))))) ? (((4217746781U) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */unsigned int) arr_44 [9] [i_26] [17U])));
                    arr_107 [i_21] [i_27] [3U] [i_21] [i_21] = ((/* implicit */unsigned short) 1970274731);
                }
                for (unsigned int i_32 = 0; i_32 < 10; i_32 += 2) /* same iter space */
                {
                    var_56 = ((unsigned short) arr_76 [i_21]);
                    var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((unsigned int) 1284130620U)))));
                }
                var_58 = ((/* implicit */unsigned short) 3010836675U);
                var_59 = ((/* implicit */unsigned int) max((var_59), (min((((/* implicit */unsigned int) (unsigned short)13)), (min((arr_91 [i_27 + 1] [i_27 + 2] [i_27 + 2] [i_27 - 3]), (arr_91 [i_27 - 3] [i_27 - 2] [i_27 - 3] [i_27 - 1])))))));
            }
            for (unsigned short i_33 = 3; i_33 < 9; i_33 += 2) 
            {
                var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_15 [i_21] [i_26] [i_33] [(unsigned short)6]))) * (((/* implicit */int) ((((/* implicit */int) arr_15 [i_21] [10] [i_26] [i_33])) <= (0))))));
                /* LoopSeq 1 */
                for (unsigned int i_34 = 4; i_34 < 7; i_34 += 1) 
                {
                    var_61 ^= ((unsigned short) (~(((/* implicit */int) arr_74 [i_26] [i_33 - 1] [(unsigned short)7]))));
                    var_62 = ((/* implicit */unsigned short) ((min((0U), (((/* implicit */unsigned int) (unsigned short)1)))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_21] [i_26] [i_33 - 1] [i_34 - 1])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_35 = 0; i_35 < 10; i_35 += 2) 
                    {
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -2114361691))));
                        arr_119 [i_33] [i_33] [i_33] [i_26] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38974)) ? (((/* implicit */int) (unsigned short)26571)) : (arr_22 [i_33 - 3] [i_33 + 1] [i_34 + 3] [i_34 - 2] [i_34 - 1])));
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-2114361701)))) ? (-563919622) : (((/* implicit */int) ((unsigned short) 1865975899U)))));
                    }
                    for (unsigned int i_36 = 0; i_36 < 10; i_36 += 3) 
                    {
                        var_65 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) -780709166)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)0)))));
                        arr_122 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] = min((((unsigned int) var_10)), ((~(1048150399U))));
                        var_66 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_21] [i_33 - 3] [i_34] [i_21])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59111))) / (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)11630))));
                        arr_123 [i_36] [i_26] [i_26] [i_21] = ((unsigned short) (unsigned short)12066);
                    }
                    /* vectorizable */
                    for (int i_37 = 1; i_37 < 7; i_37 += 3) 
                    {
                        var_67 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -692937734)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_68 [i_37]))))));
                        arr_126 [(unsigned short)3] [i_26] [i_26] [i_26] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_74 [i_26] [5] [i_26])) : (var_2)));
                        var_68 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (unsigned short)30901)))));
                    }
                }
                /* LoopNest 2 */
                for (int i_38 = 1; i_38 < 7; i_38 += 2) 
                {
                    for (unsigned int i_39 = 2; i_39 < 6; i_39 += 1) 
                    {
                        {
                            arr_132 [i_21] [i_26] [i_26] [i_33] [i_21] [i_21] = ((unsigned short) ((((/* implicit */int) (unsigned short)16384)) != (arr_90 [i_26] [i_38 + 3] [i_39 + 2])));
                            var_69 = ((/* implicit */int) max((var_69), (((/* implicit */int) min((var_0), (max((((unsigned short) arr_56 [i_21])), (min((arr_63 [i_26] [i_26] [i_33] [i_21]), (var_9))))))))));
                            arr_133 [i_33 - 3] [9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_78 [i_39 - 2] [i_38 + 1] [i_33 - 3]), (((/* implicit */unsigned int) (unsigned short)53448))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))) : ((~(min((var_6), (((/* implicit */unsigned int) (unsigned short)59866))))))));
                            arr_134 [i_39] [i_39] [i_21] [i_33] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)5)))), (((/* implicit */int) (unsigned short)2))));
                            arr_135 [i_21] [9] [9] [0] [(unsigned short)7] = ((/* implicit */int) (unsigned short)0);
                        }
                    } 
                } 
            }
            var_70 = ((/* implicit */unsigned int) min((var_70), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33629)) ? (((((/* implicit */_Bool) 1236779630U)) ? (((/* implicit */int) arr_55 [i_26] [(unsigned short)0])) : (((/* implicit */int) arr_55 [i_21] [i_26])))) : (((/* implicit */int) ((unsigned short) arr_14 [i_21] [i_26] [i_26] [i_26]))))))));
            arr_136 [i_21] [i_21] [i_26] = arr_32 [i_21] [i_21] [i_21];
            var_71 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)59631))));
            var_72 = ((/* implicit */int) ((unsigned short) ((unsigned short) arr_2 [i_26])));
        }
        for (unsigned short i_40 = 0; i_40 < 10; i_40 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_41 = 0; i_41 < 10; i_41 += 3) 
            {
                var_73 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_140 [i_41] [i_40] [i_21]))));
                var_74 ^= ((unsigned int) 756682081);
                arr_142 [4] = ((/* implicit */unsigned short) ((unsigned int) arr_140 [i_21] [i_40] [i_41]));
            }
            var_75 = ((/* implicit */unsigned int) max((var_75), (((/* implicit */unsigned int) ((unsigned short) 692423902)))));
            var_76 = ((/* implicit */unsigned short) ((int) ((unsigned short) ((unsigned short) arr_19 [i_21] [i_21] [i_40] [i_40]))));
        }
        var_77 = ((/* implicit */int) var_5);
    }
}
