/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195235
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) 1071644672);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))))));
                        var_13 = ((/* implicit */_Bool) ((((_Bool) arr_9 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2])) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)157)) >> (((arr_9 [i_1 + 2] [i_1] [i_1] [i_1 - 1]) + (511211493))))))));
                        var_14 = ((/* implicit */int) max((var_14), (var_8)));
                        arr_12 [i_0] [i_0] [i_0] [i_2] = ((((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))))) + (9223372036854775807LL))) << ((+(0LL))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = (~(max((((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) & (arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_20 [i_2] [i_1] [i_2] [i_1] = min((((unsigned long long int) arr_4 [i_2] [i_4] [i_2])), (((/* implicit */unsigned long long int) ((var_10) << (max((-2015321300432660803LL), (((/* implicit */long long int) arr_3 [5U] [i_0] [i_0]))))))));
                            var_15 = ((/* implicit */short) arr_10 [i_4] [i_4] [i_2] [i_1] [i_2] [i_2]);
                        }
                        arr_21 [(unsigned char)18] [i_1 - 1] [i_1] [22U] [i_1] [8LL] &= ((/* implicit */unsigned char) ((((((arr_4 [i_1 + 1] [i_1] [12ULL]) + (9223372036854775807LL))) << (((3076580597U) - (3076580597U))))) % (((((arr_4 [i_1 + 2] [i_4] [2LL]) + (9223372036854775807LL))) >> (((arr_0 [i_1 + 1]) - (8505629249719692635ULL)))))));
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_6]);
                        var_17 += ((/* implicit */unsigned int) ((unsigned short) (~(min((arr_19 [i_0] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_0] [20LL]), (((/* implicit */long long int) arr_8 [10] [i_1 + 1] [i_1] [i_6])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_2] [i_2] [i_6] [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_7] [i_7 + 2] [i_7] [i_7]))))) ? ((+(((((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_2] [i_1] [i_0])) ? (-20LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_2] [i_2] [i_7] [i_7])))));
                            arr_28 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4)))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_18 &= ((/* implicit */long long int) ((unsigned short) ((signed char) arr_7 [i_8] [i_1 - 1] [i_1 - 1])));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */_Bool) 362921020655215320ULL)) ? (0LL) : ((-9223372036854775807LL - 1LL)))) : (arr_23 [i_1 + 1] [i_1 - 1] [i_1 + 2]))))));
                            arr_31 [i_0] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) -1260834715);
                            arr_32 [i_0] [i_0] [i_2] [i_2] [i_8] = ((/* implicit */long long int) 3168375454U);
                            arr_33 [i_6] [i_6] [i_2] [i_2] [i_0] [i_0] = max((1345646220620588897LL), (((/* implicit */long long int) var_7)));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((arr_2 [i_1 + 1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) == (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_1 - 1]))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                            arr_38 [i_0] [i_0] [i_2] [i_0] [i_2] [i_10] [i_2] = ((((/* implicit */_Bool) arr_35 [i_2] [i_1] [i_1] [i_1 - 1] [i_2])) ? (((unsigned int) 11984087360403758997ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))));
                            var_22 = ((var_2) / (((/* implicit */long long int) arr_17 [i_1 + 1])));
                            var_23 = var_12;
                        }
                        var_24 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (max((((/* implicit */unsigned int) -1071644673)), (var_6)))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2015321300432660794LL)) ? (9223372036854775807LL) : (-1LL)));
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_26 &= ((((_Bool) 7LL)) ? (7705817547674759548LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61120))) / (3229326604U)))));
                        var_27 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))));
                        /* LoopSeq 2 */
                        for (short i_12 = 1; i_12 < 23; i_12 += 4) /* same iter space */
                        {
                            var_28 -= ((((((long long int) ((int) var_8))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (5920))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_35 [i_2] [i_1 + 1] [i_2] [i_12 - 1] [i_12]) % (arr_35 [i_2] [i_1 + 1] [i_1] [i_12 - 1] [i_2])))) ? (((long long int) ((1152920405095219200LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_1])))))) : (arr_4 [i_12 - 1] [i_12] [i_2])));
                        }
                        for (short i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_2] [(short)2] [i_2] = -9209079850633061843LL;
                            var_30 = ((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [3] [i_1]);
                            var_31 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) var_1)), (var_5))));
                            arr_49 [i_13] [i_2] [i_13] [i_13] [i_13] = arr_44 [i_0] [i_1] [i_0] [i_11] [i_13];
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_2] [i_1] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) + (((var_3) - (((/* implicit */unsigned int) var_11)))))))));
                        }
                        arr_50 [i_2] [i_2] [i_2] = ((/* implicit */int) var_1);
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_54 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((138005901604207939LL) > (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_14] [i_2] [i_14] [i_2] [i_2] [i_0]))))))) : (arr_4 [i_1 + 1] [i_1 + 2] [i_2])));
                        arr_55 [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [11])) ? (arr_13 [i_0] [i_1] [i_1] [i_2] [i_14]) : (((/* implicit */unsigned int) arr_18 [11LL] [i_1 + 2] [i_1] [i_1] [i_1])))) - (2640193114U)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 1; i_15 < 23; i_15 += 3) 
                        {
                            arr_58 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 32767U))) ? (-4450813344046919321LL) : (((/* implicit */long long int) (+(33554430))))));
                            arr_59 [i_2] [i_2] = ((/* implicit */short) var_6);
                        }
                    }
                }
                var_34 = ((/* implicit */unsigned long long int) (+(arr_9 [9LL] [i_1 - 1] [9LL] [i_0])));
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    arr_63 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_16] [i_1] [i_1] [i_1 + 2])))))));
                    var_35 |= (((~(arr_23 [i_0] [i_1 + 1] [i_16]))) + (((((/* implicit */_Bool) ((var_11) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((int) var_7))) : (0LL))));
                    var_36 += ((/* implicit */short) max((((/* implicit */long long int) 831039761U)), (1064078757158456528LL)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_17 = 0; i_17 < 10; i_17 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_18 = 2; i_18 < 8; i_18 += 1) 
        {
            arr_70 [i_17] [8LL] = ((long long int) (short)18392);
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    for (unsigned int i_21 = 2; i_21 < 8; i_21 += 4) 
                    {
                        {
                            arr_79 [i_17] [i_17] = ((/* implicit */unsigned int) ((((((var_8) | (((/* implicit */int) arr_74 [i_17] [i_18] [i_18] [i_21])))) + (2147483647))) << (((((/* implicit */int) (unsigned short)61120)) - (61120)))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_18 + 1] [i_18 - 2] [i_18] [i_18 + 2])) ^ (var_5)));
                            var_38 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_2)))));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned char) arr_43 [i_18 + 1] [i_18] [i_17]);
            var_40 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_26 [23LL] [(unsigned char)7] [(unsigned short)5] [i_18] [i_18])) + (2147483647))) << (((var_6) - (3121002787U))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_56 [i_18] [i_18])) : (((/* implicit */int) var_1))))));
        }
        for (short i_22 = 0; i_22 < 10; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_23 = 1; i_23 < 7; i_23 += 2) 
            {
                for (unsigned int i_24 = 2; i_24 < 9; i_24 += 3) 
                {
                    {
                        arr_88 [i_17] [i_22] [i_23] [i_24] [i_17] [i_22] = ((/* implicit */long long int) arr_74 [i_17] [i_22] [i_23] [i_24]);
                        var_41 = ((/* implicit */short) ((((int) arr_23 [i_22] [i_22] [i_24])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_17] [i_17])) || (((/* implicit */_Bool) var_7)))))));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (var_2)))) ? (((((/* implicit */_Bool) arr_61 [i_17] [i_22] [i_23] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_23 [i_17] [i_22] [i_23]))) : (arr_44 [i_23 + 2] [i_23 + 3] [i_23 - 1] [i_23 - 1] [i_24 + 1])));
                    }
                } 
            } 
            var_43 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18080))));
        }
        for (short i_25 = 0; i_25 < 10; i_25 += 4) 
        {
            var_44 = ((/* implicit */_Bool) ((arr_30 [i_25] [i_25] [i_17] [i_17] [18]) ? (((/* implicit */int) arr_30 [i_25] [i_17] [i_25] [20U] [i_25])) : (((/* implicit */int) arr_30 [i_25] [i_25] [i_17] [(unsigned short)20] [i_25]))));
            arr_91 [i_17] = ((/* implicit */unsigned long long int) ((arr_41 [i_25] [i_25] [i_17] [i_17] [i_17]) << (((arr_44 [i_25] [19U] [i_17] [i_17] [i_17]) + (7345595799876797265LL)))));
        }
        arr_92 [3] = ((arr_35 [i_17] [i_17] [12LL] [i_17] [i_17]) + (((/* implicit */unsigned long long int) var_5)));
        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 2921153800U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_17] [i_17] [i_17] [i_17]))) : (arr_46 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])));
        arr_93 [i_17] [i_17] = ((/* implicit */unsigned short) (~(var_6)));
    }
}
