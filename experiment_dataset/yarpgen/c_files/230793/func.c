/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230793
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
    var_20 = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (4294967295U))))))))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8446)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_8)))), (((unsigned long long int) arr_1 [i_0])))), (((unsigned long long int) arr_1 [11U]))));
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) arr_8 [i_3] [i_3] [(unsigned char)13] [i_0] [i_3])) << (((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) - (172)))));
                        arr_10 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((arr_4 [i_0] [i_0] [i_0] [i_0]) / (arr_4 [i_0] [i_0] [i_0] [8]))), (((/* implicit */long long int) ((2U) > (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_19)) ? (16781184912006576018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))))) != (((/* implicit */unsigned long long int) (~(((unsigned int) var_19)))))));
                        var_25 = ((/* implicit */unsigned short) ((((((arr_3 [i_0] [i_0] [i_0]) != (var_11))) ? (min((((/* implicit */unsigned int) (short)-24922)), (4294967286U))) : (min((4294967295U), (((/* implicit */unsigned int) (signed char)51)))))) >> ((((~((~(((/* implicit */int) (signed char)-64)))))) + (71)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (134217727U))));
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) var_18);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((signed char) max((((/* implicit */unsigned int) (short)16384)), (3343545078U)))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] = ((/* implicit */unsigned long long int) var_4);
            arr_22 [i_0] [i_0] = ((((/* implicit */unsigned int) 910641788)) == (4294967294U));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) (unsigned char)187);
                var_27 -= ((/* implicit */unsigned char) ((int) arr_23 [i_0] [i_0]));
                var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8 + 3] [(unsigned char)16] [i_8 + 4]))) ^ (var_14)));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_7 + 2] [i_7 + 1])) ? (3268151883329781896ULL) : (((/* implicit */unsigned long long int) var_15)))))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_7 + 2] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 1662080374)) : (var_15)))) : (((((/* implicit */_Bool) var_5)) ? (11664608843225800188ULL) : (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9]))))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                arr_37 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                arr_38 [i_0] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_10 - 1] [i_10]))));
            }
            for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                arr_41 [i_0] [i_7] [i_0] [i_7] = ((((/* implicit */int) arr_12 [i_7] [i_7 + 1] [i_7 + 2])) != (((/* implicit */int) arr_12 [i_7] [i_7 + 2] [i_7 + 2])));
                var_30 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 1662080363)) ? (3512901732U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (~(4294967266U)))) : (((unsigned long long int) 18446744073709551608ULL))));
                        arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) (short)7168))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (unsigned char)126))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                for (short i_16 = 3; i_16 < 20; i_16 += 1) 
                {
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))))))))) > (((/* implicit */int) arr_50 [i_0] [i_15] [i_15])))))));
                    }
                } 
            } 
            var_34 *= ((/* implicit */unsigned char) ((_Bool) 614671418));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 4; i_17 < 20; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    {
                        arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((arr_56 [i_17 + 1] [i_17 - 4] [i_17 - 1] [i_17 - 2]) / (arr_56 [i_17 - 4] [i_17 + 1] [i_17 - 3] [i_17 - 4]))), (((unsigned long long int) arr_56 [i_17 - 2] [i_17 - 4] [i_17 - 4] [i_17 - 1]))));
                        arr_63 [i_0] [i_14] [i_14] [i_14] [i_14] [i_14] = 18446744073709551614ULL;
                        arr_64 [i_0] [i_0] [i_0] [0ULL] [i_0] [i_0] = ((/* implicit */short) arr_32 [i_0] [i_0] [i_0]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) <= ((+(((/* implicit */int) arr_6 [i_17] [i_17 - 1] [i_17 - 2] [i_17 - 3]))))));
                    }
                } 
            } 
        }
        var_36 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41288)) ^ (((/* implicit */int) (short)-7168))))) ? (min((7561939286378031218LL), (((/* implicit */long long int) -1662080389)))) : (((/* implicit */long long int) ((/* implicit */int) ((1590587438U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 3) 
        {
            for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                {
                    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) var_15))));
                    var_38 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16744448ULL)) ? (16663519918147510473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3135))))))))), (861955071));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) <= (arr_13 [i_19] [i_19] [i_19] [i_19] [i_19])));
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                for (int i_24 = 0; i_24 < 21; i_24 += 4) 
                {
                    {
                        var_40 = ((((/* implicit */int) (unsigned short)29125)) + (((/* implicit */int) (unsigned char)240)));
                        var_41 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-32277)) && (((/* implicit */_Bool) 809680276990431698ULL)))))));
                        var_43 = ((/* implicit */unsigned int) (unsigned char)255);
                    }
                } 
            } 
            arr_82 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_57 [i_22] [i_22] [i_22] [i_22]) : (((/* implicit */long long int) (+(var_15))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 21; i_25 += 1) 
            {
                for (short i_26 = 0; i_26 < 21; i_26 += 3) 
                {
                    {
                        arr_87 [i_22] [i_19] [i_22] [i_22] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_67 [i_19] [i_22] [i_22])) : (((/* implicit */int) (!((_Bool)1)))));
                        arr_88 [i_19] = ((/* implicit */int) var_0);
                        var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_68 [i_19]))));
                        var_45 ^= ((/* implicit */unsigned char) arr_78 [i_19] [i_19] [i_19] [i_19] [(_Bool)1]);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_28 = 0; i_28 < 21; i_28 += 3) 
            {
                var_46 ^= ((/* implicit */_Bool) (short)-7);
                var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((int) arr_3 [i_27 - 1] [i_27 - 1] [i_27 - 1])))));
            }
            for (unsigned int i_29 = 0; i_29 < 21; i_29 += 3) 
            {
                var_48 = ((/* implicit */signed char) ((unsigned long long int) arr_39 [i_27 - 1] [i_27 - 1] [i_27 - 1]));
                var_49 = ((/* implicit */unsigned int) ((unsigned short) 1125625028935680ULL));
                /* LoopSeq 2 */
                for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 3) 
                {
                    arr_100 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [18ULL] [i_27] [i_27 - 1] [i_19] [i_27 - 1])) ? (((/* implicit */int) arr_6 [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_27 - 1])) : (((/* implicit */int) arr_6 [i_27 - 1] [i_27] [i_27 - 1] [i_27 - 1]))));
                    var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_19])) ? (1125625028935682ULL) : (arr_65 [i_19])));
                    arr_101 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((short) arr_23 [i_27 - 1] [i_27 - 1]));
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 21; i_31 += 2) 
                    {
                        var_51 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_96 [i_27 - 1] [i_27 - 1])) ? (((/* implicit */int) arr_96 [i_27 - 1] [i_27 - 1])) : (((/* implicit */int) arr_96 [i_27 - 1] [i_27 - 1]))));
                        var_52 *= ((/* implicit */signed char) (-(var_10)));
                        var_53 = ((/* implicit */unsigned char) var_9);
                    }
                }
                for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_33 = 0; i_33 < 21; i_33 += 1) 
                    {
                        arr_109 [i_27 - 1] [i_19] = var_6;
                        arr_110 [i_19] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)122)))) * (((/* implicit */int) ((var_10) <= (((/* implicit */int) var_2)))))));
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((4294967290U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))))));
                    }
                    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((unsigned int) arr_32 [i_32 - 1] [i_32] [i_32 - 1])))));
                }
                arr_111 [(short)10] [i_27] [(unsigned char)6] [i_27] |= ((/* implicit */long long int) arr_45 [i_19] [i_19] [i_19] [i_19]);
                arr_112 [i_19] [i_27 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_108 [3U] [i_27] [i_27] [i_27] [i_27] [i_27])))));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_35 = 0; i_35 < 21; i_35 += 4) /* same iter space */
                {
                    var_56 = ((/* implicit */_Bool) min((var_56), (((((/* implicit */_Bool) arr_36 [i_27 - 1])) && (((/* implicit */_Bool) var_14))))));
                    var_57 = ((/* implicit */unsigned long long int) arr_11 [i_27 - 1] [i_27 - 1] [i_27] [i_27 - 1]);
                    var_58 ^= ((/* implicit */_Bool) var_17);
                }
                for (unsigned long long int i_36 = 0; i_36 < 21; i_36 += 4) /* same iter space */
                {
                    arr_120 [i_19] [i_19] [i_19] [i_19] [i_19] = ((((((/* implicit */int) arr_14 [i_19] [i_27 - 1] [i_27])) <= (var_10))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_19] [i_19])) ^ (((/* implicit */int) var_2))))));
                    arr_121 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_83 [i_27 - 1] [i_27 - 1] [i_27 - 1]))));
                    var_59 *= ((/* implicit */unsigned short) var_14);
                }
                for (long long int i_37 = 0; i_37 < 21; i_37 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), ((~(((unsigned long long int) var_11))))));
                        var_61 = ((/* implicit */unsigned int) var_5);
                        arr_126 [i_19] [i_19] [i_19] [i_19] [i_37] |= ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (var_16));
                    }
                    var_62 = ((/* implicit */_Bool) max((var_62), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) var_1)) : (0ULL))))))));
                    var_63 *= ((/* implicit */unsigned long long int) ((_Bool) -1832527246));
                    arr_127 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_27 - 1] [i_27 - 1] [i_27 - 1]))));
                }
                var_64 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
                var_65 ^= ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) ((0U) <= (var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57190)) && (((/* implicit */_Bool) arr_70 [(short)0]))))));
                var_66 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
            var_67 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_114 [i_27 - 1] [i_27 - 1] [i_27 - 1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_18))));
        }
        for (unsigned char i_39 = 0; i_39 < 21; i_39 += 3) 
        {
            arr_132 [i_19] [i_19] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) / ((+(arr_81 [i_19] [i_19] [i_19]))))));
            var_68 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
            var_69 = 18446744073709551608ULL;
            arr_133 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_85 [i_19] [i_19] [i_19] [i_19] [(short)9] [i_19])))) >> (((var_9) - (1453062266U)))));
        }
    }
}
