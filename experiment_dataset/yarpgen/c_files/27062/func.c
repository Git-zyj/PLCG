/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27062
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_0] [i_4] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_3] [i_0]))) <= (min((((/* implicit */unsigned long long int) ((arr_4 [i_1]) == (((/* implicit */unsigned long long int) arr_0 [i_3]))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [(unsigned char)6] [4]))))))));
                                var_16 ^= ((/* implicit */long long int) arr_8 [i_3] [i_1] [i_2]);
                            }
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (_Bool)0)) : (-2147483637)))), (arr_12 [i_3] [i_3] [5U] [0LL])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_3] [i_1] [i_3 + 1]))) % (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_3] [i_2] [i_2 + 2] [1U] [i_2 + 2])), (arr_4 [i_1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_7 [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)22784)) && (((/* implicit */_Bool) (short)22767)))))) : (((arr_7 [i_0]) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [4LL])) + (29862)))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_5] [i_5] [i_6]))));
                            arr_24 [i_6] [i_6] [i_5] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)127)), (6917529027641081856LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65153)) == (((/* implicit */int) arr_9 [i_1])))))))) && (((/* implicit */_Bool) ((min((arr_15 [i_1] [i_1] [i_5] [i_1] [i_0]), (((/* implicit */long long int) (short)22782)))) << (((/* implicit */int) arr_21 [i_0] [(_Bool)1])))))));
                            var_19 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_5] [i_1] [i_1])) + (((/* implicit */int) (unsigned short)65154))))) != (arr_12 [i_5] [i_1] [i_5] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned short)35199)) - (35184))))) == (arr_17 [i_0] [i_1] [i_7] [i_0]))))) == (min((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)230)), ((short)-3825)))), (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (arr_19 [i_0]) : (((/* implicit */long long int) 2147483636))))))));
                            var_21 &= ((/* implicit */long long int) ((unsigned int) arr_17 [i_0] [i_1] [i_7] [i_8]));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_1]))))), (4294967280U))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */short) ((long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_9] [i_9])) > (arr_32 [i_9]))))) > (((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */long long int) 4294967295U)) : (arr_35 [i_9] [i_9])))))), (arr_32 [17LL])));
        var_25 = (~(((/* implicit */int) (unsigned char)19)));
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        {
                            arr_45 [(unsigned char)7] [i_11] [i_11] [i_11] [i_11] [i_11] [(unsigned char)6] = ((/* implicit */int) (-(((144115183780888576LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            var_26 = ((/* implicit */unsigned short) (short)18056);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */short) min((((/* implicit */int) ((arr_43 [(short)14] [i_10] [i_10]) <= (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */int) ((unsigned char) 9007199246352384ULL))) >> (((min((-144115183780888576LL), (((/* implicit */long long int) (short)-19058)))) + (144115183780888594LL)))))));
        }
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35202)));
            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_37 [i_9] [(unsigned char)11]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_9]))))))) == (((((/* implicit */_Bool) arr_40 [i_9] [i_9] [(unsigned short)0] [(unsigned short)0] [i_9])) ? (-837896991173217037LL) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9] [13ULL] [i_9] [i_14] [i_14]))))))))) <= ((~(((arr_32 [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9])))))))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
        {
            var_30 ^= ((/* implicit */signed char) ((18446744073709551605ULL) > (((/* implicit */unsigned long long int) arr_38 [i_9] [i_15] [i_15]))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -1LL)))))) + (65535ULL)));
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
            {
                var_32 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) arr_34 [i_9]))))) << (((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */long long int) arr_38 [i_9] [i_9] [i_9])) : (arr_33 [i_16] [i_9]))) - (2343071690LL)))));
                var_33 = ((/* implicit */int) (+(0U)));
            }
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) 4ULL))));
                arr_57 [i_17] [i_17] [10ULL] [i_9] = ((/* implicit */unsigned char) ((arr_36 [i_9]) == (((/* implicit */unsigned long long int) ((-1LL) ^ (((/* implicit */long long int) arr_54 [i_9] [i_15] [i_17])))))));
                var_35 = ((/* implicit */_Bool) ((signed char) arr_53 [i_15] [i_17]));
            }
            var_36 = arr_44 [(short)1] [2LL] [i_15] [i_9] [i_9];
        }
    }
    for (short i_18 = 3; i_18 < 12; i_18 += 2) /* same iter space */
    {
        arr_61 [i_18 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_53 [i_18] [(short)6]))))) % (((((/* implicit */long long int) ((/* implicit */int) (short)768))) | (arr_34 [i_18 + 2])))));
        /* LoopSeq 1 */
        for (long long int i_19 = 1; i_19 < 12; i_19 += 2) 
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) ((short) ((arr_35 [i_18] [(short)16]) >> (((arr_36 [i_19]) - (2747900566988591096ULL))))))) - (16618)))));
            var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 520093696)) && (((/* implicit */_Bool) (unsigned short)0)))))) >= (min((arr_60 [i_18] [i_19]), (18446744073709486080ULL))))))) : (((((/* implicit */_Bool) arr_63 [i_18 - 3])) ? (arr_32 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))))));
            arr_66 [(unsigned short)12] = ((/* implicit */long long int) min((min((arr_48 [i_18 - 3] [i_19 - 1] [i_19]), (((/* implicit */unsigned long long int) (unsigned short)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)1016))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_18] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (arr_43 [i_18] [6ULL] [i_19])))))))));
            var_39 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)195)))) + (((arr_60 [i_19 + 2] [i_19 - 1]) + (arr_60 [i_19 + 2] [i_19 - 1])))));
        }
        arr_67 [i_18] = ((/* implicit */signed char) ((unsigned long long int) ((arr_60 [i_18 - 1] [i_18 - 1]) != (arr_32 [i_18 + 1]))));
    }
    /* vectorizable */
    for (short i_20 = 3; i_20 < 12; i_20 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_77 [i_20] [i_20] [i_22] [i_23] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_20])) && (((/* implicit */_Bool) ((unsigned char) arr_53 [i_20] [15U])))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 3139334367608501932LL))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 2) 
                        {
                            arr_81 [i_20] [i_20] [i_21] [i_22] [i_23] [i_24] = ((/* implicit */unsigned short) ((arr_42 [i_20 - 3] [i_20 - 3] [i_23] [i_23] [i_24] [i_23]) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0)))))));
                            var_41 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_54 [i_20 + 1] [i_20 - 2] [i_22])) * (arr_60 [i_20 + 2] [i_20 - 2])));
                            arr_82 [i_23] [i_21] [i_22] [i_23] [2LL] [i_20] [8] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_68 [i_20 - 1] [i_21])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_22]))))));
                        }
                        for (long long int i_25 = 3; i_25 < 13; i_25 += 2) 
                        {
                            var_42 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)-29781)) < (((/* implicit */int) (short)29780)))))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) (short)2362))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_42 [i_20] [i_21] [i_21] [(signed char)15] [i_23] [i_25 - 2])))));
                            var_44 = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)19));
                        }
                        for (long long int i_26 = 0; i_26 < 14; i_26 += 4) 
                        {
                            arr_90 [0LL] [i_21] [i_22] [i_23] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_56 [i_21] [i_20 + 1] [i_20] [i_20])) == (((/* implicit */int) arr_56 [i_21] [i_20 + 1] [i_20] [(_Bool)1]))));
                            arr_91 [i_20] [1LL] [i_20 - 1] [3ULL] [(short)4] [i_20] [i_20] = ((/* implicit */unsigned char) ((unsigned int) arr_37 [i_23] [i_22]));
                            var_45 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_20 + 2])) && (((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_52 [i_26] [i_21] [i_21] [i_20 - 1]))))));
                        }
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned int) arr_73 [i_21]);
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 2) 
            {
                var_47 = ((/* implicit */unsigned short) (((+(arr_48 [i_20] [i_21] [i_27]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((283726776524341248LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_48 = ((/* implicit */int) arr_84 [i_20 - 1] [i_20 - 1] [i_21] [i_20 - 1] [i_21] [i_20 - 2] [i_20 - 3]);
            }
            arr_96 [i_20] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-29756)) % (((/* implicit */int) arr_88 [i_21] [i_21] [i_20 + 2] [i_20] [i_20]))))) <= (((((/* implicit */_Bool) arr_80 [i_21] [i_21] [i_20] [i_20])) ? (arr_49 [i_20] [i_21] [i_21]) : (0U)))));
            arr_97 [i_21] [i_20] = (~(((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_65 [i_20 - 3]))))));
        }
        for (signed char i_28 = 0; i_28 < 14; i_28 += 4) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) arr_54 [i_20] [i_20] [(short)1]))));
            /* LoopSeq 1 */
            for (unsigned char i_29 = 1; i_29 < 13; i_29 += 1) 
            {
                arr_103 [i_20 + 2] [i_29] [i_29] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_34 [i_20])) && (((/* implicit */_Bool) (short)-29771)))) && (((/* implicit */_Bool) ((arr_38 [i_20] [i_20] [i_20]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned char i_30 = 0; i_30 < 14; i_30 += 2) 
                {
                    for (long long int i_31 = 0; i_31 < 14; i_31 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_59 [i_29 + 1] [i_20 + 1])) * (0ULL)));
                            arr_109 [i_29] [i_29] [i_29] [(unsigned char)11] [i_29] = ((/* implicit */unsigned int) arr_72 [i_31] [i_30] [i_29] [i_20]);
                        }
                    } 
                } 
                arr_110 [i_20] [i_28] [i_20] [i_20 - 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) && (((/* implicit */_Bool) 4611686018427387903ULL))));
            }
            arr_111 [(_Bool)1] [i_20] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_28])) && (((/* implicit */_Bool) arr_93 [i_20 - 2] [i_28] [i_20] [i_20 + 1]))));
            var_51 = ((/* implicit */unsigned int) ((0ULL) > (arr_32 [i_20 - 3])));
        }
        for (signed char i_32 = 0; i_32 < 14; i_32 += 4) /* same iter space */
        {
            var_52 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_60 [i_32] [i_32])) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_32]))) : (arr_33 [i_20] [2ULL]))) <= (((/* implicit */long long int) arr_54 [i_20] [i_32] [i_20]))));
            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_68 [i_20] [i_32]))))) << (((arr_34 [i_20 - 3]) + (8426322074134266056LL)))));
            var_54 = ((/* implicit */long long int) arr_104 [i_20 + 2] [i_32] [i_32] [i_20] [i_32]);
        }
        for (signed char i_33 = 0; i_33 < 14; i_33 += 4) /* same iter space */
        {
            var_55 *= ((/* implicit */unsigned int) ((long long int) arr_37 [i_20 - 3] [i_20 - 3]));
            var_56 = ((/* implicit */unsigned char) ((unsigned long long int) (-(arr_100 [i_20]))));
            arr_116 [i_20 - 2] [i_20 - 2] [i_20 - 2] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (short)-22035))));
            var_57 = ((/* implicit */_Bool) ((arr_51 [i_20] [(unsigned char)3]) - (arr_51 [i_20] [i_20])));
            arr_117 [i_20] [i_33] [i_33] = (((-(13835058055282163726ULL))) >= (((/* implicit */unsigned long long int) 4253376909069611701LL)));
        }
        var_58 ^= ((/* implicit */unsigned long long int) (((+(arr_47 [i_20 - 3]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-29771))))));
    }
    var_59 = ((/* implicit */unsigned char) var_1);
    var_60 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 9223372036854775807LL))))) == (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))));
}
