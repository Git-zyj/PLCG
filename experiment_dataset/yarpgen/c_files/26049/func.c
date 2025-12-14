/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26049
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) var_12);
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((int) arr_0 [i_0])), (min((((/* implicit */int) arr_1 [i_0])), (var_7))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((int) (~(var_8)))));
            var_19 = ((short) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [(short)18] [i_1])))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned char) var_9)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_21 = ((/* implicit */int) var_1);
            var_22 = ((int) var_5);
        }
        var_23 = ((/* implicit */unsigned char) arr_3 [(unsigned char)13]);
        var_24 = ((/* implicit */int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) (unsigned char)193))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_25 ^= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 1671830743)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_3])))));
        var_26 *= ((/* implicit */unsigned char) max((((((/* implicit */int) ((short) var_3))) / (((((/* implicit */_Bool) (unsigned char)20)) ? (-1945410034) : (((/* implicit */int) (unsigned char)20)))))), (((int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)242)))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)94))));
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_19 [i_5] [(short)4] [i_5] = var_11;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_28 |= ((((/* implicit */_Bool) arr_20 [i_6] [i_5] [i_6 + 3] [i_7] [i_6 + 3])) ? (var_9) : (((/* implicit */int) var_2)));
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) (unsigned char)182)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_30 += ((/* implicit */int) ((unsigned char) arr_20 [i_6] [i_10] [i_6 + 3] [i_6] [i_6]));
                                arr_28 [i_5] [i_5] [7] [i_5] [i_4] = (~(1699934142));
                                var_31 = ((/* implicit */short) max((var_31), (var_4)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */short) ((unsigned char) arr_13 [i_4 - 2]));
        var_33 = ((/* implicit */int) ((short) var_13));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) var_10);
                        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)7448))))) ? (arr_31 [5] [i_4 + 2] [5]) : (((((/* implicit */_Bool) -245521321)) ? (arr_26 [i_4] [i_11] [i_11] [i_12] [i_11] [(short)0]) : (((/* implicit */int) var_13))))));
                    }
                    for (short i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        var_36 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_12] [i_11] [i_12] [i_12] [i_13] [i_15 + 2] [i_15 + 2])) : (((/* implicit */int) (unsigned char)71)));
                        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                        var_38 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                    var_39 = ((/* implicit */short) var_0);
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) -1187296995)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (short)32767))));
                    var_41 = ((short) (!(((/* implicit */_Bool) var_0))));
                }
                for (short i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    arr_44 [i_16] [i_11] = ((/* implicit */short) ((arr_26 [i_4] [i_11] [i_12] [i_4 - 1] [i_12] [i_12]) != (arr_26 [i_4] [10] [i_12] [i_4 + 1] [i_11] [i_4])));
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((arr_38 [i_4 + 2] [i_11] [i_11] [i_11]) >= (((/* implicit */int) var_4)))))));
                    var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)71))));
                    arr_45 [i_11] = ((/* implicit */short) (~(-778384577)));
                }
                var_44 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) arr_14 [18] [i_12] [i_12]))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (224)))));
            }
            for (int i_17 = 3; i_17 < 24; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_6)) : (((arr_53 [i_4] [i_11] [13] [i_18] [i_19]) & (961946369))))))));
                            var_46 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_4] [i_11])) - (((/* implicit */int) var_10))))) ? (arr_34 [i_4 + 1]) : (((/* implicit */int) ((short) -2120121048))));
                        }
                    } 
                } 
                var_47 = ((((/* implicit */_Bool) arr_39 [i_4 - 2] [i_17] [i_17] [(short)8] [i_4 + 2] [i_17] [(short)8])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15419))))));
            }
            for (short i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        {
                            arr_60 [i_21] [i_11] [i_20] [i_21] [i_22] [i_20] = ((/* implicit */unsigned char) (~(arr_14 [i_22] [i_20] [i_4 + 2])));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)236)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_20] [i_21] [(short)19])) : (arr_39 [i_4] [i_11] [i_4] [i_4] [i_4] [i_21] [i_22]))) : (((/* implicit */int) (unsigned char)20)))))));
                            arr_61 [i_22] [i_11] [(short)19] [i_20] [i_20] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7447)))))));
                            var_49 = ((/* implicit */unsigned char) ((short) arr_54 [i_4] [i_11] [i_22]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_23 = 1; i_23 < 21; i_23 += 1) 
                {
                    var_50 = ((((/* implicit */_Bool) var_8)) ? (arr_26 [i_23 + 2] [i_23 + 1] [i_23 + 3] [i_23 + 4] [i_20] [i_23 + 1]) : (var_8));
                    var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((short) var_6)))));
                    var_52 = ((/* implicit */short) (~(arr_50 [(short)21] [i_23 + 2] [i_23] [(short)21])));
                    arr_66 [i_4] [i_4] [i_20] [i_23] [(unsigned char)16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_4 + 1] [i_23 + 1])) ? (((/* implicit */int) arr_48 [i_4 + 2] [i_23 + 1])) : (var_9)));
                    var_53 = ((/* implicit */short) var_2);
                }
                for (unsigned char i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) (short)21029))));
                    arr_69 [i_20] [i_11] = ((/* implicit */short) ((int) ((unsigned char) var_2)));
                }
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    for (short i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */int) min((var_55), (((int) (short)25807))));
                            var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) var_1))));
                            var_57 = (~(((((/* implicit */_Bool) arr_42 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)7448)))));
                        }
                    } 
                } 
            }
            for (short i_27 = 0; i_27 < 25; i_27 += 1) /* same iter space */
            {
                var_58 *= ((/* implicit */short) ((((/* implicit */int) var_2)) == (0)));
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    for (short i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */short) (((~(((/* implicit */int) var_11)))) >> (((((/* implicit */int) arr_13 [i_4 + 1])) - (4252)))));
                            var_60 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_11)))));
                            var_61 = (~(((/* implicit */int) ((short) var_11))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_30 = 3; i_30 < 24; i_30 += 3) 
                {
                    for (int i_31 = 3; i_31 < 22; i_31 += 1) 
                    {
                        {
                            arr_87 [i_31] [i_31] [i_31] [i_31] [i_4 - 1] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_75 [i_31] [i_4] [i_4 + 1] [(short)1] [i_31]))));
                            arr_88 [i_4] [i_31] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_37 [i_4] [i_11] [i_27] [i_30] [i_30] [i_31]))));
                            arr_89 [i_31] [i_31] [i_31] [i_31] [i_4] = ((/* implicit */unsigned char) -1415331158);
                            var_62 = ((/* implicit */int) ((unsigned char) var_15));
                        }
                    } 
                } 
            }
            var_63 |= ((short) var_9);
        }
    }
    for (int i_32 = 2; i_32 < 22; i_32 += 1) /* same iter space */
    {
        var_64 = arr_53 [i_32] [i_32] [i_32] [i_32] [i_32];
        var_65 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (var_7) : (((/* implicit */int) arr_68 [i_32] [(short)10] [(unsigned char)12] [(unsigned char)12]))))) || (((/* implicit */_Bool) ((int) arr_51 [i_32] [i_32] [(short)7] [i_32] [i_32]))))) ? (max((arr_15 [(short)10]), (arr_15 [6]))) : (((((/* implicit */int) var_15)) - (((/* implicit */int) var_1)))));
        /* LoopSeq 1 */
        for (int i_33 = 1; i_33 < 24; i_33 += 4) 
        {
            var_66 = ((/* implicit */int) (unsigned char)31);
            var_67 = ((/* implicit */unsigned char) -229996028);
            /* LoopNest 2 */
            for (int i_34 = 3; i_34 < 24; i_34 += 1) 
            {
                for (unsigned char i_35 = 1; i_35 < 22; i_35 += 4) 
                {
                    {
                        var_68 = -646342276;
                        var_69 = ((int) ((((/* implicit */int) (short)-23927)) / (2147483645)));
                        /* LoopSeq 4 */
                        for (short i_36 = 4; i_36 < 24; i_36 += 1) 
                        {
                            var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) (~(((/* implicit */int) var_1)))))));
                            var_71 = ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_36 [i_36] [i_32] [i_32] [i_34] [i_32] [i_32])) : (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [(unsigned char)14]))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))))));
                        }
                        for (unsigned char i_37 = 0; i_37 < 25; i_37 += 2) 
                        {
                            var_72 *= ((/* implicit */unsigned char) var_14);
                            arr_106 [i_32 + 1] [i_32 + 1] [(short)15] [i_34] [i_34] [i_35 - 1] [i_37] = ((/* implicit */short) arr_64 [i_33] [i_34]);
                            var_73 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)512)) * (((/* implicit */int) arr_80 [i_35 + 3]))))) ? (((((/* implicit */int) arr_68 [i_33 + 1] [i_37] [i_35 + 1] [i_33 + 1])) * (((/* implicit */int) var_13)))) : (((/* implicit */int) ((short) arr_68 [i_33 - 1] [i_37] [i_35 + 1] [i_35])))));
                            var_74 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)157)) : (-961946369))), (((/* implicit */int) ((var_12) == ((+(((/* implicit */int) arr_16 [i_32] [i_35] [(short)23])))))))));
                            arr_107 [i_37] [i_35 - 1] [i_34] [i_33] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_84 [i_37] [i_35 + 3] [i_34 + 1])), ((~(((/* implicit */int) (short)15333))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-26914)) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_40 [i_32] [i_32] [i_33] [i_33] [i_37] [(short)8] [i_37]))))))));
                        }
                        for (short i_38 = 0; i_38 < 25; i_38 += 1) 
                        {
                            arr_111 [i_38] [i_38] [i_34] [i_38] [i_32] = ((short) (!(((/* implicit */_Bool) var_14))));
                            arr_112 [i_32] [i_33] [i_38] [(short)11] = (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (short)0)) : (var_8));
                        }
                        /* vectorizable */
                        for (short i_39 = 1; i_39 < 24; i_39 += 1) 
                        {
                            var_75 = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_95 [i_32 + 2] [i_34 - 1] [i_35 + 2])) : (((/* implicit */int) arr_113 [i_39 + 1] [19] [i_33] [i_32 - 1] [i_32] [i_32])));
                            arr_116 [i_39] [i_39] [i_34 - 3] [i_34] [i_39] [i_32] = ((/* implicit */int) ((-1986177872) < (646342276)));
                        }
                    }
                } 
            } 
            arr_117 [i_32] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_12 [i_32]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)10428)) : (((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) min((arr_23 [i_33 - 1] [(unsigned char)24]), (arr_23 [i_33 - 1] [14]))))));
        }
    }
    var_76 = ((/* implicit */int) var_0);
}
