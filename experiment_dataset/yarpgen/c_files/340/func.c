/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/340
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
    var_16 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 += ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)196)))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned char) var_13)))));
    }
    var_20 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 &= ((int) arr_3 [6] [i_2]);
            arr_7 [i_1] [i_1] = ((arr_5 [i_1] [i_1]) / (((/* implicit */int) (unsigned char)203)));
            var_22 = ((/* implicit */_Bool) (unsigned char)4);
            var_23 = (-(var_10));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (_Bool)1))));
                        arr_16 [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_1]);
                        arr_17 [17] [i_3] [i_4] [i_4 - 1] [i_1] = ((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_11 [i_1] [21] [21])) : (arr_8 [i_4] [(_Bool)1]))), (arr_3 [i_1] [i_1]))));
                    }
                } 
            } 
            var_25 -= ((/* implicit */int) arr_9 [i_1]);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_26 = ((((((/* implicit */_Bool) -2125086217)) ? (((int) arr_15 [i_1] [i_1] [i_6] [i_1])) : (((/* implicit */int) ((_Bool) -2125086204))))) % (max((((/* implicit */int) var_15)), (arr_8 [i_1] [i_6]))));
            var_27 *= ((((/* implicit */int) var_15)) < (((int) ((_Bool) (_Bool)1))));
        }
        arr_20 [i_1] = max((((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [19])) / (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_15 [i_1] [(unsigned char)5] [i_1] [i_1])))));
        var_28 = ((/* implicit */unsigned char) arr_19 [i_1] [i_1] [i_1]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_29 |= ((/* implicit */int) (_Bool)0);
            var_30 = ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
            arr_25 [i_8] = ((/* implicit */_Bool) 1927410032);
            arr_26 [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((min((arr_10 [i_7] [i_7]), (arr_10 [i_7] [i_7]))) ? ((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_21 [(unsigned char)7] [i_8])))))) : (1210055913)));
        }
        /* LoopNest 3 */
        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (int i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_37 [i_7] [i_7] [(_Bool)1] [10] [11] [i_11 - 1] = -2147483645;
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((-(((var_14) % (((/* implicit */int) arr_4 [(_Bool)1] [i_9])))))) % (((/* implicit */int) ((((arr_12 [i_7] [i_10] [i_10]) % (((/* implicit */int) var_12)))) < (((/* implicit */int) arr_11 [i_9 - 2] [i_11 + 1] [i_11 - 1]))))))))));
                        arr_38 [i_7] [14] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_10 [i_9 + 1] [i_10])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            arr_42 [i_12] = ((/* implicit */_Bool) var_8);
            var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) (((~(-1888783799))) ^ (((var_13) & (((/* implicit */int) var_15))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) min((arr_4 [i_7] [i_12]), (((/* implicit */unsigned char) (_Bool)1))))) ^ ((~(((/* implicit */int) (_Bool)1))))))))));
            var_33 = (-(arr_12 [i_7] [i_12 + 2] [16]));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))), ((-(((((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_7])) - (((/* implicit */int) arr_2 [i_7] [i_7]))))))));
                        var_35 = ((/* implicit */_Bool) arr_15 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 1]);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_36 += max((var_2), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */int) arr_4 [i_15] [i_12])) : (arr_36 [i_15] [i_14] [(unsigned char)13] [i_7])))) ? (((((/* implicit */int) (_Bool)1)) / (arr_34 [i_7] [i_12] [i_12] [i_12]))) : (((/* implicit */int) var_12)))));
                            arr_50 [i_15] [i_15] [i_13] [i_14] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(_Bool)1] [i_13])) / (var_10)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) min((arr_18 [i_14] [i_14]), ((unsigned char)255))))))) ? ((-((-(63))))) : (((int) var_0))));
                        }
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            arr_53 [(_Bool)1] [i_14] = ((/* implicit */int) ((unsigned char) (unsigned char)239));
                            arr_54 [i_7] [(unsigned char)1] [17] [i_7] [i_7] [i_7] |= min((((((/* implicit */_Bool) arr_36 [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_12 + 1])) ? (((/* implicit */int) arr_18 [i_12 + 1] [i_12 - 1])) : (((/* implicit */int) arr_18 [i_12 + 1] [i_12 - 1])))), (max((731188966), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_15 [i_7] [i_7] [i_7] [i_7])))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 19; i_17 += 4) 
                        {
                            arr_59 [i_17] [i_17] [9] [i_13] [i_13] [11] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_12 + 1] [i_17 - 2])) ? (((/* implicit */int) arr_2 [i_12 + 1] [i_17 - 2])) : (((/* implicit */int) arr_45 [i_12 + 1] [i_17 - 2]))));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) arr_12 [i_17 + 1] [6] [i_13]))));
                            arr_60 [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_15 [i_7] [i_7] [i_14] [23])) % (((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
            var_38 = max((min((arr_35 [i_7] [i_12 + 1] [i_12 - 1] [i_12 + 2]), (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned char) arr_30 [i_12 + 2] [i_12]))));
        }
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) var_2))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12; i_18 += 3) 
    {
        arr_64 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) < (arr_19 [i_18] [i_18] [i_18])));
        /* LoopSeq 3 */
        for (unsigned char i_19 = 3; i_19 < 8; i_19 += 1) /* same iter space */
        {
            arr_68 [i_18] [i_19] [i_18] = arr_61 [i_18] [i_19];
            arr_69 [i_18] [i_19] [i_19 + 1] = arr_56 [i_19 - 1];
            /* LoopSeq 1 */
            for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                var_40 = arr_24 [i_19] [(unsigned char)18];
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_22 = 2; i_22 < 10; i_22 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned char) arr_43 [i_18] [i_20] [i_21] [i_22]);
                        var_42 = (-(((/* implicit */int) ((_Bool) var_2))));
                        var_43 += ((/* implicit */int) arr_67 [i_20]);
                    }
                    for (int i_23 = 0; i_23 < 12; i_23 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) ((int) ((_Bool) arr_36 [7] [i_19] [i_18] [i_19])));
                        var_45 ^= arr_35 [i_19 + 4] [i_23] [i_23] [i_23];
                    }
                    var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) arr_9 [i_21]))));
                    var_47 *= ((/* implicit */int) ((_Bool) arr_73 [i_19 + 2] [i_20]));
                    arr_82 [i_19] [i_20] [i_19] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_19 + 4] [i_19 - 2]))));
                }
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 2; i_25 < 10; i_25 += 1) 
                    {
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((unsigned char) ((arr_85 [i_18] [i_20] [8] [i_20]) / (var_13)))))));
                        var_49 = ((/* implicit */_Bool) min((var_49), (arr_83 [i_18] [i_18] [i_20] [10])));
                    }
                    arr_88 [i_19] [i_19 + 1] [i_20] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_63 [i_19 - 3] [i_19 + 3]) : (arr_63 [i_19 - 1] [i_19 + 1])));
                }
                var_50 = ((/* implicit */unsigned char) (_Bool)0);
            }
        }
        for (unsigned char i_26 = 3; i_26 < 8; i_26 += 1) /* same iter space */
        {
            var_51 = 2147483634;
            arr_91 [i_18] [i_18] = 1751480054;
            /* LoopNest 3 */
            for (int i_27 = 1; i_27 < 9; i_27 += 4) 
            {
                for (unsigned char i_28 = 0; i_28 < 12; i_28 += 4) 
                {
                    for (int i_29 = 0; i_29 < 12; i_29 += 2) 
                    {
                        {
                            arr_99 [i_27] = ((arr_22 [i_28] [i_27 - 1]) / (((var_0) ? (arr_86 [(unsigned char)9] [(unsigned char)9] [i_27] [i_28] [i_27] [i_27]) : (arr_86 [i_18] [i_26] [i_27] [i_27 - 1] [i_27] [i_29]))));
                            var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) (~(((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_30 = 0; i_30 < 12; i_30 += 4) 
        {
            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((int) arr_40 [i_18])))));
            /* LoopNest 2 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                for (int i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            arr_110 [2] [i_30] [i_31] [i_30] [i_33] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_49 [(unsigned char)2] [(_Bool)1] [i_31] [i_30] [(unsigned char)2])) % (arr_86 [i_18] [i_18] [i_31] [i_32] [i_30] [i_33])));
                            var_54 *= ((/* implicit */_Bool) 8191);
                        }
                        for (int i_34 = 2; i_34 < 11; i_34 += 4) 
                        {
                            var_55 += ((/* implicit */int) ((_Bool) arr_34 [i_34 + 1] [i_34] [i_34 - 1] [3]));
                            var_56 = ((/* implicit */int) arr_98 [i_18] [i_30] [i_34 - 2] [i_32] [i_18] [i_31] [i_30]);
                        }
                        arr_114 [i_18] [i_18] [i_31] [i_32] = var_14;
                        arr_115 [i_18] [i_18] = ((((/* implicit */int) arr_66 [i_30] [i_30])) < (((/* implicit */int) arr_66 [i_30] [i_31])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_35 = 0; i_35 < 12; i_35 += 4) 
        {
            for (int i_36 = 1; i_36 < 11; i_36 += 4) 
            {
                {
                    var_57 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_36 + 1] [i_36 + 1] [i_36 + 1] [i_36 - 1] [i_36 + 1])) % ((~(1751480054)))));
                    arr_123 [(unsigned char)3] [i_36] [i_36] [i_36] = (_Bool)1;
                    /* LoopSeq 4 */
                    for (unsigned char i_37 = 0; i_37 < 12; i_37 += 2) /* same iter space */
                    {
                        var_58 = ((/* implicit */_Bool) arr_71 [i_18] [7] [i_36] [(unsigned char)0]);
                        var_59 = arr_56 [i_18];
                        arr_127 [i_36] [2] [i_36] [2] = ((((/* implicit */_Bool) arr_90 [i_18] [i_35] [i_36 + 1])) ? (((/* implicit */int) arr_10 [i_36 - 1] [i_36 + 1])) : (arr_90 [i_35] [7] [i_36 + 1]));
                        arr_128 [(unsigned char)6] [i_35] [i_35] [i_35] |= ((/* implicit */int) (_Bool)0);
                    }
                    for (unsigned char i_38 = 0; i_38 < 12; i_38 += 2) /* same iter space */
                    {
                        var_60 *= ((/* implicit */int) arr_89 [i_18] [(_Bool)1] [i_36 - 1]);
                        /* LoopSeq 2 */
                        for (int i_39 = 0; i_39 < 12; i_39 += 2) 
                        {
                            var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_78 [i_35] [i_36 + 1] [i_38] [7] [i_39] [i_39]))));
                            arr_133 [i_36] = (~(arr_19 [i_18] [i_18] [i_18]));
                            var_62 = ((/* implicit */int) arr_79 [(unsigned char)4] [i_35] [i_35] [i_36 + 1] [(_Bool)1] [i_36]);
                        }
                        for (int i_40 = 0; i_40 < 12; i_40 += 3) 
                        {
                            arr_136 [i_18] [(unsigned char)10] [i_18] [i_36] = (_Bool)1;
                            var_63 -= ((arr_10 [i_18] [i_36 + 1]) ? (((/* implicit */int) arr_10 [i_35] [i_36 + 1])) : (((/* implicit */int) arr_10 [0] [i_36 - 1])));
                        }
                    }
                    for (unsigned char i_41 = 0; i_41 < 12; i_41 += 2) /* same iter space */
                    {
                        var_64 += ((/* implicit */int) ((((int) arr_1 [i_18])) < (((/* implicit */int) (_Bool)1))));
                        var_65 = ((int) arr_87 [i_18]);
                        var_66 = arr_137 [(_Bool)1] [i_36] [i_18] [(_Bool)1];
                        /* LoopSeq 1 */
                        for (int i_42 = 0; i_42 < 12; i_42 += 1) 
                        {
                            arr_142 [5] [i_41] [i_41] [i_36] [i_36] [i_36] [i_18] = ((/* implicit */unsigned char) var_7);
                            var_67 = ((/* implicit */int) max((var_67), (((arr_29 [i_42]) & (((/* implicit */int) arr_1 [i_36 + 1]))))));
                        }
                        arr_143 [i_36] [i_35] = ((/* implicit */int) (unsigned char)225);
                    }
                    for (int i_43 = 0; i_43 < 12; i_43 += 4) 
                    {
                        arr_146 [i_36] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_57 [i_36] [i_35] [i_36 - 1] [18] [i_35])))));
                        var_68 = -72430024;
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_44 = 0; i_44 < 12; i_44 += 3) 
        {
            var_69 = (-(((/* implicit */int) arr_93 [(unsigned char)6] [i_18] [(unsigned char)6])));
            var_70 = ((/* implicit */int) (_Bool)1);
            arr_149 [i_18] [i_44] = ((/* implicit */unsigned char) 361731260);
        }
        /* LoopNest 2 */
        for (int i_45 = 0; i_45 < 12; i_45 += 1) 
        {
            for (int i_46 = 4; i_46 < 11; i_46 += 2) 
            {
                {
                    arr_157 [i_45] = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_46] [i_46] [i_45])) < (-1)));
                    /* LoopNest 2 */
                    for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
                    {
                        for (unsigned char i_48 = 0; i_48 < 12; i_48 += 4) 
                        {
                            {
                                arr_165 [i_18] [i_45] [i_45] [i_47] [i_48] [i_18] [i_45] = ((((/* implicit */int) arr_83 [i_46 - 4] [i_45] [i_45] [i_45])) + (((/* implicit */int) ((_Bool) arr_40 [i_18]))));
                                arr_166 [i_48] [i_45] [i_46] [i_45] [i_18] = ((/* implicit */_Bool) arr_79 [i_18] [i_45] [i_46] [i_46 + 1] [(_Bool)1] [i_18]);
                                var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) ((((int) var_14)) < (((/* implicit */int) arr_55 [i_45] [(unsigned char)4] [i_46 - 4] [5] [i_18] [i_45] [i_48])))))));
                            }
                        } 
                    } 
                    arr_167 [i_18] [i_45] = ((/* implicit */int) arr_4 [i_45] [i_46 + 1]);
                }
            } 
        } 
    }
}
