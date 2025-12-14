/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201687
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
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)39345), (var_10)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_12)))), (max((var_7), (((/* implicit */unsigned long long int) var_14)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (signed char)97);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_11 [2] [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) 0ULL);
                                var_20 ^= var_9;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) (-(-385204635)));
        arr_12 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) (-(0U)));
        var_22 = ((/* implicit */unsigned long long int) max((((signed char) 1664972037)), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((-157109167) + (2147483647))) << (((var_8) - (970109890)))))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) (+(1664972037)));
        /* LoopSeq 4 */
        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_23 *= (~(((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [(unsigned short)2] [i_9]))) : (var_7))));
                        var_24 = ((var_15) | (((/* implicit */long long int) arr_27 [i_6] [i_7 - 1] [0LL])));
                    }
                } 
            } 
            arr_32 [i_6] [i_6] = ((/* implicit */int) ((long long int) -1664972034));
            var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (835604820U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) && (((/* implicit */_Bool) arr_27 [4] [i_7 + 1] [i_7]))));
        }
        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
        {
            arr_37 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? ((+(((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)947)) < (((/* implicit */int) (signed char)92)))))));
            var_26 += ((/* implicit */short) ((int) -1664972038));
            var_27 ^= ((/* implicit */int) ((signed char) arr_28 [i_6 + 1] [4LL] [i_10 - 1] [i_10]));
        }
        for (long long int i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
            {
                arr_42 [i_6 + 2] [i_6 + 1] [i_6] [i_12] &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_33 [i_12] [i_6] [i_12])) | (11073683246814460362ULL))));
                var_28 &= ((/* implicit */short) (~(arr_26 [i_11 + 1] [i_11 + 1] [(unsigned short)0] [i_6 + 1])));
            }
            for (int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
            {
                arr_47 [i_6] = ((/* implicit */unsigned long long int) 714923854U);
                var_29 -= ((int) ((((/* implicit */_Bool) (unsigned short)947)) || (((/* implicit */_Bool) var_16))));
                var_30 = (i_6 % 2 == zero) ? (((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_25 [i_6 + 1] [i_6] [i_13] [i_13])) - (56129))))))) : (((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((((/* implicit */int) arr_25 [i_6 + 1] [i_6] [i_13] [i_13])) - (56129))) + (49124)))))));
                arr_48 [i_6] [i_11] [i_11] [i_13] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_13])) ? (11073683246814460362ULL) : (((/* implicit */unsigned long long int) arr_35 [i_6 + 2] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) 0LL)) ? (arr_18 [i_6] [i_13]) : (1516564970U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
            }
            for (int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
            {
                var_31 -= ((/* implicit */short) (~(((int) arr_33 [i_11] [6] [i_14]))));
                arr_53 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_8 [i_6] [i_11] [i_14] [i_6 + 2]))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64588)))));
                arr_54 [i_6] [i_11] [i_11] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_11 - 1] [i_11] [i_6 + 2])) && (((/* implicit */_Bool) arr_49 [i_11 - 1] [i_6 + 1]))));
            }
            for (int i_15 = 4; i_15 < 10; i_15 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) ((int) arr_29 [i_6] [i_11 + 1] [i_11 + 1] [i_15] [i_15 - 2]));
                arr_57 [i_11] [i_6] = ((/* implicit */int) (unsigned short)939);
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                var_33 -= ((/* implicit */long long int) (~(((/* implicit */int) ((arr_40 [i_11 - 1] [i_11 - 1] [i_6] [0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))));
                var_34 ^= ((/* implicit */unsigned short) arr_35 [i_16] [i_11 + 1] [i_6]);
            }
            for (long long int i_17 = 1; i_17 < 10; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) arr_1 [i_6]);
                            var_36 += ((/* implicit */unsigned short) 2615502035U);
                            var_37 -= ((/* implicit */unsigned int) -9223372036854775791LL);
                        }
                    } 
                } 
                var_38 |= var_0;
            }
            for (unsigned long long int i_20 = 4; i_20 < 11; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 12536877568285244769ULL))));
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-9223372036854775791LL) + (9223372036854775807LL))) << (((var_9) - (15746438787485295557ULL)))))) ? (((/* implicit */unsigned int) ((int) arr_4 [i_6] [i_11] [i_6] [i_22]))) : (arr_34 [i_6] [i_11 + 1])));
                            var_41 = ((/* implicit */unsigned int) ((1331808503) << (((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                var_42 = ((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_20] [i_20 + 1] [i_11 - 1] [i_6 + 1]))) : (var_5));
                arr_77 [i_6] [i_11] [i_20] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 536854528)) ? (-8918410092215949062LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6] [i_6])))))));
                var_43 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775790LL))));
            }
        }
        for (long long int i_23 = 1; i_23 < 11; i_23 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned short) ((unsigned int) ((arr_43 [i_6] [i_6 + 1] [i_23]) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_23]))))));
            arr_82 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((int) -8929834209428530964LL));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        var_45 = arr_84 [8] [8];
        var_46 *= ((/* implicit */unsigned short) (-(arr_83 [4LL] [4LL])));
    }
    var_47 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) -3516821327518232394LL)), (17049853284149787600ULL))))), ((((!(((/* implicit */_Bool) var_1)))) ? (max((var_9), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))))));
    /* LoopSeq 4 */
    for (short i_25 = 0; i_25 < 23; i_25 += 3) 
    {
        arr_88 [i_25] [i_25] = ((/* implicit */unsigned int) (unsigned short)6491);
        var_48 += min((((((/* implicit */_Bool) ((int) var_0))) ? (arr_86 [i_25]) : (((/* implicit */int) ((((/* implicit */_Bool) 3459362478U)) || (((/* implicit */_Bool) 16404947478311709770ULL))))))), (((/* implicit */int) ((short) 1516564970U))));
    }
    for (unsigned short i_26 = 1; i_26 < 20; i_26 += 2) 
    {
        var_49 = ((/* implicit */unsigned long long int) ((int) ((signed char) (!(((/* implicit */_Bool) arr_89 [i_26] [i_26]))))));
        arr_93 [i_26] = ((/* implicit */unsigned short) ((int) -1LL));
        var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) ((var_4) < (((/* implicit */int) (unsigned short)0))))))));
        var_51 = ((/* implicit */int) arr_91 [i_26]);
    }
    for (unsigned short i_27 = 0; i_27 < 24; i_27 += 2) 
    {
        arr_97 [i_27] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)178)), (arr_94 [i_27] [i_27]))))));
        arr_98 [8ULL] [8ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27597))) ^ (var_9)))) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (max((((/* implicit */unsigned long long int) arr_96 [i_27] [i_27])), (var_2)))))) || (((/* implicit */_Bool) min((-497628984), (((/* implicit */int) (unsigned char)255)))))));
    }
    for (unsigned short i_28 = 1; i_28 < 8; i_28 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_29 = 4; i_29 < 10; i_29 += 3) 
        {
            arr_103 [(unsigned char)5] [i_28] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_52 [i_29 - 2] [i_28 - 1] [i_28 + 2]))));
            /* LoopNest 2 */
            for (unsigned short i_30 = 0; i_30 < 12; i_30 += 4) 
            {
                for (int i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    {
                        var_52 += ((/* implicit */signed char) (~(arr_81 [i_28 + 1])));
                        arr_108 [i_28] [9LL] [i_30] [i_31] = ((/* implicit */unsigned long long int) arr_67 [i_28 + 2] [1ULL] [i_29 + 1]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_32 = 0; i_32 < 12; i_32 += 2) 
            {
                for (int i_33 = 0; i_33 < 12; i_33 += 2) 
                {
                    for (long long int i_34 = 0; i_34 < 12; i_34 += 2) 
                    {
                        {
                            arr_118 [i_28] [i_28] = ((/* implicit */unsigned short) arr_22 [i_28 + 1]);
                            var_53 = ((/* implicit */unsigned char) arr_75 [(short)5] [(short)5] [i_28 + 3] [i_32] [(short)5] [i_34] [i_34]);
                            arr_119 [8] [8] [i_32] [i_32] [8] [8] [i_33] |= ((/* implicit */int) arr_1 [i_32]);
                            arr_120 [i_28 + 4] [i_28] [i_28] [i_32] [i_33] [i_33] [i_34] = arr_80 [i_28 + 2] [i_28 + 2];
                            arr_121 [i_34] [i_28] [i_33] [i_28] [i_28] [i_28] = ((/* implicit */unsigned short) ((int) ((988571417) ^ (((/* implicit */int) (unsigned short)61224)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_35 = 0; i_35 < 12; i_35 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_36 = 0; i_36 < 12; i_36 += 2) 
                {
                    var_54 = (~(-1373025157));
                    var_55 = ((/* implicit */int) 8785241455813086447LL);
                }
                arr_129 [i_28] [i_28] [i_35] = ((/* implicit */int) (unsigned short)59045);
                /* LoopNest 2 */
                for (unsigned long long int i_37 = 1; i_37 < 11; i_37 += 2) 
                {
                    for (unsigned int i_38 = 0; i_38 < 12; i_38 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_101 [i_28] [i_28])))) ? (((((/* implicit */_Bool) 2950826)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)947))))));
                            arr_134 [i_28] [11ULL] [i_29] [i_29 - 4] [i_28] [i_28] [i_28] = ((((/* implicit */_Bool) arr_123 [i_28])) ? (((/* implicit */int) (unsigned short)61224)) : (arr_89 [i_28 + 1] [i_37 + 1]));
                        }
                    } 
                } 
                var_57 ^= ((/* implicit */short) arr_95 [i_29 - 3] [i_28]);
                arr_135 [i_28] [i_29] [i_28] [i_35] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (var_2) : (((((/* implicit */unsigned long long int) 2058533199)) + (15706859313588122612ULL)))));
            }
        }
        for (unsigned char i_39 = 3; i_39 < 11; i_39 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_40 = 0; i_40 < 12; i_40 += 1) 
            {
                arr_140 [i_28] = ((unsigned short) (signed char)88);
                arr_141 [i_39] [i_28] [i_40] = ((/* implicit */int) ((((arr_56 [i_28 + 2] [i_39 - 1] [i_40] [i_39 + 1]) + (9223372036854775807LL))) << (((((/* implicit */int) ((short) arr_56 [i_28] [i_28 - 1] [i_40] [i_39 - 2]))) - (17370)))));
                var_58 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -4860961461915803441LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_107 [i_28] [i_28] [8] [i_28]))))))) ? ((~(((/* implicit */int) (unsigned short)55991)))) : (((/* implicit */int) max((arr_125 [i_28 + 1] [i_28] [i_28 + 3]), (((/* implicit */unsigned short) arr_79 [4] [i_28 + 2])))))));
                arr_142 [i_28] [i_28] [i_28] = ((/* implicit */int) (((~(4611686018427387903ULL))) << (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)59045)) ? (2097153U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_39] [i_28]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_40] [i_40] [i_40]))))))));
                arr_143 [i_28] [i_39] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((unsigned int) (short)14)) : (((/* implicit */unsigned int) arr_109 [4LL] [i_39] [i_28] [i_39]))));
            }
            for (unsigned short i_41 = 1; i_41 < 10; i_41 += 3) 
            {
                var_59 = ((/* implicit */unsigned short) var_12);
                var_60 ^= ((/* implicit */long long int) (unsigned short)1023);
                arr_146 [i_28] = ((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)));
                arr_147 [i_28 + 2] [i_39] [4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (arr_1 [0U]) : (((/* implicit */unsigned long long int) 320082557))));
            }
            for (unsigned short i_42 = 2; i_42 < 11; i_42 += 3) 
            {
                arr_150 [i_28] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4292870144U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693950ULL)) ? (((/* implicit */int) (unsigned short)6491)) : (0))))));
                arr_151 [i_28] [i_39 - 3] [(signed char)10] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1236324355U)))) ? ((-((+(2097151U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_39] [i_28])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_38 [i_28] [i_28]))))) ? (arr_136 [i_28] [i_28 + 3]) : (((int) 4539628424389459968LL)))))));
                arr_152 [i_42] [i_28] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_106 [i_28] [i_39 - 3] [i_42 + 1] [i_28 + 1]))))), (((unsigned long long int) arr_106 [i_28] [i_39 - 3] [i_42 - 1] [i_28 + 3])));
                arr_153 [0ULL] |= min((((/* implicit */int) ((unsigned short) ((unsigned long long int) 16140901064495857666ULL)))), (((int) ((((/* implicit */int) (short)-1)) | (-2147483633)))));
                var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) : (0)));
            }
            var_62 = ((/* implicit */unsigned short) 1331111293);
        }
        arr_154 [10LL] [i_28] &= ((/* implicit */int) ((unsigned long long int) arr_148 [i_28] [2ULL]));
        /* LoopNest 2 */
        for (int i_43 = 0; i_43 < 12; i_43 += 4) 
        {
            for (int i_44 = 0; i_44 < 12; i_44 += 3) 
            {
                {
                    var_63 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */unsigned long long int) 913671200U)) | (7495736084736276722ULL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(5288114411483099645LL))))))));
                    arr_161 [i_28] [(unsigned short)9] [i_28] = min((2097153U), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_149 [i_43])) || (((/* implicit */_Bool) arr_63 [i_28] [i_43] [i_28])))))));
                }
            } 
        } 
    }
    var_64 -= ((/* implicit */short) var_11);
}
