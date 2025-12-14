/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199272
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) min(((_Bool)1), (arr_3 [i_0] [i_0])));
            arr_5 [i_0] = ((/* implicit */unsigned int) arr_3 [(_Bool)1] [i_0]);
            arr_6 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / ((((_Bool)1) ? (12973356509071272238ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))) : (((/* implicit */unsigned long long int) min((2572616369U), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                var_14 = ((/* implicit */unsigned char) 2572616387U);
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    arr_17 [i_3] = ((/* implicit */short) min((((/* implicit */int) min((arr_1 [i_4 + 1] [i_4 - 2]), (arr_1 [i_4 - 1] [i_4 - 2])))), (((((/* implicit */_Bool) (unsigned short)45095)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)99))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        var_15 &= ((/* implicit */unsigned long long int) arr_15 [i_0] [i_2] [i_0] [i_5]);
                        arr_21 [i_0] [i_0] [i_2] [i_3] [i_3 - 3] [i_4] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_9) : (((/* implicit */long long int) 131040))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (((arr_11 [i_2] [i_4] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 - 2] [i_4])))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (92962551U)))) ? (((/* implicit */unsigned long long int) max((var_9), (arr_11 [i_2] [2] [i_5])))) : (min((((/* implicit */unsigned long long int) arr_1 [8U] [i_2])), (5202414495867191346ULL))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_3] [i_3 + 1] [i_4] [i_3])) : (((/* implicit */int) arr_8 [i_2] [i_3]))))) ? (13244329577842360266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-30730))));
                        arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [11U]))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_7 = 4; i_7 < 13; i_7 += 4) 
                {
                    var_17 &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_14 [(unsigned char)6] [i_0] [i_3 - 2] [i_7]))))));
                    arr_28 [i_0] [(short)1] [i_0] [(unsigned char)9] [i_3] [i_7 - 3] = ((/* implicit */int) 4294967293U);
                    var_18 = ((12491906322053835712ULL) | (((/* implicit */unsigned long long int) 9223372036854775799LL)));
                }
                var_19 |= ((/* implicit */unsigned long long int) arr_18 [i_3 - 1] [i_3] [i_3 - 1] [i_0] [i_3 - 2]);
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) - ((+(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((_Bool)1))))) : (((((/* implicit */_Bool) min((18446744073709551608ULL), (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_2]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_11 [i_2] [i_0] [i_0]))) : (arr_13 [i_0] [12LL] [i_2])))));
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(2021172814U)))), (2778972480323368308ULL)));
            arr_29 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (unsigned short)20069);
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_33 [i_8] [(unsigned char)3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_8] [i_0] [i_0]))));
            var_22 &= ((/* implicit */unsigned int) arr_7 [(unsigned char)8] [(signed char)8]);
        }
        arr_34 [i_0] [i_0] &= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_0] [(unsigned short)6] [i_0] [i_0] [i_0] [i_0]))))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        for (unsigned short i_10 = 2; i_10 < 12; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 3; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                var_23 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                                var_24 |= ((/* implicit */unsigned long long int) ((((-3596750765562974461LL) + (9223372036854775807LL))) << (((((min(((~(((/* implicit */int) var_7)))), (arr_0 [i_11]))) + (3172873))) - (30)))));
                            }
                            var_25 |= min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_9] [i_10] [i_11] [i_12]))))), (min((((/* implicit */unsigned long long int) arr_47 [i_9] [i_9] [i_10 + 1] [i_11] [i_11] [i_12])), (15ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) ((unsigned char) -2147483642))) : ((~(((/* implicit */int) arr_15 [10LL] [i_10] [i_10] [6U]))))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (_Bool)1))));
                                var_27 |= ((((/* implicit */_Bool) arr_7 [i_11] [i_9])) ? (min((17389191360241962648ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)23378)), (-2109344591)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [12] [i_12] [i_9]))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_9 - 1]), (arr_2 [i_9 + 1])))) ? ((((-(((/* implicit */int) arr_19 [i_9] [i_10 - 1] [i_11] [i_12] [i_12] [3U])))) - ((((_Bool)1) ? (var_0) : (((/* implicit */int) arr_15 [i_9] [i_10 - 1] [i_10] [i_14])))))) : (2147483643)));
                            }
                            for (unsigned int i_15 = 4; i_15 < 11; i_15 += 3) 
                            {
                                arr_57 [7ULL] [i_15] [i_11 + 1] [i_15] [i_9 - 1] = ((/* implicit */unsigned long long int) 6U);
                                arr_58 [i_10] [i_10] [i_11 - 1] [(_Bool)0] [i_15] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551597ULL)))) ? (var_10) : (((/* implicit */unsigned int) (~(arr_0 [i_11])))))));
                                var_29 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 392558043143940543ULL)) ? (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_12] [i_15])) : (((/* implicit */int) arr_44 [i_9] [i_10] [i_10] [i_12] [i_15] [i_15 - 1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11)))))));
                            }
                            /* vectorizable */
                            for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned int) (+(392558043143940539ULL)));
                                arr_61 [i_9] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) var_5);
                            }
                            var_31 = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)17568)));
                            arr_62 [i_12] [i_11] [i_10] [i_9] &= ((/* implicit */unsigned short) ((min((arr_50 [i_9 + 1] [i_9]), (arr_50 [i_9] [i_9 + 1]))) & (((((/* implicit */_Bool) -1569789537)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)63))) : (arr_50 [i_10] [i_9])))));
                        }
                    } 
                } 
                arr_63 [i_10] = ((/* implicit */unsigned long long int) max((arr_12 [i_9] [i_10] [i_10 + 1]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9367696040863577527ULL)) ? (10654023764522801908ULL) : (18446744073709551582ULL))) > (min((((/* implicit */unsigned long long int) arr_14 [i_9] [i_10] [i_9] [i_10])), (18446744073709551604ULL))))))));
                arr_64 [i_9 - 1] = ((/* implicit */int) var_2);
                var_32 = ((/* implicit */long long int) (unsigned char)27);
            }
        } 
    } 
}
