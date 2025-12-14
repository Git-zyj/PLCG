/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228512
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (0ULL)))) && (((/* implicit */_Bool) 18446744073709551601ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (unsigned char)193))))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
                            var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3] [i_0] [(_Bool)1] [i_0] [i_0]))))))), (((_Bool) max((var_3), (((/* implicit */long long int) var_0)))))));
                            arr_15 [i_0] [i_0] [16LL] [i_3] [1ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) arr_9 [(short)7] [(short)7] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)232)), (arr_9 [i_0] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [18ULL] [i_0])))))));
                            arr_16 [i_0] [(_Bool)1] [i_1] [(signed char)19] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)192))))))))));
                            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)65511), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned long long int) ((long long int) var_7))) : (((2251799813685248ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                            arr_22 [(signed char)6] [i_1] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)10);
                            arr_23 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_12 [(unsigned short)12] [i_0] [i_0] [i_1] [i_4] [i_5 - 1]), (((/* implicit */unsigned long long int) var_2)))) + (562949819203584ULL)))) || (((/* implicit */_Bool) (-2147483647 - 1)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (signed char i_8 = 4; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_6] [i_6] = (_Bool)1;
                                arr_33 [i_0] [i_1] [16U] [i_0] [i_8 - 2] [i_0] = ((/* implicit */unsigned char) var_1);
                                var_13 = ((/* implicit */_Bool) var_5);
                                arr_34 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) : (arr_12 [i_6] [i_1] [i_0] [i_7] [(_Bool)1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_14 |= ((/* implicit */int) 0ULL);
                            arr_42 [i_9 - 1] [i_0] [i_9 + 3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) ^ (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (0LL))))) : (((((((/* implicit */int) var_0)) < (((/* implicit */int) arr_19 [i_0] [(short)17] [i_9] [i_10] [i_10] [i_0])))) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)65535)) - (65513)))))))));
                            arr_43 [i_0] [i_0] = ((/* implicit */int) var_4);
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_11 [16ULL] [i_0] [i_9 + 3] [i_10]))))) ? (((/* implicit */int) min((var_0), (arr_4 [i_0])))) : (((/* implicit */int) (_Bool)0))))) ^ (max((((/* implicit */unsigned long long int) arr_25 [i_9 + 3] [i_9 - 1] [i_9] [i_9])), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (0ULL)))))));
                            arr_44 [i_0] [i_1] [i_9 + 3] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (545357767376896ULL));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (long long int i_14 = 2; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_55 [(_Bool)1] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2147483647))));
                            arr_56 [i_12] [i_13] [i_12] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)255))))), (2251799813685248ULL)));
                            arr_57 [i_11] [i_11] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(7ULL)))) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_11] [i_12] [i_12] [i_13] [i_12] [i_14]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [(unsigned short)3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24576)) / ((+(((/* implicit */int) (unsigned short)1))))))) : ((~(17179869183LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        {
                            arr_62 [i_11] [i_12] [12ULL] [i_12] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15 - 1] [i_15 + 1] [i_15 + 1] [12ULL]))) : (var_2)))));
                            arr_63 [i_11] [i_15 + 2] [17] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2147483647) << (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))), (max((((/* implicit */unsigned long long int) var_7)), (arr_52 [i_15 - 1] [i_11 + 2] [i_11 - 2])))));
                            arr_64 [i_11] [i_11] [i_15 + 2] [i_16] [21ULL] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -2147483645)), (2147483647LL)))) * (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) & (((((/* implicit */_Bool) var_8)) ? (2ULL) : (67108863ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (int i_18 = 1; i_18 < 24; i_18 += 1) 
                    {
                        {
                            arr_69 [i_11 - 2] |= 0;
                            var_16 = var_8;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 4) 
    {
        for (short i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            for (long long int i_21 = 2; i_21 < 11; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_22 = 2; i_22 < 9; i_22 += 4) 
                    {
                        for (int i_23 = 3; i_23 < 9; i_23 += 2) 
                        {
                            {
                                arr_83 [i_19] [8ULL] [i_20] [i_22] [i_23] = ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))) << (((((/* implicit */int) var_7)) - (45786))))) >= (((/* implicit */long long int) ((/* implicit */int) var_7))));
                                arr_84 [i_20] [i_20] [i_21] [i_22] [i_21 - 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 281474974613504ULL)) ? (arr_30 [i_19] [i_19 - 2] [i_22 + 3] [i_23 - 2] [i_23]) : (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 12; i_25 += 4) 
                        {
                            {
                                arr_91 [0ULL] [i_20] [i_20] [7ULL] [7ULL] [i_25] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)61)) >= (33554431)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (13LL)))));
                                arr_92 [i_19 - 1] [i_20] [i_19 - 3] [(_Bool)1] [(_Bool)1] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)22), (var_7)))) ? ((~(((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (~((-(((/* implicit */int) var_0)))))))));
                                arr_93 [i_19 + 1] [i_20] [i_20] [i_24] [i_21] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_80 [i_19 + 1] [i_19 - 3] [i_20] [i_21] [3] [i_25])) : (arr_50 [i_20] [i_20] [i_20] [i_20])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) arr_85 [i_21 - 1]))))) : (((((/* implicit */_Bool) arr_80 [i_19] [i_19] [i_19] [i_21 + 1] [3ULL] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 3; i_26 < 11; i_26 += 4) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 12; i_27 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned char) var_0);
                                var_18 = ((/* implicit */unsigned short) min((var_18), (var_7)));
                                arr_99 [i_21] |= ((/* implicit */int) ((((/* implicit */int) arr_88 [i_19 - 1] [i_19] [i_19 - 1] [(unsigned short)0] [(_Bool)1] [i_21] [i_19 - 2])) != (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))))));
                                arr_100 [i_19 - 1] [i_20] [i_26] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((max((arr_4 [i_20]), (arr_53 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)22)))))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (unsigned char)64))))) >= (((((/* implicit */_Bool) var_2)) ? (70368744177663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (signed char i_29 = 0; i_29 < 22; i_29 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_30 = 0; i_30 < 22; i_30 += 1) 
                {
                    for (int i_31 = 3; i_31 < 20; i_31 += 4) 
                    {
                        for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (16ULL))), (((/* implicit */unsigned long long int) ((var_4) ? (((((/* implicit */_Bool) -9223372036854775789LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_59 [(short)21] [i_30] [6ULL] [(short)21])), (var_0)))))))))))));
                                arr_113 [i_28] [17LL] [5LL] [i_31] [i_30] [i_32] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                                arr_114 [i_28] [i_29] [i_30] [i_31] [i_32] [i_32] [i_32] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) arr_52 [i_29] [(unsigned short)24] [24ULL])) ? ((((_Bool)1) ? (((/* implicit */long long int) (-2147483647 - 1))) : (32767LL))) : (((/* implicit */long long int) (~(-256)))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((-1) >= (2147483647)))))))));
                                arr_115 [i_30] [i_28] = ((/* implicit */unsigned short) ((18446744073709551615ULL) << (((/* implicit */int) (signed char)4))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_33 = 0; i_33 < 22; i_33 += 3) 
                {
                    for (int i_34 = 0; i_34 < 22; i_34 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), ((+(var_3)))));
                            arr_122 [i_28] [(unsigned char)0] [(unsigned char)0] [i_33] [i_33] = ((/* implicit */unsigned char) var_4);
                            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_105 [i_29] [i_29] [i_29] [i_34])))), (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_105 [i_28] [i_28] [i_33] [19ULL])) : (((/* implicit */int) var_7))))));
                            arr_123 [i_33] [(unsigned char)10] [i_29] [i_33] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
}
