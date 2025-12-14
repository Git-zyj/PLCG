/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213850
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
    var_12 = var_5;
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51686))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned char)13)) % (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [(unsigned char)15] [(unsigned char)15] = ((_Bool) (-(min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (16911433728ULL)))));
            arr_5 [i_0] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) (short)-30131)), (18446744056798117888ULL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) var_0);
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 16911433728ULL))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                    }
                    var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                    arr_13 [i_0] = arr_3 [i_0] [i_1];
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (short)-1);
                        arr_16 [i_0] [i_0] &= ((/* implicit */unsigned int) var_7);
                    }
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (short)3385)))))))));
                }
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_20 [i_0] [i_0] [i_2] [i_6] [i_0] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (signed char)46)))));
                    arr_21 [i_0] [i_1] [(signed char)21] [i_2] &= ((/* implicit */unsigned int) var_7);
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_19 *= ((/* implicit */_Bool) var_0);
                        var_20 = (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) 9283501589944247884ULL)));
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_6] [i_7] [i_6]))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (((((/* implicit */_Bool) var_11)) ? (0U) : (arr_8 [i_0] [9U] [i_1] [i_6] [i_8 + 1])))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_7);
                        arr_30 [i_0] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_2] [i_6] [i_9] [i_1]);
                        arr_31 [(_Bool)1] [i_1] &= ((/* implicit */signed char) arr_17 [i_0] [i_0] [(signed char)24] [i_0] [i_0]);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_6] [i_1] [i_2] [i_6] [i_9] [i_0])) % (((/* implicit */int) (signed char)-107))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((arr_24 [i_0] [i_1] [i_9] [i_6] [i_9]) == (((/* implicit */int) (signed char)-99)))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) 0ULL)) ? ((+(4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 3; i_11 < 24; i_11 += 2) 
                    {
                        arr_37 [i_1] [i_1] [i_11] [i_10] [(signed char)9] [i_10] = ((/* implicit */signed char) (unsigned char)74);
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_10] [i_11 + 1] [i_2] [i_11 - 1])) ? (arr_14 [i_2] [i_11 - 1] [i_2] [(signed char)0] [i_11]) : ((-(((/* implicit */int) (_Bool)0))))));
                        var_29 = ((/* implicit */unsigned char) (short)-24569);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((0U) < (134201344U))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_31 += ((/* implicit */short) var_8);
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9))))));
                        arr_42 [i_0] [(short)19] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_35 [i_1] [(unsigned short)18] [i_2]);
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_2] [i_10] [i_12])) * (3378813823U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775805LL)) || (((/* implicit */_Bool) (signed char)-37))))) : (((((/* implicit */int) var_10)) % (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_8))));
                }
                for (unsigned char i_13 = 4; i_13 < 24; i_13 += 3) 
                {
                    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                    arr_46 [i_13] [i_13] [i_2] [i_13] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_0)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13)))))));
                    var_35 = ((/* implicit */_Bool) (short)-1);
                }
                arr_47 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65521)) % (((/* implicit */int) arr_36 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]))));
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
            }
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) max((1762930468), (((/* implicit */int) (unsigned char)13)))))));
        }
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_38 *= ((/* implicit */unsigned char) min((min(((-(916153489U))), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0))))))), (((unsigned int) var_8))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                var_39 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                var_40 = ((/* implicit */_Bool) (short)28341);
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    var_41 = ((/* implicit */unsigned int) (+(var_11)));
                    var_42 += ((/* implicit */unsigned int) var_7);
                }
                for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    arr_60 [i_14] [i_14] [i_15] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    var_43 = ((/* implicit */unsigned long long int) 916153480U);
                }
            }
            var_44 = ((/* implicit */unsigned int) var_11);
            var_45 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) -1762930469)), (18446744073709551615ULL)));
        }
        /* LoopSeq 1 */
        for (signed char i_18 = 2; i_18 < 22; i_18 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_46 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
                var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-106))));
                var_48 &= ((/* implicit */_Bool) 9223372036854775805LL);
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_43 [i_0] [i_18] [i_18] [i_19] [i_0] [i_0]))));
            }
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) var_6))));
                arr_72 [i_20] = -9223372036854775805LL;
            }
            for (int i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    arr_77 [i_22] [i_22] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) % (((/* implicit */int) var_4))))))), (min((((var_11) % (var_11))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_7)))))))));
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((unsigned short) (+(((arr_49 [i_0] [i_18 - 1] [i_21]) + (1455460984936584667ULL)))))))));
                    var_52 = ((/* implicit */unsigned long long int) arr_73 [i_0] [(unsigned short)19]);
                }
                var_53 = ((/* implicit */short) (-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_1)), (var_3))), ((~(var_3)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [9ULL])) > (((/* implicit */int) arr_50 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (arr_45 [i_0] [i_0] [i_18] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (916153468U)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_23 = 2; i_23 < 24; i_23 += 2) 
                {
                    var_55 ^= ((/* implicit */unsigned short) ((unsigned char) (-(18446744073709551615ULL))));
                    var_56 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_66 [i_21] [i_0] [i_21])))));
                }
                for (signed char i_24 = 0; i_24 < 25; i_24 += 2) 
                {
                    var_57 -= ((/* implicit */_Bool) (unsigned char)28);
                    arr_82 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_55 [i_0] [i_18] [(unsigned char)4] [(_Bool)1] [i_18] [i_24])) : (((/* implicit */int) (!(((/* implicit */_Bool) 33553920)))))));
                    var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(((4271108165350822741ULL) << (((arr_63 [i_0] [i_18 - 1] [i_18 - 1]) + (4679416987081643223LL))))))))))));
                    var_59 = (!(((/* implicit */_Bool) (-((~(arr_70 [i_0] [i_0])))))));
                }
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    arr_85 [i_25] [7] = ((/* implicit */short) (((_Bool)1) ? (arr_45 [i_25] [i_25] [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    arr_86 [i_0] [i_25] [i_18] [9ULL] = ((/* implicit */long long int) arr_33 [i_0] [(_Bool)1] [i_21] [i_21]);
                    /* LoopSeq 3 */
                    for (int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        arr_89 [i_0] [i_18] [i_21] [i_0] [i_26] [i_25] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) min((arr_35 [i_25] [i_18] [i_18]), (((/* implicit */unsigned char) var_9))))), (var_0)))), (max((((/* implicit */unsigned long long int) arr_79 [i_0] [i_18 + 2])), (var_11)))));
                        var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) var_8))));
                    }
                    for (unsigned int i_27 = 0; i_27 < 25; i_27 += 2) 
                    {
                        arr_94 [i_0] [i_0] [i_0] [i_0] [i_25] [22U] [i_0] = ((/* implicit */_Bool) min((min((max((2548686020U), (((/* implicit */unsigned int) (unsigned char)243)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)243))))))), (arr_80 [i_25] [i_25] [i_25] [i_25])));
                        var_61 = ((/* implicit */int) max((min((arr_49 [(unsigned char)3] [i_18 + 2] [i_21]), (arr_1 [i_0] [i_18 - 2]))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)94)))))));
                        var_62 = ((/* implicit */_Bool) (((+((+(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [18U] [i_0]))))) * (((((/* implicit */_Bool) (signed char)-68)) ? (18446744073709551614ULL) : (((((/* implicit */_Bool) 22ULL)) ? (arr_49 [i_0] [i_18] [i_27]) : (22ULL)))))));
                    }
                    for (short i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        var_63 |= ((/* implicit */_Bool) var_10);
                        var_64 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) 3234763971U)) : (-9223372036854775791LL))))))), (var_1));
                        var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) min((arr_93 [i_0] [i_0] [i_0] [i_21] [i_0] [i_0]), (((/* implicit */unsigned char) var_6)))))));
                        var_66 = ((/* implicit */long long int) min(((~(min((arr_10 [i_0] [i_18] [i_21] [i_25] [i_28] [(signed char)18] [(unsigned char)11]), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) var_3))));
                        var_67 = ((/* implicit */unsigned int) 9223372036854775805LL);
                    }
                }
                arr_98 [i_0] [(_Bool)1] = ((/* implicit */short) 1060203325U);
            }
            var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) arr_84 [12ULL] [12ULL] [i_0] [i_18]))));
            var_69 += ((/* implicit */_Bool) ((min((((var_4) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1060203325U)))), (((/* implicit */long long int) (unsigned char)130)))) % (((/* implicit */long long int) (+((-2147483647 - 1)))))));
        }
        arr_99 [i_0] [i_0] = ((/* implicit */long long int) 2461435098U);
        var_70 &= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16911433728ULL)) ? (((/* implicit */int) arr_56 [(signed char)17])) : ((+(-2147483642)))))), (22U)));
    }
}
