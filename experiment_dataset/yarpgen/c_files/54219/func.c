/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54219
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_2] = ((/* implicit */short) ((arr_4 [i_0 + 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        var_13 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))) % (arr_11 [i_0] [i_1] [i_2])));
                    }
                    for (long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */int) arr_3 [i_0 + 1] [i_4 - 2]);
                        arr_15 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1 + 1])))) ? ((~(arr_5 [i_1 + 2] [i_4 - 2] [i_0 - 1]))) : (min((3875404491313631629LL), (arr_4 [i_1 - 1])))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0 - 1] [i_0 + 1]))) || (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1]))) < (arr_1 [(unsigned char)1]))))) != (((var_0) >> (((((/* implicit */int) var_7)) - (63480)))))))));
                            arr_18 [(short)11] [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */short) ((((arr_5 [i_1] [16ULL] [(signed char)13]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (63452)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_2] = ((/* implicit */int) (unsigned short)21189);
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_21 [i_0] [i_0] [i_0] [(short)3])))), (max((-3875404491313631633LL), (403179064836121060LL)))))), (((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((arr_10 [i_0] [9LL] [i_2] [i_4]) - (15371080797886949442ULL)))))) ? (((((/* implicit */_Bool) arr_2 [i_4] [i_2])) ? (((/* implicit */unsigned long long int) arr_0 [(short)3] [(short)3])) : (var_9))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_2] [i_6] [(signed char)6] [(short)0])))))))));
                            var_17 |= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2]))) & (((arr_17 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (min((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_0] [i_4] [i_6])), (5818067134371160011LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)11] [i_6])) ? (0) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_4] [i_4])))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */short) arr_13 [i_0] [i_1 + 2] [i_2] [i_4 - 1]);
                            var_20 = ((/* implicit */unsigned short) (-(arr_13 [i_0] [i_7 - 1] [i_1 - 1] [i_0 + 1])));
                            arr_25 [i_2] [i_4] [i_2] [i_4] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)3840)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_13 [i_0] [i_1] [i_2] [i_4]))) >> (((((((/* implicit */_Bool) -3)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned short)21344)))) - (61)))));
                        }
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */int) ((arr_11 [i_0] [i_1] [i_8]) >= (((/* implicit */long long int) -21))))) ^ ((~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [(unsigned char)10])))))))));
                            var_22 += ((/* implicit */signed char) min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [13U] [i_0]), ((unsigned short)3850)));
                            var_23 -= ((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_1])));
                            var_24 ^= ((/* implicit */unsigned char) arr_29 [i_4] [i_1] [i_2] [i_4]);
                        }
                    }
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(arr_19 [i_0] [i_0 + 1] [i_1] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) -4900750980972444369LL)) ? (((/* implicit */int) (short)-25004)) : (((/* implicit */int) (unsigned short)49969)))), (var_2)));
    /* LoopNest 2 */
    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            {
                var_27 = ((/* implicit */unsigned short) arr_9 [(signed char)4] [(signed char)4] [i_9] [3ULL] [(signed char)4] [i_9]);
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_38 [i_9] [i_10] [i_11] = ((/* implicit */short) ((long long int) arr_7 [i_9] [(unsigned short)5] [i_9] [i_9]));
                    var_28 ^= ((/* implicit */long long int) max((((unsigned short) arr_10 [i_11] [i_10] [i_10] [i_9])), (((/* implicit */unsigned short) var_1))));
                    var_29 = ((/* implicit */unsigned char) arr_3 [i_9] [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (signed char i_13 = 3; i_13 < 12; i_13 += 2) 
                        {
                            {
                                arr_45 [i_9 - 1] [i_9 + 2] [i_9] [i_9] [i_9] [i_9 + 2] [i_9 - 1] = (((-(arr_4 [i_9 - 1]))) % (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_9] [i_10] [i_11] [i_12] [i_13]))));
                                var_30 -= ((/* implicit */signed char) arr_7 [i_10] [i_10] [(signed char)16] [i_13]);
                                arr_46 [i_9] [i_12] [i_9] [i_9] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9 - 1] [i_13 - 3]))) - (((((/* implicit */_Bool) (-(-433531065)))) ? (((/* implicit */long long int) min((var_2), (-1)))) : (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))))))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 2030608587U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
                arr_47 [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) min(((~(-3875404491313631633LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9 + 4])))))));
            }
        } 
    } 
}
