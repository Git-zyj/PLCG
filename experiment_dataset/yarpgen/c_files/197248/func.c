/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197248
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
    var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)241)) | (528482304)))) ^ (min((var_8), (((/* implicit */unsigned long long int) var_7)))))) + (18446744073709551608ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max(((~(arr_0 [i_0]))), (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) >= (4291699334776730568ULL)))), (max((max((((/* implicit */unsigned long long int) var_19)), (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_3] [i_2] [0ULL] [i_0]))))))));
                        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)14)) | (((/* implicit */int) arr_13 [i_3 + 1] [i_2] [1LL] [i_0]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4291699334776730592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                            arr_19 [i_1] [14] = ((/* implicit */unsigned int) (~(arr_4 [15U])));
                            var_23 = ((/* implicit */unsigned int) ((unsigned char) (((~(4164526231U))) == (((/* implicit */unsigned int) 0)))));
                            arr_20 [i_2] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)178));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((7794194203622518605ULL), (((/* implicit */unsigned long long int) var_7))))))) ? (max((((/* implicit */unsigned int) -1)), (((((/* implicit */_Bool) (unsigned short)23143)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_14 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2917341842U)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        var_25 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) (_Bool)1))), (((unsigned int) ((((/* implicit */int) arr_8 [i_5] [i_5])) == (arr_21 [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        arr_31 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32339))) < (1861682338561442425LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9] [i_8] [i_6] [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) arr_12 [i_5] [i_7] [i_8] [(signed char)0])))))))), ((~(((/* implicit */int) ((3349509030U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                            arr_35 [i_9] [i_8] [i_7] [i_6] [13ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_19)) ? ((~(var_19))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) arr_1 [i_7]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7ULL))))))));
                        }
                        var_27 -= ((/* implicit */long long int) max((max((min((arr_9 [i_5] [i_5] [i_7] [i_6]), (((/* implicit */unsigned int) (unsigned char)3)))), ((((_Bool)1) ? (arr_26 [(short)4] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_36 [i_5] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((arr_7 [0LL] [i_6] [i_7] [i_8]), (arr_29 [i_5] [i_6])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_5] [(signed char)2] [i_7] [i_8] [i_5] [5U] [i_6]))) ? (max((((/* implicit */unsigned int) var_12)), (var_1))) : (max((((/* implicit */unsigned int) (unsigned short)0)), (var_13))))))));
                        var_28 = ((/* implicit */int) ((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (arr_9 [i_5] [i_5] [i_5] [7])))), (arr_4 [i_8]))) == (((/* implicit */long long int) ((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) (signed char)32)))) <= (min((((/* implicit */unsigned long long int) 2557201358U)), (4397375656514495177ULL)))))))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) 3444186180U);
                        var_29 ^= ((((/* implicit */_Bool) arr_27 [i_10 - 1] [3LL] [i_10] [i_6])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 4009991473U)) ? (var_18) : (((/* implicit */long long int) arr_29 [i_10] [2]))))))) : (((((unsigned long long int) 4294967295U)) * (((/* implicit */unsigned long long int) arr_25 [i_5 - 1] [i_10 - 1])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_42 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_7]))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)13795)) : (arr_27 [11U] [i_5] [12LL] [i_5]))) : (((/* implicit */int) ((unsigned char) (signed char)-1)))))) + (arr_5 [i_11] [i_7] [i_6])));
                        var_30 = ((/* implicit */int) (unsigned char)194);
                    }
                    arr_43 [i_5] [i_6] [i_7] = ((/* implicit */int) arr_8 [i_7] [i_5]);
                    var_31 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_22 [i_5 + 1])) ? (arr_22 [i_5 - 2]) : (arr_22 [i_5 + 1])))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                arr_50 [i_12] [i_7] [i_7] [i_12] [i_12] [i_7] [i_5] = ((((/* implicit */unsigned int) var_17)) / (((((/* implicit */_Bool) arr_37 [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 3] [i_6] [i_7] [i_5] [i_13]))) : (arr_37 [i_5 - 2] [i_5]))));
                                arr_51 [i_13] [i_12] [i_7] [i_12] [i_5] = ((/* implicit */unsigned long long int) (signed char)-40);
                                var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1861682338561442425LL)) ? (((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) arr_14 [i_5] [i_12]))))) : (min((arr_0 [i_5 + 1]), (arr_0 [i_5 - 2])))));
                                arr_52 [i_13] [i_12] [i_12] [i_7] [i_12] [8ULL] [i_5] = ((/* implicit */int) (~((~(var_19)))));
                            }
                        } 
                    } 
                    arr_53 [i_7] [i_6] [i_5] = ((/* implicit */int) min((((0ULL) >> (((-1LL) + (56LL))))), (((unsigned long long int) arr_40 [i_5] [i_5 - 2] [i_5 - 1] [i_5 - 4]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                {
                    var_33 = ((/* implicit */int) (((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [(unsigned char)12] [i_5 - 1] [i_15]))))) << ((((+(3119985391830492388ULL))) - (3119985391830492356ULL)))));
                    var_34 &= (~(((min((((/* implicit */unsigned long long int) var_0)), (var_8))) << ((((~(((/* implicit */int) (_Bool)0)))) + (16))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */int) min((928470821U), (((((/* implicit */_Bool) arr_30 [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 - 1])) ? (var_19) : (((/* implicit */unsigned int) 2147483643))))));
                                arr_66 [i_5] [i_14] [i_14] [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) 0LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_67 [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_25 [i_5] [i_5])), (min((min((471995779996118437ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) arr_28 [i_5] [i_5] [i_5] [i_5])))))))));
    }
    var_36 += var_3;
}
