/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238336
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
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_19))));
            var_21 = ((/* implicit */long long int) min((var_21), (arr_4 [i_1])));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) var_4);
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (short i_5 = 4; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned short) arr_4 [i_2])))));
                            var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_6)))));
                            var_25 = arr_5 [i_0] [i_0];
                            var_26 = ((/* implicit */unsigned short) arr_6 [i_3] [(unsigned char)11] [(short)3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_6 + 4])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_6 + 4]))));
                            var_28 = ((/* implicit */short) ((long long int) arr_0 [i_0 - 1]));
                            var_29 += ((/* implicit */short) ((unsigned char) arr_3 [i_2]));
                            var_30 = ((/* implicit */signed char) arr_13 [i_6 + 3] [14LL] [14LL] [i_0 - 1]);
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned short) var_0);
        }
        for (long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_32 = var_18;
            var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_14 [i_8] [i_0 - 2] [i_8] [i_0 - 2]))));
            arr_24 [i_8] [i_8] &= ((unsigned short) var_11);
            arr_25 [i_0] [i_8] [(short)15] = ((/* implicit */long long int) var_7);
            /* LoopSeq 3 */
            for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        {
                            arr_34 [(short)13] [i_0] [i_9] [(short)13] [i_9] = ((/* implicit */short) arr_6 [i_0 - 1] [i_9 + 1] [i_9 + 1]);
                            var_34 = ((/* implicit */signed char) var_16);
                            var_35 = ((/* implicit */long long int) arr_17 [(unsigned char)3] [i_8] [i_9] [i_11 - 1]);
                            var_36 -= ((unsigned short) ((((/* implicit */int) arr_15 [i_10] [i_8] [i_10] [(unsigned char)8] [i_10] [i_11])) >= (((/* implicit */int) arr_33 [i_11] [i_8] [i_11]))));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (unsigned char)0))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */short) ((unsigned char) ((short) var_15)));
                var_39 = ((/* implicit */long long int) arr_28 [i_0] [i_0] [(signed char)18]);
            }
            for (short i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_37 [i_0] = ((/* implicit */unsigned short) (signed char)-22);
                arr_38 [i_12] |= arr_12 [i_0] [i_0] [i_8] [(unsigned short)1];
                var_40 = ((((long long int) var_3)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)94))));
            }
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_41 = ((/* implicit */unsigned short) arr_8 [(unsigned short)3] [i_13] [i_8] [i_0]);
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_42 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_13] [(signed char)4])) ? (((/* implicit */int) arr_21 [i_13] [i_8] [i_13])) : (((/* implicit */int) var_11)))) & (((/* implicit */int) var_10))));
                    arr_43 [6LL] [i_0] [(unsigned short)10] = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_44 [i_0] [(unsigned short)15] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)12] [i_13] [i_8] [(unsigned short)12] [i_0])) ? (((/* implicit */int) ((unsigned short) (short)0))) : (((/* implicit */int) arr_22 [i_0] [i_0 - 1]))));
                    var_43 += ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_8] [i_0])) || (((/* implicit */_Bool) arr_28 [i_0] [i_0 - 2] [i_8]))));
                }
                var_44 *= ((/* implicit */unsigned short) var_8);
            }
        }
        var_45 *= ((short) arr_7 [(unsigned char)8] [i_0 - 1]);
        var_46 = ((/* implicit */unsigned short) ((long long int) ((signed char) (short)-12)));
    }
    for (unsigned short i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned short) ((signed char) arr_19 [(short)16] [i_15]));
        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_6 [i_15 + 2] [i_15 + 2] [i_15 - 1])) & (((/* implicit */int) arr_6 [i_15 + 2] [i_15] [i_15]))))))));
        /* LoopSeq 3 */
        for (short i_16 = 2; i_16 < 16; i_16 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_17 = 4; i_17 < 15; i_17 += 2) 
            {
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((((((/* implicit */int) arr_47 [i_15])) + (2147483647))) << (((((((/* implicit */int) arr_28 [i_15 - 1] [i_17 + 3] [i_16 - 2])) + (117))) - (31))))))));
                arr_54 [i_15] [(signed char)13] [i_15] [i_17] = ((/* implicit */signed char) arr_26 [i_17] [i_17] [i_17] [i_15]);
            }
            var_50 = ((unsigned short) arr_28 [i_15 + 1] [i_15] [i_16]);
            var_51 = ((/* implicit */unsigned char) max((((/* implicit */short) var_14)), ((short)-32743)));
        }
        for (short i_18 = 4; i_18 < 17; i_18 += 1) 
        {
            arr_58 [i_15] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_4 [i_18]) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_15] [i_18])) : (((/* implicit */int) var_9)))))))) >> (((((/* implicit */int) max((arr_41 [i_18 - 4] [i_15 + 1] [i_15 + 1] [i_15]), (((/* implicit */unsigned short) var_6))))) - (65429)))));
            /* LoopNest 2 */
            for (short i_19 = 1; i_19 < 16; i_19 += 2) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    {
                        var_52 &= ((/* implicit */unsigned char) var_13);
                        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */int) arr_40 [i_20] [i_20])) * (((/* implicit */int) var_5)))))));
                    }
                } 
            } 
            var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */int) arr_59 [(short)8] [(unsigned short)10] [i_15] [(short)8])) * (((/* implicit */int) var_12)))))));
            var_55 ^= ((/* implicit */short) max((((/* implicit */int) arr_30 [i_15 + 1] [i_15] [i_15 + 1] [i_18] [i_18 - 3])), (((((/* implicit */_Bool) ((unsigned short) arr_50 [i_15] [i_15] [(unsigned short)17]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_0 [i_18])))))))));
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            var_56 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
            /* LoopSeq 2 */
            for (short i_22 = 1; i_22 < 17; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 2; i_23 < 17; i_23 += 3) 
                {
                    for (long long int i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        {
                            arr_75 [i_22] [i_21] [i_22] [(unsigned short)0] [i_23] [i_21] = ((/* implicit */unsigned char) (+(arr_53 [i_22 - 1] [i_15 + 1])));
                            var_57 = ((/* implicit */unsigned char) ((short) arr_46 [i_15 + 1]));
                            var_58 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_59 [i_23] [i_23] [(short)7] [i_23])) ^ (((/* implicit */int) (short)10)))) != (((/* implicit */int) (short)-22066))));
                            var_59 *= ((/* implicit */signed char) ((arr_50 [i_15] [i_15 + 2] [i_22 + 1]) / (arr_50 [i_15] [i_15 + 2] [i_22 + 1])));
                            arr_76 [i_21] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_22 [i_23] [i_23]))) >= (((((/* implicit */int) arr_8 [i_21] [i_22] [i_23] [(unsigned short)2])) + (((/* implicit */int) (short)-29868))))));
                        }
                    } 
                } 
                arr_77 [i_15] [i_21] [i_22] = ((/* implicit */short) ((((/* implicit */int) (short)8)) * (((/* implicit */int) arr_68 [(unsigned char)3] [i_22] [i_22 + 1]))));
                /* LoopSeq 3 */
                for (unsigned short i_25 = 2; i_25 < 17; i_25 += 4) /* same iter space */
                {
                    var_60 = ((/* implicit */unsigned short) (+(arr_45 [i_15 + 2] [i_22 - 1])));
                    arr_80 [(short)7] [i_22 + 1] [(short)7] [i_22] [(short)7] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)8)) : (((((/* implicit */int) arr_0 [(unsigned short)13])) | (((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (short i_26 = 1; i_26 < 17; i_26 += 3) 
                    {
                        var_61 ^= ((/* implicit */unsigned short) ((short) arr_40 [i_25] [i_26 + 1]));
                        arr_83 [i_15] [i_21] |= ((/* implicit */short) ((((/* implicit */int) arr_29 [i_15 + 2] [i_25 + 1])) | (((/* implicit */int) arr_29 [i_15 - 1] [i_25 + 1]))));
                        var_62 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_25] [i_26] [(signed char)12] [i_26] [i_26 + 1] [i_26 + 1])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_25])) ? (((/* implicit */int) arr_17 [i_15] [i_21] [i_22] [(signed char)17])) : (((/* implicit */int) var_0))))));
                    }
                    var_63 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_82 [i_15] [(unsigned short)2] [i_22] [i_25])) : (((/* implicit */int) (signed char)92)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_46 [(unsigned char)6])) : (((/* implicit */int) arr_28 [i_15] [i_15] [i_15]))))));
                }
                for (unsigned short i_27 = 2; i_27 < 17; i_27 += 4) /* same iter space */
                {
                    var_64 = ((/* implicit */short) var_3);
                    var_65 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_21] [i_21])) + (((/* implicit */int) arr_41 [(unsigned short)17] [i_21] [i_21] [i_21]))));
                    arr_86 [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_27] [(unsigned char)12])) ? (((/* implicit */int) arr_15 [i_27] [i_21] [i_21] [i_21] [(unsigned char)16] [i_21])) : (((/* implicit */int) arr_78 [i_27] [i_22] [i_21] [i_15])))) <= (((/* implicit */int) arr_42 [i_27] [(signed char)8]))));
                    var_66 = ((/* implicit */short) ((signed char) var_17));
                    arr_87 [i_15] [i_21] [i_22] [i_21] [i_21] = ((/* implicit */unsigned char) var_5);
                }
                for (unsigned short i_28 = 2; i_28 < 17; i_28 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_29 = 3; i_29 < 16; i_29 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned short) min((var_67), (((/* implicit */unsigned short) arr_50 [i_21] [i_22] [i_22]))));
                        var_68 = var_4;
                        var_69 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_28] [i_28 - 1] [(unsigned short)2] [i_28] [i_28] [i_28 - 1])) ^ (((/* implicit */int) arr_16 [i_28] [i_28 + 1] [i_29] [i_28] [i_29] [i_29]))));
                        arr_92 [i_29] [i_21] [(signed char)14] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_21] [i_21] [i_29]))))) ? (((/* implicit */int) arr_11 [i_29 + 1] [i_28 - 1])) : (((/* implicit */int) arr_89 [i_29 - 1] [i_29 - 1] [(short)16] [i_29 - 2]))));
                        arr_93 [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_15 - 1] [i_22 + 1] [i_28 - 1])) ? (((/* implicit */int) arr_82 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_0))));
                    }
                    var_70 += var_12;
                }
            }
            for (short i_30 = 0; i_30 < 18; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 18; i_31 += 3) 
                {
                    for (short i_32 = 1; i_32 < 17; i_32 += 1) 
                    {
                        {
                            var_71 = ((/* implicit */long long int) min((var_71), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_96 [i_15 + 2] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) arr_96 [i_15 - 1] [i_15 + 2] [i_15 - 1])) : (((/* implicit */int) arr_96 [i_15 + 2] [i_15 - 1] [i_15 - 1])))))));
                            var_72 *= ((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_9 [i_15 + 1] [i_15 + 2] [i_32 + 1] [i_32 - 1]))));
                        }
                    } 
                } 
                var_73 = ((/* implicit */short) ((unsigned short) arr_67 [i_15 - 1] [i_21]));
            }
            var_74 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [(short)6] [i_15 + 2]))));
        }
        var_75 = arr_69 [i_15] [i_15] [i_15];
    }
    for (unsigned short i_33 = 1; i_33 < 16; i_33 += 3) /* same iter space */
    {
        var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) (~(((/* implicit */int) min((arr_59 [(short)2] [i_33] [i_33] [i_33 - 1]), (arr_59 [(short)4] [i_33] [(unsigned char)10] [i_33 + 2])))))))));
        arr_106 [i_33] [i_33] = ((/* implicit */unsigned char) ((unsigned short) ((((arr_53 [(unsigned char)11] [(signed char)8]) / (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_33] [17LL] [(unsigned short)0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_33 - 1] [i_33 - 1] [i_33] [i_33]))))));
        /* LoopSeq 1 */
        for (short i_34 = 0; i_34 < 18; i_34 += 4) 
        {
            arr_109 [i_33] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_34] [i_33])) / (((/* implicit */int) arr_22 [i_34] [i_34]))))), (arr_67 [i_33] [i_33])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_35 = 0; i_35 < 18; i_35 += 4) 
            {
                var_77 = ((/* implicit */unsigned short) ((short) arr_57 [i_33 - 1] [i_35]));
                arr_112 [i_33 + 1] [i_33 + 1] [i_35] = ((/* implicit */short) var_4);
                arr_113 [i_33] [i_33] [i_33 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_65 [i_33 - 1] [i_33 - 1])));
            }
        }
    }
    for (unsigned short i_36 = 1; i_36 < 16; i_36 += 3) /* same iter space */
    {
        var_78 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [(short)12])) + (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_110 [(unsigned short)17] [i_36] [i_36]))))));
        /* LoopNest 3 */
        for (unsigned short i_37 = 3; i_37 < 16; i_37 += 1) 
        {
            for (unsigned short i_38 = 1; i_38 < 16; i_38 += 1) 
            {
                for (short i_39 = 1; i_39 < 15; i_39 += 4) 
                {
                    {
                        var_79 = ((/* implicit */short) ((((/* implicit */int) arr_98 [i_36] [i_37] [i_38] [i_38 - 1])) >> (((((/* implicit */int) ((unsigned short) arr_98 [i_36] [i_36] [i_38] [i_38 - 1]))) - (166)))));
                        var_80 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_40 = 2; i_40 < 16; i_40 += 1) 
                        {
                            var_81 = ((/* implicit */unsigned short) var_10);
                            var_82 = ((/* implicit */unsigned short) min((var_82), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_38 - 1] [14LL])) & (((/* implicit */int) arr_2 [i_38 + 2] [(short)20])))))));
                            arr_128 [i_36] [(short)2] [i_36] [i_39] [(short)0] &= ((/* implicit */signed char) arr_98 [(unsigned short)10] [(unsigned short)10] [i_38] [i_39]);
                        }
                        arr_129 [(unsigned short)10] [i_38] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_107 [i_36 + 1]), (arr_107 [i_36 + 1])))) ? (arr_127 [(unsigned short)11]) : (((/* implicit */long long int) ((/* implicit */int) max((max((arr_103 [i_37]), (((/* implicit */short) var_9)))), (arr_14 [(short)16] [i_38] [i_37] [(short)16])))))));
                    }
                } 
            } 
        } 
        var_83 *= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_22 [(short)16] [i_36 + 2])))) % (((/* implicit */int) ((short) arr_22 [(unsigned char)20] [i_36 + 2])))));
    }
    var_84 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_13)))) == (((/* implicit */int) var_10))));
}
