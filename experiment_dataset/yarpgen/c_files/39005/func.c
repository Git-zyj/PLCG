/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39005
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
    var_13 = ((/* implicit */unsigned char) ((((0U) << (0LL))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) & (var_5)))));
    var_14 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (unsigned char)241);
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) 4294967295U)) : (arr_7 [0LL] [10] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((8796093022144ULL) > (18446735277616529477ULL))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_11))));
                            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) 18446735277616529477ULL)) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (((((/* implicit */_Bool) 4294967295U)) ? (0LL) : (((/* implicit */long long int) 511U))))))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
                        {
                            var_18 &= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_5 - 1] = ((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)32751)))));
                            arr_18 [i_5] [i_2] [i_2 + 1] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)241)) >> (((((/* implicit */int) var_1)) - (36))))))) ? ((~((+(((/* implicit */int) arr_1 [(_Bool)1] [i_5])))))) : (((/* implicit */int) ((arr_15 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1])))))));
                            arr_19 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_3] [i_5 - 1]);
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_2] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)15))))));
                            arr_23 [i_2] = (~(((((/* implicit */int) arr_16 [i_6] [(signed char)0] [i_6] [i_6] [i_2] [i_6] [i_6])) ^ (((((/* implicit */_Bool) 2130706432U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_6))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_19 -= ((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_3]) ^ (18446735277616529477ULL)));
                            arr_26 [i_0] [3U] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (arr_24 [(signed char)4] [i_3] [i_3] [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7 - 1] [i_3] [i_2] [(unsigned char)5] [i_0]))))))));
                        }
                        arr_27 [i_2] [i_2 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [10U] [i_2 + 1] [i_2] [i_1] [i_1])) && ((!(((/* implicit */_Bool) (short)2048))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        arr_31 [i_2] [i_2] [6LL] [i_2] [i_8 + 2] = ((/* implicit */_Bool) 7ULL);
                        arr_32 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) var_3);
                        arr_33 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_30 [i_8 + 1] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8 - 1] [i_2] [i_8 + 1] [i_2] [i_2] [i_2 - 1]))) : (arr_30 [i_8 + 1] [i_2] [i_2] [i_2 - 1])))));
                        arr_34 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((signed char) ((var_6) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [(unsigned char)6] [i_8] [i_0]))))))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 9; i_9 += 1) 
                    {
                        arr_39 [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_2] [(unsigned char)6] [i_2] [i_1] [9]);
                        arr_40 [i_1] [i_1] [8U] [i_2 + 1] [12] [i_9 - 4] &= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32763))))) == (((int) (_Bool)0)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_45 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))))));
                        arr_46 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_10])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2147483642)) || (((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) (_Bool)0)) & (267386880)))))), ((~(arr_44 [i_2 - 1] [i_2 + 1] [i_2] [i_2])))));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_51 [i_11] = ((((/* implicit */_Bool) ((signed char) arr_37 [i_0] [i_0] [i_1] [i_11] [i_11]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_0] [i_11] [i_11] [i_0] [i_1])) ? (arr_37 [i_11] [i_1] [i_0] [i_0] [i_0]) : (arr_37 [i_11] [i_1] [(short)5] [i_0] [i_0])))) : (((((/* implicit */_Bool) 65535U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294966785U))));
                    arr_52 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_59 [0ULL] [0ULL] [i_11] [i_11] [i_11] |= ((/* implicit */unsigned int) arr_0 [i_13]);
                                arr_60 [i_13] [i_12] [(short)7] [i_1] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    arr_64 [(unsigned short)1] [(unsigned short)9] = ((/* implicit */short) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (short i_16 = 2; i_16 < 11; i_16 += 2) 
                        {
                            {
                                arr_71 [i_0] [i_1] [10ULL] [(signed char)2] |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)128))));
                                var_20 += ((/* implicit */unsigned char) var_5);
                                var_21 = ((/* implicit */unsigned short) arr_61 [i_16 - 2] [i_0] [i_0]);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (0U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)4))))) : (((4294966785U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? ((-(arr_5 [i_0]))) : (min((((/* implicit */unsigned long long int) var_0)), (((288230238712758272ULL) - (((/* implicit */unsigned long long int) 65535U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 2) 
                    {
                        for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) arr_75 [i_0] [i_17 + 1] [i_14] [(short)12]);
                                var_25 = ((/* implicit */unsigned char) ((((18446735277616529472ULL) + (18446744073709551612ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [3] [i_1] [i_1] [i_1] [(_Bool)0])))))));
                                arr_79 [i_18] [i_17] [i_14] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_17] [i_17 + 1] [i_17] [i_17 - 1] [i_17] [i_17] [(unsigned char)4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_77 [i_17] [i_17] [i_17] [i_17 + 1] [i_17] [i_17 + 1])))));
                                var_26 = ((/* implicit */long long int) ((0ULL) == (((/* implicit */unsigned long long int) 536346624))));
                                var_27 = ((/* implicit */unsigned int) (unsigned char)251);
                            }
                        } 
                    } 
                }
                for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_21 = 0; i_21 < 13; i_21 += 3) 
                        {
                            var_28 ^= ((/* implicit */short) (unsigned char)0);
                            var_29 = ((/* implicit */unsigned short) (!(arr_41 [i_0] [i_0] [i_19] [i_20] [i_0])));
                        }
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_47 [i_0]))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_70 [i_0] [8LL] [i_0] [i_0] [1] [i_0] [(short)12]))));
                        var_32 &= ((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)15)), (((short) arr_61 [i_0] [i_0] [i_19]))));
                        var_33 = ((/* implicit */unsigned long long int) var_3);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        for (int i_23 = 1; i_23 < 11; i_23 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) ((arr_7 [3] [i_1] [3]) & (((/* implicit */long long int) var_6))));
                                arr_92 [i_0] [i_1] [7LL] [i_0] [7LL] [i_19] [i_23] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) /* same iter space */
                {
                    arr_95 [i_0] [i_1] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_58 [i_0] [i_0] [i_24] [i_24] [i_24] [i_0] [i_1]))));
                    arr_96 [i_24] = ((/* implicit */int) ((short) ((int) var_7)));
                }
                /* vectorizable */
                for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 1) 
                {
                    arr_99 [3ULL] [i_1] [i_25] [i_0] = ((unsigned int) (-9223372036854775807LL - 1LL));
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        for (short i_27 = 0; i_27 < 13; i_27 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */int) min((var_35), ((-(((/* implicit */int) (unsigned char)0))))));
                                arr_106 [i_0] [i_0] [i_0] [i_26] [i_27] = ((/* implicit */int) (((~(67076096U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_27] [i_1] [i_0] [i_26])))));
                                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) arr_56 [i_0] [i_0])))))));
                                arr_107 [i_0] [i_1] [i_1] [(signed char)0] [i_27] [i_27] = ((/* implicit */unsigned short) (short)127);
                                var_37 -= ((/* implicit */long long int) arr_56 [i_1] [i_27]);
                            }
                        } 
                    } 
                    arr_108 [i_0] [i_1] [i_1] [i_25] = ((/* implicit */int) arr_47 [i_0]);
                    var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_1])) * (((/* implicit */int) arr_63 [i_0]))));
                }
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_1])) ? (arr_70 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_1]) : (arr_44 [i_0] [11ULL] [i_0] [11ULL])))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned char)127))))))));
                var_40 = ((/* implicit */unsigned char) ((long long int) (-(18446744073709551612ULL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            var_41 = ((/* implicit */long long int) max((var_41), ((~(var_12)))));
            arr_113 [(unsigned char)0] [i_28] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 16777215)))) | (((18446735277616529472ULL) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775763LL))) + (106LL)))))));
        }
        /* vectorizable */
        for (unsigned int i_30 = 0; i_30 < 12; i_30 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_31 = 4; i_31 < 8; i_31 += 1) 
            {
                var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_31 - 4] [6U] [i_31 - 2] [i_31 + 3])) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_12))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)4)))))));
                arr_120 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (536346624)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_28] [i_30] [(unsigned short)8] [2U]))) ^ (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_37 [i_31] [i_31 - 2] [1U] [(unsigned char)7] [i_28]))))));
                arr_121 [(unsigned char)10] [(unsigned short)2] [i_31 + 4] [(unsigned char)10] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)3))));
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 3) 
                {
                    for (int i_33 = 0; i_33 < 12; i_33 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned long long int) var_7);
                            var_44 -= ((/* implicit */long long int) (-(var_10)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_34 = 0; i_34 < 12; i_34 += 1) 
                {
                    arr_130 [i_28] [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_77 [i_31 + 1] [i_31 + 1] [i_31] [i_31 - 3] [i_31 - 3] [i_31 - 3]))));
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_31] [i_31] [i_31 + 3] [i_31 + 1])))))));
                    arr_131 [i_28] [i_30] [i_28] [i_34] = ((/* implicit */unsigned int) var_0);
                    arr_132 [i_28] [i_28] [i_31] [i_34] = ((/* implicit */_Bool) arr_38 [i_34] [i_31 - 4] [i_30] [i_28]);
                }
            }
            for (unsigned int i_35 = 2; i_35 < 9; i_35 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_36 = 0; i_36 < 12; i_36 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1))))));
                    arr_138 [i_36] [i_35] [i_28] [i_28] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) var_11))));
                }
                for (unsigned int i_37 = 0; i_37 < 12; i_37 += 4) /* same iter space */
                {
                    arr_142 [i_28] = ((/* implicit */short) var_6);
                    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_44 [i_35 + 1] [i_30] [(_Bool)1] [(unsigned char)9]) : (arr_44 [i_35 - 2] [(short)10] [i_35 + 1] [i_37]))))));
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_28] [(short)11] [i_28] [(short)11] [i_28])) ? (((((/* implicit */_Bool) arr_66 [i_28] [1LL] [i_30] [i_37])) ? (511U) : (((/* implicit */unsigned int) arr_81 [i_30] [i_30] [i_35 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                }
                arr_143 [i_28] [i_28] [i_35] = ((/* implicit */unsigned char) arr_35 [i_28] [i_28] [i_28] [i_28]);
                arr_144 [i_35] [i_35] [i_28] [i_35] = ((/* implicit */short) arr_123 [i_28] [(short)9] [i_35] [i_35 + 2] [i_35] [i_35]);
            }
            var_49 = ((/* implicit */short) arr_44 [8ULL] [i_30] [i_30] [i_30]);
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_30])) ? (511) : (((/* implicit */int) arr_80 [i_28]))))) : (arr_139 [i_28])));
        }
        arr_145 [i_28] = ((/* implicit */long long int) ((var_8) << (((50331648) - (50331618)))));
        arr_146 [10LL] [10LL] |= ((/* implicit */int) arr_66 [i_28] [i_28] [i_28] [i_28]);
    }
}
