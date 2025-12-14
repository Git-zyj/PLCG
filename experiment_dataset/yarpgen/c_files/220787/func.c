/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220787
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
    var_10 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) 6121910291986135503LL)) : (arr_8 [i_2])));
                    arr_9 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29434)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29434)) ? (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (short)-29438)) : (arr_3 [i_0] [i_4] [(unsigned char)2]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_4] [i_0] [i_1] [i_0]))))));
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((6933423875359023581ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                }
                /* LoopSeq 3 */
                for (long long int i_6 = 2; i_6 < 6; i_6 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0] [8])) ? (6933423875359023581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_2] [i_2] [(signed char)5] [i_0]))))) : (((/* implicit */unsigned long long int) (-(0U))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_24 [i_2] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned char) var_6);
                        var_14 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_6 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_2] [i_2])))));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_4))))))));
                    var_16 *= ((((/* implicit */_Bool) -1723702071)) ? (2963836456U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    arr_29 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_17 [i_1] [i_8])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_8] [i_2]))));
                }
                for (unsigned int i_9 = 3; i_9 < 7; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_23 [i_0] [i_9 + 1] [i_9 + 3] [i_9] [i_9 - 2] [i_9]) + (((/* implicit */int) (unsigned short)52642))));
                        var_17 *= ((/* implicit */_Bool) var_8);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (arr_3 [i_0] [i_1] [i_10]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_9 - 3])))))))));
                        arr_36 [i_2] [i_9 + 1] [i_2] [7] [i_2] = ((/* implicit */_Bool) arr_34 [i_0] [i_1] [(unsigned char)3] [i_2] [i_9] [i_10] [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) arr_33 [i_11] [i_9] [i_1] [i_1] [i_1] [i_0]);
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1238411579))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29434)) ? (-1723702071) : (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (short)29414)))))));
                    }
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_34 [i_9 + 2] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9]) / (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
                }
                var_23 = ((/* implicit */unsigned short) ((((arr_18 [i_0] [i_1] [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)4] [i_2])) ? (arr_6 [i_0] [i_1] [i_0] [9]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            }
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                var_24 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) arr_18 [i_12] [i_12] [i_1] [i_12])))));
            }
        }
        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            var_26 = ((/* implicit */short) arr_38 [i_0] [i_0] [i_0] [i_0] [i_13] [i_13]);
            var_27 = ((/* implicit */unsigned char) ((((arr_20 [i_0] [i_13] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_13]))) : (arr_41 [i_13] [i_0] [i_0])));
        }
        var_28 -= ((((/* implicit */_Bool) ((((-1238411580) + (2147483647))) >> (((arr_8 [i_0]) - (11982337232318736612ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [5U] [i_0]))) : ((((_Bool)1) ? (var_2) : (var_1))));
        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)242)) + (((/* implicit */int) (unsigned short)0))))) < (arr_20 [i_0] [i_0] [i_0])));
    }
}
