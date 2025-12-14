/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45194
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
    var_16 = ((/* implicit */unsigned char) ((signed char) min((var_12), ((unsigned char)0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_17 -= var_3;
            arr_5 [i_0] [(signed char)19] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0] [(unsigned char)6] [i_0]))));
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)0))) == ((+(((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)11]))))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_19 = ((signed char) (unsigned char)229);
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) (signed char)30)))) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_2] [i_3 - 1] [i_2])) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) (signed char)-116)) + (146))) - (30)))))));
                arr_13 [(signed char)8] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [(signed char)13] [i_3 - 2]))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)97))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (unsigned char)47))));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) (signed char)115);
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_25 = ((unsigned char) var_2);
                            var_26 = ((/* implicit */signed char) ((unsigned char) (unsigned char)47));
                            var_27 = ((/* implicit */unsigned char) arr_0 [(signed char)15]);
                            arr_28 [i_0] [i_2] [i_6] [i_7] [i_8 + 2] = ((/* implicit */unsigned char) var_8);
                            arr_29 [i_6] [i_6] [i_6] [(unsigned char)2] [(signed char)16] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [(signed char)9] [i_2] [(unsigned char)22] [i_6] [(unsigned char)21] [i_8 - 2] [i_8 + 3]))));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                var_28 += (signed char)93;
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) arr_22 [i_0] [i_2] [i_9] [i_10] [(unsigned char)22] [i_2]);
                    var_30 ^= ((/* implicit */unsigned char) (signed char)30);
                }
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_9 + 1] [i_9 + 3] [i_9 + 3])))))));
                    var_32 *= ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)124)) / (((/* implicit */int) (signed char)-123))))));
                    arr_39 [(unsigned char)3] [(signed char)7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                    arr_40 [(unsigned char)0] [i_2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_21 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 + 1]))));
                }
                var_33 += ((/* implicit */signed char) (((~(((/* implicit */int) var_12)))) + (((((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_15 [(signed char)21])) : (((/* implicit */int) arr_26 [(signed char)7] [i_2]))))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_34 -= ((/* implicit */signed char) var_12);
                            var_35 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-33))));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)237)) - (((/* implicit */int) (unsigned char)171)))) + ((-(((/* implicit */int) var_2))))));
        }
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
        {
            arr_50 [i_0] = ((/* implicit */signed char) (unsigned char)94);
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_0])) + (29))) - (8)))));
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    for (signed char i_17 = 1; i_17 < 19; i_17 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_4)))))));
                            var_39 = var_12;
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_27 [i_17 + 1] [(signed char)6] [i_15] [(unsigned char)21] [i_17] [(signed char)21] [(unsigned char)19]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            var_41 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-110))));
            arr_62 [i_0] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)77)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_18]))))));
            var_42 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_0] [(unsigned char)3] [i_18] [(unsigned char)19] [(signed char)4] [i_18] [i_18]))));
            arr_63 [i_0] [(unsigned char)4] [i_0] = var_0;
        }
        for (signed char i_19 = 2; i_19 < 22; i_19 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                arr_69 [(signed char)16] [(signed char)12] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)234)) || (((/* implicit */_Bool) var_9))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    for (signed char i_22 = 4; i_22 < 19; i_22 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)248))));
                            var_44 = ((/* implicit */unsigned char) arr_34 [i_20] [(signed char)13] [i_20] [(unsigned char)0] [i_21]);
                            arr_77 [i_22] [i_19] = arr_17 [i_0] [i_19 + 1] [i_20] [i_21] [i_22];
                        }
                    } 
                } 
            }
            for (signed char i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 22; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 4) 
                    {
                        {
                            var_45 *= (unsigned char)157;
                            var_46 = ((/* implicit */signed char) ((((/* implicit */int) arr_81 [i_24] [i_23] [i_19 - 1] [i_24])) / ((-(((/* implicit */int) (unsigned char)97))))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_19 + 1] [i_19 + 1] [i_24 + 1])) : (((/* implicit */int) (signed char)-83))));
                            arr_86 [i_0] [i_19] [i_0] [i_24 - 1] [i_24] = ((/* implicit */unsigned char) (signed char)14);
                        }
                    } 
                } 
                var_48 = ((/* implicit */signed char) ((unsigned char) (signed char)30));
            }
            var_49 = var_15;
            /* LoopSeq 1 */
            for (signed char i_26 = 1; i_26 < 22; i_26 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_27 = 0; i_27 < 23; i_27 += 4) 
                {
                    var_50 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)89)) || (((/* implicit */_Bool) arr_92 [i_0] [(unsigned char)9] [i_26 - 1]))));
                    var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_72 [i_0] [i_0] [(signed char)18] [i_0] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 0; i_28 < 23; i_28 += 1) 
                    {
                        var_52 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))) * ((+(((/* implicit */int) arr_92 [i_28] [(signed char)5] [i_19 - 1]))))));
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_0))) <= ((+(((/* implicit */int) (signed char)31))))));
                        var_54 = var_2;
                    }
                }
                /* LoopSeq 3 */
                for (signed char i_29 = 0; i_29 < 23; i_29 += 3) 
                {
                    arr_101 [(signed char)10] [i_0] [(signed char)9] [i_26 + 1] [(unsigned char)16] [i_29] = ((/* implicit */unsigned char) var_10);
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_70 [i_19 - 1] [i_19 - 2] [i_19 - 2] [i_29])) + (((/* implicit */int) arr_6 [(signed char)21] [i_0]))));
                }
                for (unsigned char i_30 = 0; i_30 < 23; i_30 += 2) 
                {
                    arr_104 [i_30] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)67))));
                    arr_105 [(unsigned char)1] [i_19 - 1] [i_26 + 1] [i_19 + 1] [i_30] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_94 [i_26 + 1] [i_26 + 1]))));
                }
                for (signed char i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    arr_108 [(signed char)15] [i_0] [i_19 - 2] [i_26] [i_31] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)0)))));
                    var_56 = ((/* implicit */unsigned char) var_11);
                }
                /* LoopSeq 2 */
                for (signed char i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    var_57 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_6))))));
                    arr_111 [i_0] [(unsigned char)15] = ((unsigned char) (signed char)124);
                    var_58 = ((signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))));
                }
                for (unsigned char i_33 = 0; i_33 < 23; i_33 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 2; i_34 < 21; i_34 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) (signed char)107))));
                        arr_117 [(unsigned char)18] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)22)) | (((/* implicit */int) (signed char)-96))));
                        var_60 |= ((/* implicit */signed char) (unsigned char)234);
                    }
                    arr_118 [i_0] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)24))));
                    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_16 [(signed char)7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_25 [i_0] [i_0] [(signed char)1] [(unsigned char)18] [i_33] [i_33])))) : (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (unsigned char i_35 = 0; i_35 < 23; i_35 += 3) 
                    {
                        var_62 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_10 [(unsigned char)22] [(unsigned char)15] [i_26 - 1] [i_19 - 2])) : (((/* implicit */int) var_8)))) + (((/* implicit */int) arr_36 [i_33] [i_26 + 1] [i_19 - 1] [(signed char)12]))));
                        var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))));
                        var_64 = ((/* implicit */unsigned char) min((var_64), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
                        arr_121 [i_0] [i_0] [(signed char)2] [i_0] [(unsigned char)16] = ((/* implicit */unsigned char) ((signed char) var_11));
                        var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_26 + 1] [i_33] [(unsigned char)21] [(unsigned char)6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_26 - 1] [i_19 - 2] [i_26] [i_0]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_36 = 0; i_36 < 23; i_36 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_37 = 2; i_37 < 20; i_37 += 1) 
        {
            for (signed char i_38 = 1; i_38 < 22; i_38 += 4) 
            {
                for (signed char i_39 = 0; i_39 < 23; i_39 += 4) 
                {
                    {
                        arr_132 [i_38 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_36] [i_38 + 1] [i_38])) ? (((/* implicit */int) arr_59 [i_36] [i_38 - 1] [i_38 + 1])) : (((/* implicit */int) arr_59 [i_36] [i_38 - 1] [(signed char)21]))));
                        /* LoopSeq 1 */
                        for (signed char i_40 = 0; i_40 < 23; i_40 += 3) 
                        {
                            arr_135 [(unsigned char)9] [i_37] [i_38 + 1] [i_39] [i_40] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_51 [i_39] [i_37 + 2]))));
                            var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((unsigned char) arr_72 [i_37 + 1] [(signed char)0] [(signed char)13] [(signed char)13] [i_40])))));
                            var_67 = ((/* implicit */signed char) max((var_67), (arr_53 [i_37 - 2] [i_38 - 1])));
                            var_68 *= ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_88 [(signed char)14] [i_37 + 1] [i_37 - 2])) : (((/* implicit */int) var_6))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_41 = 0; i_41 < 23; i_41 += 1) 
        {
            for (unsigned char i_42 = 1; i_42 < 22; i_42 += 4) 
            {
                {
                    arr_142 [i_41] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_14))) + (2147483647))) >> (((((/* implicit */int) (signed char)61)) - (40)))));
                    var_69 = ((signed char) var_14);
                    /* LoopSeq 3 */
                    for (unsigned char i_43 = 0; i_43 < 23; i_43 += 2) 
                    {
                        var_70 = (unsigned char)0;
                        var_71 -= ((signed char) var_10);
                    }
                    for (unsigned char i_44 = 0; i_44 < 23; i_44 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_45 = 0; i_45 < 23; i_45 += 3) 
                        {
                            arr_153 [(unsigned char)20] [i_41] [(signed char)0] [i_44] [i_45] = var_8;
                            arr_154 [i_36] [i_42 + 1] [i_42 + 1] [i_44] [i_41] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_42 - 1] [i_42 + 1] [i_42 - 1] [i_42 + 1]))));
                        }
                        for (unsigned char i_46 = 0; i_46 < 23; i_46 += 4) 
                        {
                            var_72 = ((/* implicit */unsigned char) arr_137 [i_36] [i_36] [i_36]);
                            var_73 = ((/* implicit */unsigned char) max((var_73), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_103 [(unsigned char)0] [i_44] [i_42 + 1] [i_36])))))));
                        }
                        for (signed char i_47 = 0; i_47 < 23; i_47 += 4) 
                        {
                            arr_161 [i_41] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
                            var_74 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) arr_150 [i_42 - 1] [i_42 - 1] [i_42 - 1] [(signed char)20] [i_42] [i_42 + 1] [i_42 + 1])) : (((/* implicit */int) var_11))));
                            var_75 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)109)))) * (((/* implicit */int) arr_120 [i_42 - 1] [i_42 - 1] [(signed char)14] [i_42 + 1] [(unsigned char)13] [i_42 + 1] [i_42 + 1]))));
                        }
                        for (signed char i_48 = 0; i_48 < 23; i_48 += 1) 
                        {
                            var_76 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_8 [(signed char)8] [(unsigned char)1] [(unsigned char)2]))) & (((/* implicit */int) arr_10 [(signed char)14] [i_41] [i_41] [(unsigned char)14]))));
                            var_77 = ((/* implicit */unsigned char) var_10);
                        }
                        var_78 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-11)) * (((((/* implicit */int) (signed char)119)) * (((/* implicit */int) (unsigned char)165))))));
                    }
                    for (unsigned char i_49 = 0; i_49 < 23; i_49 += 2) 
                    {
                        var_79 = ((/* implicit */signed char) max((var_79), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)61)) * (((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_139 [i_49] [(unsigned char)8] [i_36])))))));
                        /* LoopSeq 2 */
                        for (signed char i_50 = 0; i_50 < 23; i_50 += 1) 
                        {
                            arr_170 [(signed char)4] [i_36] [i_49] [(signed char)8] [i_36] [(signed char)2] |= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_9)))));
                            arr_171 [i_36] [i_36] [(unsigned char)13] [i_41] [(signed char)0] [i_36] = arr_78 [i_36];
                            var_80 *= ((/* implicit */signed char) (unsigned char)19);
                            var_81 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)235)) > (((/* implicit */int) var_1))));
                        }
                        for (unsigned char i_51 = 4; i_51 < 19; i_51 += 1) 
                        {
                            var_82 = ((/* implicit */signed char) min((var_82), (((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)239)))))))));
                            arr_175 [(unsigned char)14] [i_51 - 2] [i_36] [(signed char)12] [(unsigned char)0] [(signed char)0] [i_51] &= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_36] [i_41] [i_49] [i_51 + 1])) + (((/* implicit */int) arr_10 [i_36] [i_36] [i_36] [i_36]))));
                            var_83 += ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_3))));
                        }
                    }
                }
            } 
        } 
        arr_176 [i_36] [i_36] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-119)))) * (((((/* implicit */int) arr_137 [(signed char)14] [i_36] [i_36])) * (((/* implicit */int) (unsigned char)38))))));
    }
    var_84 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_1))) == (max(((~(((/* implicit */int) (signed char)37)))), (((/* implicit */int) var_7))))));
}
