/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219896
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
    var_14 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_11)))))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((arr_1 [i_0 - 1]), ((+(var_10)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned long long int) (((+(((int) var_12)))) >> (((((((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (_Bool)0)))) << (((((((/* implicit */int) arr_2 [i_4] [i_1])) << (((((/* implicit */int) (unsigned short)16412)) - (16412))))) - (10072))))) - (1879048167)))));
                                arr_13 [i_2] [i_0] [i_2] [19U] [i_2] [i_4] = ((/* implicit */_Bool) (+(983804379)));
                                var_17 += ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-32764)), (1685324988U)))), (arr_6 [i_0 - 1] [i_1] [i_0 - 1])));
                                var_18 = var_11;
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_4 [i_1] [i_2 + 1] [i_0 - 2]))) >> (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2609642320U)) ? (((/* implicit */int) (short)-27547)) : (19)))) | (arr_7 [i_0 - 2] [i_1] [i_2 - 2] [i_0])));
                }
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (max((2147483648U), (((/* implicit */unsigned int) (short)-28232)))) : (((arr_3 [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (2609642320U)))));
                /* LoopNest 3 */
                for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */_Bool) arr_9 [i_0 - 1] [i_6] [(signed char)16] [i_7]);
                                var_22 += ((/* implicit */signed char) arr_10 [i_1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_8 = 2; i_8 < 20; i_8 += 2) 
    {
        var_23 = ((max((((/* implicit */unsigned long long int) var_7)), (min((arr_23 [i_8 - 1]), (((/* implicit */unsigned long long int) var_12)))))) == (max((((/* implicit */unsigned long long int) -1)), (16140901064495857664ULL))));
        arr_25 [i_8 + 1] = ((/* implicit */unsigned short) min((max((min((((/* implicit */long long int) (unsigned short)43905)), (var_7))), (((/* implicit */long long int) var_12)))), ((+(arr_6 [i_8 + 1] [i_8 + 1] [i_8])))));
        var_24 = var_9;
        var_25 = ((/* implicit */unsigned int) arr_5 [i_8] [i_8] [i_8 - 1]);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) -441609660975199530LL);
        var_27 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) ^ (((var_4) + (((/* implicit */int) (_Bool)0))))));
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551615ULL)));
    /* LoopSeq 2 */
    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min(((unsigned short)21625), (((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)29140))))))))))));
            /* LoopNest 3 */
            for (signed char i_12 = 3; i_12 < 19; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 22; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned short) min(((-(min((arr_1 [i_13 - 2]), (((/* implicit */long long int) arr_37 [i_13])))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (arr_31 [i_10]))))));
                            var_31 = ((((/* implicit */_Bool) 830733826)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5321385449857518943ULL)) ? (2147483661U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))) : (512ULL));
                        }
                    } 
                } 
            } 
        }
        for (short i_15 = 1; i_15 < 22; i_15 += 2) 
        {
            var_32 |= ((((/* implicit */_Bool) ((long long int) arr_39 [i_15 + 1] [i_15] [i_10] [i_15]))) ? ((+(((/* implicit */int) min((((/* implicit */short) (signed char)-10)), (var_8)))))) : (((/* implicit */int) min((((signed char) arr_12 [i_10] [i_10] [(_Bool)1] [18LL])), (arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10])))));
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((max((((/* implicit */int) ((signed char) (signed char)-10))), (-1773751233))), (((/* implicit */int) arr_41 [i_15] [16ULL] [i_15 + 1] [i_15] [i_10])))))));
            /* LoopSeq 3 */
            for (long long int i_16 = 2; i_16 < 19; i_16 += 1) 
            {
                var_34 *= max((((/* implicit */unsigned long long int) (+(1773751253)))), (min((arr_45 [i_15 - 1] [i_10]), (arr_45 [i_10] [i_15 + 1]))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_18] [i_15 - 1] [i_15 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_15 + 1] [i_15 - 1])) % ((+(((/* implicit */int) arr_34 [i_15 - 1] [i_15 - 1]))))));
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_15 + 1]))))) < (max((((/* implicit */unsigned int) ((unsigned short) arr_52 [i_10] [i_15]))), (((((/* implicit */_Bool) 2147483616U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))) : (2147483661U)))))));
                var_38 = ((/* implicit */signed char) max((((unsigned long long int) arr_45 [i_15 + 1] [i_15])), (max((arr_45 [i_15 + 1] [i_19]), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
            }
            for (int i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                arr_58 [i_10] [i_15] [i_20] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_15 + 1] [i_10]) >= (arr_36 [i_15 - 1] [i_15]))))) != (arr_36 [i_15 - 1] [i_10]));
                var_39 = ((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [i_10] [i_15])), (min(((unsigned short)21602), (((/* implicit */unsigned short) ((13125358623852032669ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21630))))))))));
                var_40 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [0ULL] [i_10] [i_15 + 1])) ? (arr_20 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_20] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10] [i_10] [i_15 - 1]))))) << (((/* implicit */int) min((((/* implicit */short) arr_41 [(unsigned short)15] [i_15] [i_15 + 1] [i_20] [i_10])), (arr_17 [i_10] [i_10] [i_15 + 1]))))));
            }
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                for (short i_22 = 2; i_22 < 21; i_22 += 3) 
                {
                    {
                        var_41 = max((((min((((/* implicit */unsigned long long int) (unsigned char)52)), (1306255547784666446ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_0)));
                        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)104))) ? (((((_Bool) -1892904290)) ? (max((((/* implicit */int) (unsigned short)43898)), (-1773751233))) : (1773751233))) : (((/* implicit */int) arr_59 [i_10] [i_22 - 2]))));
                    }
                } 
            } 
            var_43 = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_23 = 2; i_23 < 22; i_23 += 3) 
        {
            var_44 &= ((/* implicit */unsigned long long int) (short)5814);
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 22; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) arr_30 [i_24]);
                        arr_72 [i_25] [i_24 + 1] [9U] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)511);
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_26 = 0; i_26 < 23; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_27 = 0; i_27 < 23; i_27 += 4) 
                {
                    for (int i_28 = 0; i_28 < 23; i_28 += 4) 
                    {
                        {
                            var_46 = ((((/* implicit */int) var_8)) << (((arr_21 [i_23 + 1] [i_23 + 1]) - (15339877301806083095ULL))));
                            var_47 = ((/* implicit */unsigned long long int) max((var_47), (arr_53 [i_23 + 1] [i_23 + 1] [i_27] [i_27] [i_27])));
                            var_48 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                arr_80 [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65025)) : (((/* implicit */int) arr_56 [i_10] [i_23 - 1]))));
                arr_81 [i_10] [(short)0] [i_26] [(_Bool)1] = ((/* implicit */int) arr_71 [i_10] [i_23 - 2] [i_23 - 2]);
                var_49 += ((/* implicit */unsigned int) arr_76 [i_23 - 1] [i_23 - 2]);
                /* LoopSeq 3 */
                for (unsigned int i_29 = 0; i_29 < 23; i_29 += 4) 
                {
                    var_50 = ((/* implicit */long long int) arr_57 [i_10] [(_Bool)1] [i_10] [8U]);
                    arr_86 [i_26] [i_23 - 2] [i_23 - 2] [(signed char)11] = ((arr_7 [i_10] [i_10] [i_10] [i_10]) << (((arr_21 [i_10] [(unsigned short)22]) - (15339877301806083052ULL))));
                    arr_87 [i_10] [i_23 + 1] [i_26] [i_29] = ((/* implicit */int) 5321385449857518947ULL);
                    var_51 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_64 [i_10])) : (((/* implicit */int) arr_47 [i_10] [i_23 - 1])))) >= (((/* implicit */int) ((1773751230) > (((/* implicit */int) arr_4 [i_10] [i_10] [i_29])))))));
                    arr_88 [i_26] [(unsigned short)7] [i_26] [(unsigned short)7] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_29] [i_29] [i_23 - 1])) ? (arr_50 [i_29] [i_29] [i_23 + 1]) : (((/* implicit */long long int) var_9))));
                }
                for (unsigned int i_30 = 0; i_30 < 23; i_30 += 2) 
                {
                    arr_91 [i_26] [i_10] [i_26] [i_26] [i_10] = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                    arr_92 [i_26] [5] [5] [i_26] = ((/* implicit */signed char) var_8);
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_52 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_68 [i_23] [i_23 + 1] [i_23] [i_31])) : (((/* implicit */int) arr_68 [i_10] [i_23 - 2] [i_26] [i_31]))));
                    arr_95 [i_10] [(signed char)11] [i_26] = ((((/* implicit */int) (short)4096)) - (((arr_84 [i_10] [3ULL] [i_10] [i_10] [3ULL] [16ULL]) ^ (arr_14 [i_10]))));
                    arr_96 [i_10] [i_23 - 1] [i_10] [i_10] [i_26] [i_31] = ((signed char) arr_21 [i_10] [i_23 + 1]);
                    var_53 = 1773751230;
                }
            }
            for (unsigned long long int i_32 = 0; i_32 < 23; i_32 += 4) 
            {
                var_54 = ((/* implicit */long long int) var_8);
                var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_38 [i_10])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65024))))) : (((-3099617603067402186LL) / (((/* implicit */long long int) ((/* implicit */int) arr_93 [i_32] [i_23 + 1] [i_32] [i_32]))))))))));
                var_56 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1024818036))));
                /* LoopNest 2 */
                for (signed char i_33 = 2; i_33 < 21; i_33 += 4) 
                {
                    for (short i_34 = 1; i_34 < 21; i_34 += 1) 
                    {
                        {
                            arr_105 [i_32] [8ULL] [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21619)) ^ (((/* implicit */int) var_11))))), (((arr_53 [i_10] [i_10] [13] [i_10] [13]) | (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_53 [i_10] [(short)6] [i_32] [i_10] [i_34]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) <= (((/* implicit */int) ((signed char) var_7))))))) : (((((/* implicit */_Bool) var_6)) ? (arr_71 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((12186242746023004149ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65023)))))))))));
                            var_57 = ((/* implicit */unsigned short) min((max((max((arr_53 [i_10] [i_23] [i_10] [i_33] [i_34]), (var_2))), (((/* implicit */unsigned long long int) ((522240) / (arr_30 [3ULL])))))), (((/* implicit */unsigned long long int) ((signed char) var_8)))));
                        }
                    } 
                } 
                var_58 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) ^ (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_32] [i_23 - 1] [i_32] [i_32]))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_35 = 0; i_35 < 23; i_35 += 4) 
        {
            for (unsigned short i_36 = 4; i_36 < 21; i_36 += 4) 
            {
                {
                    var_59 = ((/* implicit */signed char) (_Bool)1);
                    var_60 = ((/* implicit */_Bool) min((min((arr_11 [i_36 - 4] [i_36] [i_36] [(_Bool)1] [i_36] [i_36 + 1] [i_36 - 3]), (((/* implicit */unsigned long long int) arr_50 [i_36 - 1] [17ULL] [i_36])))), (((((((/* implicit */_Bool) var_9)) && (arr_43 [i_10] [i_10] [i_10] [i_10]))) ? (arr_7 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4283778573U)) || (((/* implicit */_Bool) var_1))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
                    {
                        for (int i_38 = 2; i_38 < 20; i_38 += 1) 
                        {
                            {
                                var_61 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (arr_109 [i_37 - 1]) : (((/* implicit */unsigned int) ((var_3) ? (arr_79 [i_10] [i_37 - 1] [9ULL] [i_35] [i_10]) : (((/* implicit */int) var_5))))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_11)))))));
                                var_62 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_63 ^= ((/* implicit */int) arr_68 [i_10] [i_10] [i_10] [i_10]);
        arr_118 [i_10] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-76))))));
        /* LoopNest 2 */
        for (unsigned long long int i_39 = 0; i_39 < 23; i_39 += 2) 
        {
            for (long long int i_40 = 3; i_40 < 22; i_40 += 3) 
            {
                {
                    var_64 *= ((/* implicit */unsigned char) arr_83 [i_10] [i_39] [i_10] [i_10]);
                    arr_124 [i_39] [i_40] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    }
    for (signed char i_41 = 0; i_41 < 14; i_41 += 2) 
    {
        arr_129 [i_41] = ((/* implicit */signed char) ((arr_28 [i_41]) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_11)), (var_13)))), (17140488525924885170ULL))) : (((/* implicit */unsigned long long int) ((arr_51 [(unsigned short)12] [i_41]) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [(_Bool)1] [i_41])))))) : (((/* implicit */int) var_6)))))));
        arr_130 [i_41] = ((/* implicit */unsigned short) ((unsigned long long int) min((var_7), (((/* implicit */long long int) arr_121 [i_41] [i_41])))));
        /* LoopSeq 2 */
        for (int i_42 = 1; i_42 < 13; i_42 += 2) 
        {
            var_65 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))));
            var_66 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_111 [i_41] [i_42 + 1] [i_42] [1LL])) : (((/* implicit */int) arr_83 [i_41] [i_41] [i_41] [i_42 - 1])))))));
        }
        for (unsigned char i_43 = 4; i_43 < 13; i_43 += 1) 
        {
            var_67 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_13)) - (43165)))))) ? (((/* implicit */long long int) 2147483661U)) : (var_10));
            var_68 = max((arr_97 [i_43 + 1] [i_43 - 4]), (arr_97 [i_43 - 2] [i_43 + 1]));
        }
        var_69 = ((/* implicit */signed char) (+(min((-1219817780), (((/* implicit */int) (_Bool)0))))));
    }
}
