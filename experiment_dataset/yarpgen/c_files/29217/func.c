/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29217
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                var_19 *= ((/* implicit */short) (~(arr_0 [i_0])));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
            }
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((-(var_3))) : (((/* implicit */unsigned int) arr_0 [i_1]))));
                arr_12 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_1])) : (arr_8 [i_0] [i_1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)16] [(short)16]))) : (arr_8 [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (arr_10 [i_0])))))));
                arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)9]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_3 [i_0] [i_1] [i_3])))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_5))));
            }
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                var_23 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1] [i_4 + 3] [i_4 + 3])))));
                /* LoopSeq 2 */
                for (long long int i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_5] [i_4 - 1] [8LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    arr_20 [i_0] [i_5] [8ULL] [i_0] = ((/* implicit */unsigned char) arr_8 [i_4 - 2] [i_5] [i_5 - 2] [i_4 - 2]);
                    arr_21 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
                for (long long int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned int) (~(arr_15 [i_1] [i_4 + 3] [i_6 + 2])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_27 [i_7] [i_0] [i_1] [i_4] [i_6 - 1] [22U] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 + 1] [i_6] [i_6 + 3]))) & (((((/* implicit */_Bool) arr_23 [i_7] [i_6] [i_1] [i_4] [i_1] [i_0])) ? (arr_11 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        arr_28 [i_6] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_6] [i_6 + 3] [i_6])) ? ((-(var_16))) : (arr_16 [i_6 + 2] [i_6] [i_4 - 1] [i_6])));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_25 *= ((/* implicit */unsigned long long int) var_16);
                        var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_6 - 3])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_4 + 1] [i_8]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0] [i_4 + 1] [i_4] [2LL] [i_6 - 3] [i_0] [i_6])) ? (arr_32 [(unsigned char)10] [i_4 + 1] [i_4 - 2] [(signed char)1] [i_6 - 3] [i_4 - 2] [i_0]) : (arr_32 [i_0] [i_4 - 2] [i_4] [i_6 + 2] [i_6 - 3] [i_9] [i_9]))))));
                        var_28 = ((/* implicit */unsigned int) arr_25 [i_9] [i_6 + 3] [i_4 + 3] [i_1] [i_0]);
                    }
                    var_29 += ((/* implicit */unsigned char) (~(((var_8) ^ (var_7)))));
                }
                arr_34 [i_0] = ((/* implicit */short) var_10);
                var_30 = ((/* implicit */int) ((arr_18 [i_4 - 1] [i_1]) & (((/* implicit */long long int) var_7))));
            }
        }
        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_31 = ((/* implicit */short) (-(arr_16 [i_0] [i_10] [i_0] [i_0])));
            arr_39 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_31 [i_0] [i_0] [13LL] [i_10] [i_10] [i_10] [i_10])));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_1)))))));
            var_33 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            arr_44 [(short)19] [i_11] = ((/* implicit */unsigned char) arr_31 [i_0] [i_0] [10LL] [i_11] [i_11] [10LL] [i_11]);
            var_34 = ((/* implicit */unsigned char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [i_0] [i_11] [i_11] [i_0])))));
        }
        for (signed char i_12 = 4; i_12 < 21; i_12 += 2) 
        {
            var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [i_12 + 3] [18ULL] [i_0] [i_12] [i_12] [i_12 - 1])) ? (((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0]))) : (arr_24 [i_0]))) : (((/* implicit */long long int) var_3))));
            arr_49 [i_0] [i_0] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_6 [i_12] [i_12 - 2] [i_12 + 2] [i_12 - 3]) : (var_3)));
            arr_50 [i_0] = ((/* implicit */signed char) var_9);
        }
        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0]))));
    }
    var_37 &= ((/* implicit */_Bool) var_12);
}
