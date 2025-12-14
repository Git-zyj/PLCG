/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214210
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
    var_15 = ((/* implicit */unsigned short) (((~((+(((/* implicit */int) var_11)))))) + ((~(max((((/* implicit */int) (unsigned char)0)), (0)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)-25);
                    var_16 = ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
    } 
    var_17 = var_3;
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : ((~((+(((/* implicit */int) var_11))))))));
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */short) min((((575897802350002176LL) / (4611686018427387904LL))), (((/* implicit */long long int) -14))));
                    arr_19 [i_3] [i_3] [i_5] = min(((((_Bool)1) ? (((/* implicit */int) arr_15 [i_5] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_3])))), (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4] [i_5])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_5])))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-22954)) + (2147483647))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_13 [i_3] [i_7])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))))) - (7786719262350016577LL)))));
                                var_20 = ((/* implicit */long long int) 734433406U);
                                var_21 *= ((/* implicit */signed char) min((max((arr_10 [i_5]), (arr_10 [i_4]))), (min(((unsigned char)31), (arr_11 [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_3] [i_3] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) var_14)), (2475018691U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) arr_31 [i_9 - 1] [i_9] [i_9]);
                    arr_33 [i_3] [i_8] [i_8] = arr_15 [i_3] [i_3] [i_9] [i_9];
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 13; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_44 [i_12] [i_11] [i_11] [i_10] = ((/* implicit */long long int) arr_4 [i_11 + 2] [i_10 + 2] [i_10]);
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_1 [i_13]);
                        var_24 = ((/* implicit */unsigned char) 9223372036854775807LL);
                        var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)30071)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)231))))) : (arr_4 [i_13 - 1] [i_13 + 2] [i_13 + 2])));
                        var_26 = ((/* implicit */signed char) ((arr_46 [i_10 - 2] [i_12]) & (arr_46 [i_10 - 3] [i_13 + 2])));
                    }
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_10 - 1])) < (((/* implicit */int) (unsigned short)50831))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_28 ^= ((/* implicit */unsigned char) arr_46 [i_10] [i_11]);
                            arr_51 [i_12] [2U] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) / (((/* implicit */int) (short)24086))));
                            var_29 = ((((/* implicit */_Bool) arr_36 [i_10 + 2] [i_11 + 1])) ? (((((/* implicit */_Bool) arr_41 [i_10] [i_11 + 2] [i_15])) ? (-4445051439974801255LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_10]))))) : (arr_39 [i_15] [i_10] [i_10]));
                            arr_52 [i_10 + 2] [i_14] = ((/* implicit */unsigned int) (~(arr_43 [i_15] [i_11 - 1] [i_10])));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16963)))))));
                        }
                    }
                    for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) arr_41 [i_12] [i_10 + 2] [i_10 + 2]);
                        arr_56 [i_10] [i_11] [i_12] [i_11] = ((/* implicit */int) ((arr_39 [i_10 - 3] [i_11 - 1] [i_11 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [2U])))));
                        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                    }
                    for (unsigned short i_17 = 1; i_17 < 12; i_17 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_10 - 2] [i_17 + 1])) ? (arr_46 [i_17 - 1] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22954))))))));
                        var_34 = ((/* implicit */unsigned int) 1048064);
                    }
                    var_35 = ((/* implicit */short) arr_1 [i_10 + 1]);
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14690)) ? (((/* implicit */int) arr_6 [i_10] [i_10 + 2] [i_10 - 3] [i_10 - 3])) : (((/* implicit */int) (unsigned short)19152)))))));
        arr_59 [i_10] = ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            for (int i_19 = 2; i_19 < 12; i_19 += 4) 
            {
                {
                    var_37 = (((~(var_0))) | (arr_38 [i_10 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                        {
                            {
                                var_38 -= ((/* implicit */int) arr_37 [i_10 - 1] [i_19 + 3]);
                                var_39 = ((/* implicit */_Bool) ((arr_61 [i_18] [i_19] [i_18]) | (((/* implicit */unsigned int) var_8))));
                                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_10] [i_10] [i_19] [i_20] [i_10])) ? (((/* implicit */int) arr_57 [i_10 - 3] [i_18] [i_19] [i_20] [i_21 + 1])) : (((/* implicit */int) arr_57 [i_10 + 2] [i_18] [i_18] [i_20] [i_21]))));
                                arr_71 [i_10] [i_18] [i_18] [i_18] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1262159208720782889LL)) ? (8180452150949385131LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) 1308499155))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_22 = 3; i_22 < 13; i_22 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */signed char) min((-1536323159), (((/* implicit */int) (unsigned short)16955))));
        var_42 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)14705), (arr_63 [i_22] [i_22 + 1] [i_22] [i_22 + 1])))), (arr_53 [i_22] [i_22] [i_22 - 2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9945))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_57 [i_22] [i_22] [i_22] [i_22 - 2] [i_22 - 3]), ((unsigned short)21191))))) ^ (max((2520966332092016809ULL), (((/* implicit */unsigned long long int) 0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_23 = 0; i_23 < 15; i_23 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                arr_79 [i_22] [i_22] [i_23] [i_24] = ((/* implicit */long long int) (signed char)99);
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_22 - 3])))))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 15; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) arr_39 [i_26] [i_22] [i_22]);
                            var_45 = ((/* implicit */_Bool) arr_77 [i_22 - 1] [i_22 - 1] [i_22] [i_24]);
                            var_46 = (~(((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)48581)) : (((/* implicit */int) var_13)))));
                            var_47 = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) var_11))));
            arr_85 [i_22] [i_22 + 1] [i_22] &= ((/* implicit */unsigned short) (-(arr_43 [i_22 - 2] [i_22 - 2] [i_22 - 3])));
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) -1852484851))));
        }
        var_50 = ((/* implicit */int) max((var_50), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_58 [i_22 - 1] [i_22 - 1])), (arr_82 [i_22] [i_22 + 2] [i_22] [i_22 - 1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_72 [i_22]))))));
    }
}
