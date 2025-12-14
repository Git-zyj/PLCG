/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213987
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8LL] [i_1 - 1] [i_2 + 2] [i_0]))) & (var_7)));
                        var_14 = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        var_15 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [i_0] [i_0] [(short)8]))) != (arr_6 [(short)3] [i_0])));
        var_16 ^= ((/* implicit */long long int) arr_2 [6LL]);
        var_17 &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_4 [(unsigned short)6] [0U] [0U] [i_0]) : (((/* implicit */unsigned long long int) 2604842341U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 += arr_10 [i_0] [i_4 + 3] [i_4 + 3] [i_7] [i_7];
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 + 2]);
                                var_19 = var_5;
                                var_20 = ((/* implicit */unsigned int) ((arr_9 [i_4] [i_5] [i_4] [i_7]) | (((/* implicit */unsigned long long int) 2604842341U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 18446744073709551610ULL))));
                                var_22 = ((/* implicit */short) (((((_Bool)1) && (((/* implicit */_Bool) 2956830908U)))) && (((/* implicit */_Bool) arr_14 [(short)7] [i_4 + 2] [(short)7] [i_9]))));
                                arr_26 [i_0] [i_0] [i_4] [i_0] [i_8] [i_4] [i_9] = ((/* implicit */long long int) arr_17 [4LL] [i_4] [i_5] [(short)1] [i_9 - 2]);
                            }
                        } 
                    } 
                    arr_27 [i_4] [i_0] = ((/* implicit */unsigned int) (short)-6927);
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 9; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 6; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((int) 1873019342U));
                                var_24 = ((/* implicit */unsigned int) ((2956830902U) != (((unsigned int) var_2))));
                                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4 + 3])) ? (arr_4 [i_5] [i_5] [i_10 - 1] [i_11 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((12160469155510362337ULL) >= (var_7)))))));
                                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-344)) >= (((/* implicit */int) (short)-1))))) >> (((arr_31 [i_4 - 1] [i_5]) - (1163669641U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_12 = 4; i_12 < 9; i_12 += 2) 
                    {
                        var_27 &= ((/* implicit */short) var_11);
                        arr_37 [i_0] [8ULL] [(short)1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_4 + 4] [6ULL] [i_5] [i_12] [i_12 + 1]))) != (((((/* implicit */_Bool) 1873019340U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2))) : (arr_31 [i_0] [i_0])))));
                        arr_38 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4 + 3] [i_4 + 1] [i_4 + 3] [i_5] [i_5] [i_5] [i_12])) || (((/* implicit */_Bool) arr_18 [i_0] [i_4 + 4] [i_12] [i_12] [i_12] [i_12] [i_12 - 3]))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) 0ULL))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_29 |= ((/* implicit */short) arr_39 [0ULL]);
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                {
                    arr_47 [i_13] [i_13] [i_15] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_13] [i_14] [i_14] [i_13]))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_13] [i_13])) && (((/* implicit */_Bool) 1873019342U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((0U) & (1873019332U))))))) : (((/* implicit */int) arr_46 [i_13] [i_14] [i_13] [i_13]))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) arr_40 [i_13])) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65523)) || (((/* implicit */_Bool) 479227311)))) && ((_Bool)1))))));
                                var_31 = ((/* implicit */unsigned int) max((var_1), (var_10)));
                                arr_55 [i_13] [i_15] = (i_13 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_43 [i_13] [i_14] [i_17]))) >> ((((-(arr_39 [i_13]))) - (12566071041770444452ULL)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_43 [i_13] [i_14] [i_17]))) >> ((((((-(arr_39 [i_13]))) - (12566071041770444452ULL))) - (12647306548090485759ULL))))));
                                var_32 *= ((/* implicit */unsigned long long int) 1592093315U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 3; i_18 < 9; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_12)) - (6376)))));
                                var_34 = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)86)))));
    }
    var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) 2421947954U)) || (((/* implicit */_Bool) 1056828420U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3576199255059394024ULL)))))) : (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))) ? (var_11) : (max((((/* implicit */unsigned long long int) var_4)), (var_5)))))));
}
