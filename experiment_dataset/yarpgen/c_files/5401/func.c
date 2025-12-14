/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5401
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
    var_16 = ((/* implicit */int) min((var_16), (max((((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))), (max((((/* implicit */int) min((var_9), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) var_10)) ? (var_10) : (var_12)))))))));
    var_17 &= ((/* implicit */int) ((unsigned short) 775879982U));
    var_18 *= ((/* implicit */signed char) max((((/* implicit */int) var_2)), (min((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) var_1)))), (((int) var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((long long int) ((int) arr_3 [i_0]))))));
                    var_20 = ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((int) (signed char)102)) : (((/* implicit */int) arr_4 [i_2])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((short) (unsigned short)21147));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [21LL] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_0])) : (((/* implicit */int) arr_13 [i_2]))))) ? (((unsigned int) arr_11 [i_0] [(signed char)4] [i_0] [i_4])) : (((((/* implicit */_Bool) 300073571)) ? (2032213869U) : (2032213869U))))))));
                                var_23 = ((/* implicit */int) ((signed char) arr_4 [i_0]));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [18ULL] |= ((/* implicit */long long int) arr_7 [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_0 + 1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 4; i_5 < 21; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_0] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)4] [(signed char)4] [i_6] [i_6] [i_5] [i_0]))) : (arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((int) (signed char)-44))) : (((unsigned long long int) arr_15 [9LL] [i_5]))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    arr_24 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0 - 2]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((signed char) ((signed char) (unsigned short)20383)));
                        var_25 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_6] [i_7] [i_7] [7ULL]);
                        arr_27 [i_8] = ((int) ((signed char) (unsigned short)45153));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [(unsigned short)10]))) ? (((unsigned long long int) arr_0 [(signed char)21])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [i_0] [i_5] [i_6] [i_7] [i_8]))))));
                    }
                }
                arr_28 [i_5 - 3] = ((/* implicit */short) ((int) 285165133U));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_31 [i_9] [i_0] = ((/* implicit */signed char) ((unsigned short) 2262753426U));
                    var_27 = ((/* implicit */short) arr_18 [i_0] [i_0 + 1] [i_0]);
                    arr_32 [(unsigned char)1] [i_5] [i_6] [0U] = ((/* implicit */int) arr_19 [i_6] [(signed char)16] [i_0 + 1]);
                    var_28 = ((/* implicit */_Bool) arr_19 [(_Bool)1] [i_5] [i_6]);
                }
                for (unsigned char i_10 = 4; i_10 < 20; i_10 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_12 [i_10] [i_6] [i_5] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (arr_0 [i_0]))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [10U] [i_0 - 4] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) arr_3 [i_0]))) : (((/* implicit */int) ((unsigned char) arr_34 [i_0] [i_5 - 4] [(signed char)7])))));
                    var_31 = ((unsigned short) (unsigned short)45131);
                    var_32 = ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_0]));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 19; i_11 += 2) 
                {
                    for (int i_12 = 1; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((_Bool) ((unsigned short) 146947484)));
                            var_34 = ((/* implicit */unsigned short) ((signed char) (unsigned short)37802));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */_Bool) ((long long int) ((unsigned short) arr_35 [i_0] [i_5] [i_5 - 2] [i_5])));
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0 - 3] [i_0] [(_Bool)1])) ? (((((/* implicit */_Bool) 8400882271121358425ULL)) ? (2032213864U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45156))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5])))));
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) arr_36 [i_5] [i_0 - 1]))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [6])) ? (((/* implicit */int) ((unsigned short) arr_38 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_12 [0U] [19U] [i_13] [0U])))))));
            arr_44 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-31136))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [13] [i_13] [i_13])))) : (((unsigned long long int) (unsigned char)63))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */signed char) arr_41 [i_0] [(unsigned char)5] [i_0] [(unsigned short)17] [(short)11] [i_14] [i_13]);
                        var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_21 [i_0] [i_13] [i_14] [12] [i_15]))) ? (((/* implicit */unsigned long long int) ((int) arr_13 [i_0]))) : (((unsigned long long int) arr_46 [i_14] [i_15]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            arr_54 [i_0] [13] [i_0 - 2] = ((((/* implicit */_Bool) arr_6 [i_0] [i_16] [7LL])) ? (((/* implicit */int) arr_2 [i_16])) : (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_8 [i_0 - 2])) : (((/* implicit */int) (unsigned short)17)))));
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [9LL] [i_16] [i_16])) ? (arr_47 [i_16] [i_16] [7LL] [i_0]) : (arr_29 [i_0] [i_16] [(signed char)10])))) ? (((/* implicit */int) ((signed char) arr_25 [i_0 - 1] [i_0 - 1] [i_16]))) : (((/* implicit */int) arr_15 [13] [i_16]))));
            var_42 = ((/* implicit */signed char) ((int) ((signed char) arr_45 [12LL])));
            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) arr_22 [i_0] [i_16] [10U]))));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_18 = 1; i_18 < 21; i_18 += 2) 
                {
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((short) 1701361833U)))));
                    var_45 = ((/* implicit */unsigned long long int) arr_19 [i_18] [i_16] [i_0]);
                    var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((long long int) ((int) 4294967295U))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) arr_64 [i_0 - 1] [(unsigned short)3] [i_0] [i_0 + 1] [i_0] [i_0])));
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((unsigned short) arr_49 [i_16] [i_20] [8ULL] [i_16])))));
                        }
                    } 
                } 
            }
        }
    }
    for (int i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        var_49 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)49527)) ? (((((/* implicit */_Bool) 2772264324U)) ? (-2222655374938646895LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((int) -1076646083703557395LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-6910)), ((unsigned short)65533)))) ? (((/* implicit */int) max((arr_25 [i_21] [i_21] [i_21]), (((/* implicit */short) arr_52 [i_21] [(signed char)3]))))) : (((/* implicit */int) max((arr_25 [i_21] [i_21] [i_21]), (((/* implicit */short) arr_34 [2U] [2U] [i_21]))))))))));
        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) arr_38 [i_21] [i_21] [i_21] [i_21]))));
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 11; i_22 += 2) 
        {
            for (unsigned int i_23 = 1; i_23 < 10; i_23 += 1) 
            {
                for (int i_24 = 2; i_24 < 9; i_24 += 1) 
                {
                    {
                        var_51 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_16 [i_23] [i_22])) ? (((long long int) arr_51 [i_21])) : (((/* implicit */long long int) ((unsigned int) (short)-7))))), (((((/* implicit */_Bool) ((unsigned short) arr_12 [i_21] [i_22] [i_23] [i_24]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_35 [i_21] [(unsigned short)8] [i_21] [i_21]), (arr_60 [i_21] [i_22] [i_23] [i_24] [i_22] [10]))))) : (min((((/* implicit */long long int) arr_19 [i_24 - 2] [i_23] [i_22])), (arr_56 [6LL] [i_23 - 1] [i_22] [i_21])))))));
                        var_52 = max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_53 [i_21] [i_21])), (arr_30 [i_21] [i_22] [i_22] [i_24 - 1] [i_24 - 1])))), (max((arr_59 [i_21] [i_21] [i_22] [i_23] [i_23] [i_24 - 2]), (((/* implicit */unsigned long long int) arr_17 [7U])))))), (((/* implicit */unsigned long long int) min((((unsigned short) arr_37 [i_21] [i_21] [i_21] [i_21])), (((/* implicit */unsigned short) arr_22 [i_21] [i_21] [i_23 + 1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_25 = 2; i_25 < 10; i_25 += 1) 
                        {
                            arr_79 [i_21] [i_21] [i_22] [(unsigned short)4] [i_24] [(_Bool)1] [i_25] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_30 [i_21] [i_22] [i_23 - 1] [i_24] [i_25 - 2])) ? (((/* implicit */int) arr_7 [i_21] [i_23] [(short)17] [(short)17])) : (((/* implicit */int) (unsigned short)16009)))));
                            arr_80 [(unsigned char)6] [i_22] [i_24 - 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_21] [i_22] [i_23 - 1] [i_24])) ? (((/* implicit */unsigned long long int) arr_6 [i_21] [18] [i_21])) : (arr_72 [i_21] [i_22] [i_22] [i_25 - 2])))) ? (((long long int) arr_51 [i_22])) : (((long long int) (unsigned short)52707))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_26 = 0; i_26 < 11; i_26 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_27 = 0; i_27 < 11; i_27 += 1) /* same iter space */
            {
                arr_85 [i_26] [i_26] [(unsigned short)9] [i_26] &= ((/* implicit */_Bool) ((long long int) min((min((arr_1 [i_27]), (((/* implicit */long long int) arr_8 [i_21])))), (((/* implicit */long long int) ((signed char) arr_33 [i_27] [0] [i_27] [i_26] [2ULL]))))));
                arr_86 [i_21] [i_26] = ((/* implicit */long long int) max((((/* implicit */int) arr_19 [i_21] [i_21] [i_21])), (1853328604)));
                var_53 = ((/* implicit */int) min((((long long int) min((797809012), (((/* implicit */int) (short)-15587))))), (((/* implicit */long long int) ((short) 132743223)))));
                arr_87 [i_21] [(short)2] [i_26] [i_21] = ((/* implicit */int) ((unsigned int) max((((/* implicit */long long int) ((short) arr_71 [i_21] [i_26] [i_27]))), (((long long int) 9ULL)))));
                /* LoopSeq 2 */
                for (signed char i_28 = 1; i_28 < 8; i_28 += 3) /* same iter space */
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) -5829057229551434385LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)16))));
                    arr_91 [i_21] = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-32)), (-1133861930)));
                }
                for (signed char i_29 = 1; i_29 < 8; i_29 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_30 = 0; i_30 < 11; i_30 += 4) 
                    {
                        var_55 -= ((/* implicit */unsigned int) ((int) arr_35 [14LL] [i_26] [i_26] [i_21]));
                        var_56 = ((/* implicit */long long int) ((unsigned short) arr_41 [i_21] [i_21] [i_21] [i_21] [i_21] [(signed char)10] [i_30]));
                    }
                    for (int i_31 = 1; i_31 < 9; i_31 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) ((short) arr_60 [i_31] [i_27] [i_27] [i_26] [(short)4] [(signed char)1]));
                        arr_102 [i_21] [i_21] [i_26] [i_27] [i_27] [i_29 + 1] [i_29] = ((/* implicit */int) max((((short) ((signed char) arr_98 [i_21] [i_26] [i_29] [i_27] [3] [i_21]))), (((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) arr_64 [i_21] [i_21] [i_21] [(short)19] [13] [i_21])), (arr_88 [i_21] [i_26] [i_27] [i_27])))))));
                        var_58 = ((/* implicit */short) min((min((min((arr_26 [i_21] [i_26] [i_27] [i_26] [19]), (((/* implicit */unsigned int) arr_61 [11U] [i_26] [i_27] [i_29] [i_29] [i_29])))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_37 [i_31] [i_26] [i_26] [i_29])), (arr_82 [i_21] [5])))))), (((/* implicit */unsigned int) arr_0 [i_29]))));
                    }
                    for (signed char i_32 = 0; i_32 < 11; i_32 += 2) 
                    {
                        var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((_Bool) 8903271674685262421LL)))));
                        arr_105 [i_29] [(short)8] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_21] [i_21] [i_21] [i_29 + 2] [i_32])) ? (((((/* implicit */_Bool) -797809018)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27345))) : (min((3191721205U), (((/* implicit */unsigned int) (signed char)24)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_73 [i_32] [i_29] [i_29] [i_29] [(unsigned short)1] [i_21])) ? (arr_30 [i_21] [0ULL] [(unsigned short)13] [i_29] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_26] [i_26] [i_32]))))))))));
                    }
                    arr_106 [i_29] [i_29] = ((/* implicit */unsigned short) ((int) min((((/* implicit */long long int) ((unsigned int) arr_82 [i_29 + 2] [i_29 + 2]))), (((((/* implicit */_Bool) arr_50 [i_21] [0ULL] [19])) ? (arr_30 [(unsigned short)11] [i_29] [i_27] [i_26] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [16ULL] [i_26] [i_27] [i_26]))))))));
                }
            }
            for (int i_33 = 0; i_33 < 11; i_33 += 1) /* same iter space */
            {
                var_60 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) 2032213870U))) ? (((/* implicit */long long int) -1832121284)) : (29LL))), (((/* implicit */long long int) (unsigned short)37480))));
                var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) max((0LL), (((/* implicit */long long int) min(((unsigned short)24524), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)1))))))))))));
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 11; i_34 += 2) 
                {
                    for (signed char i_35 = 1; i_35 < 9; i_35 += 1) 
                    {
                        {
                            arr_115 [i_35] [i_26] [i_33] [(short)4] = ((/* implicit */int) max((((/* implicit */short) arr_61 [(_Bool)1] [i_34] [17] [i_26] [(signed char)14] [i_21])), (arr_75 [i_21] [i_26] [(short)1])));
                            var_62 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) ((unsigned short) arr_13 [i_33])))), (max((((/* implicit */int) min((arr_97 [(_Bool)1] [(signed char)4] [i_33] [i_33] [i_33]), (arr_52 [i_34] [i_34])))), (min((((/* implicit */int) (unsigned short)2216)), (-1884542241)))))));
                        }
                    } 
                } 
            }
            for (int i_36 = 0; i_36 < 11; i_36 += 1) /* same iter space */
            {
                arr_119 [i_36] [i_36] [i_36] = ((/* implicit */signed char) max((((unsigned char) ((signed char) arr_113 [i_21]))), (((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_34 [i_21] [i_21] [i_36]))))));
                /* LoopNest 2 */
                for (unsigned char i_37 = 2; i_37 < 10; i_37 += 4) 
                {
                    for (unsigned long long int i_38 = 3; i_38 < 10; i_38 += 4) 
                    {
                        {
                            var_63 = ((/* implicit */unsigned int) ((_Bool) arr_108 [(short)3]));
                            var_64 = ((/* implicit */signed char) arr_56 [i_21] [(short)20] [(unsigned short)15] [(short)20]);
                            var_65 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (min((((/* implicit */unsigned int) 17)), (3245735359U))))));
                            var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) ((((/* implicit */_Bool) 240022422U)) ? (-7834073384809338639LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12744))))))));
                            var_67 = ((/* implicit */_Bool) arr_72 [i_21] [i_38] [3] [9U]);
                        }
                    } 
                } 
            }
            for (int i_39 = 0; i_39 < 11; i_39 += 1) /* same iter space */
            {
                arr_127 [(_Bool)1] [i_39] [i_39] [(unsigned char)1] = ((/* implicit */long long int) arr_125 [(signed char)1] [i_26] [i_26] [i_21]);
                var_68 = ((signed char) ((int) min((((/* implicit */unsigned short) arr_112 [i_21] [i_21] [0])), (arr_118 [i_21] [(unsigned short)10] [5ULL]))));
            }
            arr_128 [i_21] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((4054944886U), (((/* implicit */unsigned int) (unsigned short)44688)))), (((/* implicit */unsigned int) (short)-1603))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14)) ? (min((((/* implicit */unsigned int) arr_2 [i_21])), (arr_94 [i_26] [i_26]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-25)), (1832121283))))))) : (6351253569121500045LL)));
        }
        for (long long int i_40 = 0; i_40 < 11; i_40 += 4) /* same iter space */
        {
            var_69 = ((/* implicit */signed char) min((min((((unsigned short) arr_4 [i_40])), (((/* implicit */unsigned short) ((short) arr_81 [i_21] [i_21]))))), (((/* implicit */unsigned short) ((short) ((short) arr_129 [i_21]))))));
            arr_131 [i_21] [i_40] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_21] [i_21] [i_40])), (min((5632769990516289677LL), (((/* implicit */long long int) 2147483647))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_13 [i_21])), (arr_78 [i_21] [(unsigned char)5] [i_40] [i_21] [i_40])))), (min((arr_122 [i_40] [i_40] [i_21] [i_21] [(unsigned short)8] [i_40]), (((/* implicit */unsigned long long int) arr_49 [i_21] [i_40] [i_40] [i_40]))))))));
            var_70 = ((int) arr_36 [i_21] [i_21]);
        }
        var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) (short)-18782)), (4403219032152478674ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_88 [i_21] [i_21] [i_21] [i_21]), (((unsigned short) arr_42 [3ULL] [i_21])))))) : (min((((((/* implicit */_Bool) arr_126 [i_21] [i_21] [(signed char)6] [(unsigned short)8])) ? (arr_49 [i_21] [4LL] [4LL] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_129 [i_21]))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_46 [20] [20])), (arr_61 [i_21] [i_21] [i_21] [i_21] [i_21] [12ULL]))))))));
    }
}
