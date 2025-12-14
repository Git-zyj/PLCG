/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242440
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_12 -= ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((17774233967317552299ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))), (var_7)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (11650571815249392958ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)0))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((min((4294967295U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_0] [i_3 - 1])))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)76)), (arr_0 [i_0]))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)127);
                    var_13 = ((/* implicit */signed char) (+(274877906936ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((var_11) - (135817753))))))));
        arr_24 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_14 = 4294967295U;
            arr_28 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_5])))))) - (var_0)));
            /* LoopSeq 1 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) 4294967295U);
                var_16 = ((/* implicit */unsigned int) arr_4 [i_6]);
                arr_32 [i_5] [i_5] [i_7] = ((/* implicit */int) (unsigned char)255);
                var_17 = ((/* implicit */unsigned short) var_3);
                arr_33 [i_5] [(short)0] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_1);
            }
        }
        arr_34 [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((var_5) * (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)112))))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 4; i_8 < 12; i_8 += 4) 
        {
            arr_38 [(signed char)3] [(signed char)3] [(signed char)3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-597233953667862366LL)))));
            arr_39 [i_8] [i_5] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)65535))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
            {
                for (unsigned char i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    {
                        arr_46 [i_5] [i_5] [(unsigned short)5] [(unsigned char)6] [(unsigned char)6] [i_10] = ((/* implicit */unsigned int) var_9);
                        var_18 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_50 [i_5] [i_5] [i_8 - 4] [i_9 - 2] [i_10] [2ULL] [i_9 - 2] = ((/* implicit */unsigned short) var_0);
                            arr_51 [i_5] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */signed char) var_7);
                            var_19 -= ((/* implicit */unsigned long long int) 1U);
                            arr_52 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17045651456ULL)) ? (((/* implicit */int) (unsigned short)13227)) : (((/* implicit */int) (unsigned short)65535))));
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 546030193U)) ? (((/* implicit */int) (short)-112)) : (((/* implicit */int) (_Bool)1))));
            arr_53 [i_5] = ((/* implicit */unsigned char) var_1);
        }
    }
    for (short i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        arr_58 [i_12 - 1] = ((/* implicit */int) max((arr_57 [i_12 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                {
                    arr_64 [i_13] [i_13] [(signed char)8] = ((/* implicit */int) 4294967295U);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 1; i_16 < 18; i_16 += 4) 
                        {
                            arr_69 [20LL] [20LL] [i_14] [i_14] [i_15] [i_16 + 4] = 0U;
                            arr_70 [13U] [i_16] [i_14] [13U] [(short)9] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_12 + 1] [i_12] [i_12] [i_12] [i_12 + 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]))) : ((-9223372036854775807LL - 1LL))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [i_12 - 1] [i_13] [18ULL])) || (((/* implicit */_Bool) var_3))));
                        }
                        arr_71 [i_14] [i_14] [i_14] [19LL] [14ULL] = ((/* implicit */short) (~(var_0)));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_74 [i_17] [13ULL] [i_13] [i_12] = ((/* implicit */long long int) arr_56 [i_17]);
                        arr_75 [i_13] = ((/* implicit */int) max((min((var_7), (((/* implicit */long long int) (~(3748937102U)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~((-2147483647 - 1))))), (max((4294967295U), (((/* implicit */unsigned int) 2147483647)))))))));
                        var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12814051124803163576ULL)) ? (274877906936ULL) : (((/* implicit */unsigned long long int) 1980039706152824160LL)))))));
                    }
                    for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
                    {
                        arr_78 [i_12] [i_12] = ((/* implicit */unsigned char) ((short) (((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */int) arr_55 [i_12 + 1] [i_12 + 1])), (-1248646594))) : (((((/* implicit */int) (unsigned short)12807)) + (((/* implicit */int) (signed char)15)))))));
                        arr_79 [i_18] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)76)) / (((/* implicit */int) (short)8512))))));
                        /* LoopSeq 3 */
                        for (short i_19 = 1; i_19 < 20; i_19 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0))))));
                            arr_82 [i_12] = ((/* implicit */unsigned short) (signed char)-102);
                        }
                        for (unsigned long long int i_20 = 3; i_20 < 21; i_20 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) var_9);
                            arr_85 [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20] [i_20] = ((/* implicit */unsigned short) var_2);
                            var_25 = ((/* implicit */unsigned short) var_8);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_21 = 3; i_21 < 21; i_21 += 2) /* same iter space */
                        {
                            arr_89 [9ULL] [9ULL] [i_21 + 1] [i_18 + 1] [i_21] = var_1;
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2800852470U)) ? ((~(((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) arr_57 [i_21])))))));
                            arr_90 [i_14] [i_18] [i_21] = ((/* implicit */unsigned char) ((short) var_11));
                        }
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((+(18446744073709551615ULL))) != (((/* implicit */unsigned long long int) var_3)))))));
    var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_10)), ((~((~(18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
    {
        for (unsigned int i_23 = 2; i_23 < 11; i_23 += 4) 
        {
            for (unsigned int i_24 = 1; i_24 < 13; i_24 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((min((8790298909710871433ULL), (arr_97 [i_24 + 1] [i_24] [i_24] [i_24 + 1]))), (((((/* implicit */unsigned long long int) var_11)) * (arr_97 [i_22] [i_23] [i_24] [(unsigned char)4])))));
                    arr_99 [i_22] [i_22] [i_24] = ((/* implicit */unsigned short) (unsigned char)68);
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_96 [i_22] [i_23 + 1])), (2147483647)))) > (max((((/* implicit */unsigned int) (short)15969)), (1045619160U)))));
                }
            } 
        } 
    } 
    var_31 -= ((/* implicit */unsigned char) var_8);
}
