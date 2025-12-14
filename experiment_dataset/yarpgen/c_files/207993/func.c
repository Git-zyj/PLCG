/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207993
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [6LL] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                arr_6 [(short)5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((3507854838U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))), (var_12)));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16512)) ? (103590849U) : (4261412864U)));
                            var_16 = (-(((/* implicit */int) ((min((((/* implicit */long long int) arr_8 [i_0] [10LL] [11LL])), (var_0))) < (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))));
                            arr_11 [i_3] [i_1 - 1] [i_2 + 2] [i_3] = ((/* implicit */int) (unsigned short)49024);
                            var_17 = ((/* implicit */int) ((var_11) <= (max((((/* implicit */long long int) ((signed char) -8381564122750189274LL))), (var_2)))));
                            arr_12 [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [3LL] [i_0] [3LL] [(short)8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (1361468148U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49019)))))))) ? (max(((~(var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (arr_2 [(short)6] [(short)6] [i_2 + 1])))))) : (((/* implicit */unsigned long long int) min((arr_1 [(unsigned short)4] [i_1 + 2]), ((~(arr_1 [i_1 - 1] [8]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_6] [i_7] [i_8])) ? (arr_14 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                                var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_21 [(short)2] [i_5] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [i_4] [(unsigned short)3] [10ULL] [(unsigned short)3] [i_4]))))));
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)49019))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)204)))) : (var_12)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_31 [13LL] [13LL] [15LL] [i_9])))));
                                var_25 = ((/* implicit */long long int) ((unsigned long long int) (+(arr_28 [i_4] [i_5] [i_9] [i_9]))));
                                arr_36 [(unsigned short)6] [21] [5U] [i_9] [19LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [7LL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_4] [i_6] [i_9])) : (((/* implicit */int) var_7))))) : (var_2)));
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_4] [i_4] [(unsigned short)8] [i_4] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (short i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_42 [i_4] [i_4] [2] [i_4] [i_11] [i_12] [10LL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_6])) && (((/* implicit */_Bool) arr_29 [5LL] [(short)11] [i_11] [i_12 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [0LL] [i_5])))))));
                                arr_43 [i_4] [i_4] [i_6] [(unsigned short)6] [i_12 + 1] = arr_24 [(unsigned short)1] [i_5] [(signed char)21] [i_11] [i_12 - 1] [i_6];
                                var_27 = arr_32 [i_12 + 1] [i_12 + 1] [14LL] [(signed char)12] [i_12 - 1];
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) arr_39 [4LL] [i_5] [i_5] [i_5]))) + ((-(1554794385U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (short i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                {
                    arr_49 [i_14] = arr_39 [i_4] [i_13] [i_13] [i_13];
                    var_29 = ((/* implicit */unsigned short) ((long long int) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((long long int) 1067663564063423870ULL)))));
        arr_52 [i_15] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_15] [7LL] [7LL]))));
    }
    for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        var_31 = ((/* implicit */short) var_8);
        arr_56 [i_16] [(unsigned char)0] = ((/* implicit */long long int) 2840781497U);
    }
    for (int i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) ((((unsigned long long int) var_6)) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_17] [i_17] [i_17] [i_17] [i_17]))))))))));
        var_33 = ((/* implicit */signed char) var_5);
    }
}
