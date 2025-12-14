/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235161
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [22ULL])) || (((((/* implicit */int) arr_1 [(unsigned char)16] [i_2 + 1])) <= (((/* implicit */int) arr_4 [22] [(short)8]))))));
                /* LoopSeq 3 */
                for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_16 *= ((/* implicit */_Bool) arr_10 [i_3 + 1] [i_2 + 1] [(short)4]);
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-126)) / (((/* implicit */int) (unsigned short)1983)))))));
                        arr_11 [i_1] [i_1] [i_3 + 1] [i_2 + 1] [i_1] [12LL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_4])) + (((/* implicit */int) arr_4 [i_1] [i_1]))));
                        var_18 = arr_9 [i_4] [(signed char)0] [i_2 + 1] [i_3] [(signed char)15] [i_0];
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_5 [i_0] [i_2 + 1] [i_3 - 1] [i_4]))));
                    }
                    for (short i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        var_20 -= ((/* implicit */short) ((arr_0 [i_3 - 1]) / (arr_0 [i_3 - 1])));
                        arr_14 [i_1] = arr_4 [i_1] [i_1];
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_6 + 1] [i_0] [i_3] [i_6] [i_1] [5]) >= (arr_17 [i_0] [i_6 - 1] [i_6 + 1] [i_3] [i_2 + 1] [i_0] [i_2 - 1])));
                        arr_19 [i_0] [0] [i_6] &= ((/* implicit */signed char) arr_3 [(short)0] [i_6]);
                        var_22 -= ((/* implicit */long long int) arr_3 [(unsigned short)0] [22]);
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_24 [(signed char)23] [(signed char)23] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_17 [i_2] [i_2] [11] [14] [i_2] [13] [i_2 + 1]);
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 393216ULL)) || ((_Bool)1)));
                        var_24 ^= ((/* implicit */short) arr_21 [i_3 + 1] [(short)11] [i_3] [i_7] [10] [i_7] [9ULL]);
                    }
                    arr_25 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) ((arr_2 [i_2] [i_1]) & (((/* implicit */int) arr_8 [i_2]))));
                }
                for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_27 [i_1] [i_1] [21LL] [21LL]) / (arr_27 [i_1] [i_1] [(short)15] [i_1])))) / (arr_16 [i_0] [i_1] [i_1] [(_Bool)1])));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_1] [(unsigned short)5] [i_8] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_2 + 1]);
                        var_26 = ((/* implicit */signed char) arr_5 [i_2 + 1] [i_2 + 1] [i_9 - 1] [i_9 - 1]);
                    }
                    arr_32 [16] [2U] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_13 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1]) / (arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                }
                for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_27 = ((/* implicit */signed char) arr_15 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_0]);
                    arr_35 [i_1] [i_2] [3LL] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1]);
                }
                arr_36 [i_1] [(unsigned char)15] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) ((((arr_13 [i_0] [i_1] [i_0] [i_0] [22LL]) + (((/* implicit */long long int) arr_22 [i_2])))) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [21] [i_1])))));
            }
            arr_37 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((arr_16 [(signed char)18] [(signed char)18] [i_1] [i_1]) << (((((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) + (85))))) >> (((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_1] [i_1] [(signed char)20])) + (95)))))) : (((/* implicit */unsigned short) ((((arr_16 [(signed char)18] [(signed char)18] [i_1] [i_1]) << (((((((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) + (85))) + (72))))) >> (((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_1] [i_1] [(signed char)20])) + (95))))));
        }
        for (short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((arr_17 [i_11] [i_11] [20] [i_11] [i_11 + 1] [i_11] [i_11]) << (((((((((/* implicit */int) arr_33 [i_11 - 1] [(unsigned char)6] [(signed char)2] [(signed char)2] [i_11] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_33 [(signed char)4] [i_11 + 3] [(signed char)20] [(signed char)18] [i_11] [i_11])) + (69))))) - (455))))))));
            /* LoopNest 2 */
            for (signed char i_12 = 4; i_12 < 21; i_12 += 2) 
            {
                for (unsigned char i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    {
                        arr_47 [i_0] [i_0] [i_12] [i_13] = ((/* implicit */short) ((((((/* implicit */int) arr_23 [(short)18] [14] [(short)18] [i_12] [(signed char)2])) + (((/* implicit */int) arr_23 [4] [i_12] [i_0] [i_12] [i_0])))) < (((((/* implicit */int) arr_20 [i_11 + 2] [(_Bool)0] [i_11 + 3] [i_12 - 2] [i_13 - 1])) + (((/* implicit */int) arr_20 [i_11 + 3] [i_11 + 3] [i_11 - 1] [i_12 + 1] [i_13 + 3]))))));
                        var_29 -= ((/* implicit */unsigned short) ((((((arr_2 [i_12] [i_12]) + (2147483647))) << (((((/* implicit */int) arr_7 [i_11 + 2] [i_12 + 2] [i_13 + 1] [i_11 + 2])) - (8902))))) % (((/* implicit */int) arr_7 [i_11 + 3] [i_12 + 3] [i_12] [(unsigned short)12]))));
                        arr_48 [i_13 - 2] [i_12 - 2] [i_11 + 3] [i_0] = ((/* implicit */int) arr_16 [i_13 - 1] [i_0] [i_12] [(short)12]);
                        arr_49 [i_0] [i_0] [i_11 + 3] [i_12] [i_0] [i_13 + 3] = ((/* implicit */int) arr_39 [i_11] [i_12]);
                        arr_50 [i_0] [i_11 - 1] [i_12] [i_12] [i_13] = ((/* implicit */signed char) arr_13 [4ULL] [i_11 - 1] [i_11] [(unsigned short)16] [i_13 - 1]);
                    }
                } 
            } 
        }
        for (signed char i_14 = 4; i_14 < 23; i_14 += 2) 
        {
            arr_54 [i_0] [i_0] [i_0] = arr_26 [i_0] [i_14];
            arr_55 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14] [0LL] [i_14] [i_14] [(unsigned short)10] [6]))) < (arr_5 [i_0] [i_0] [(short)11] [i_0])));
        }
        var_30 ^= ((/* implicit */signed char) arr_51 [3U]);
    }
    var_31 = ((/* implicit */unsigned short) var_11);
    var_32 = var_7;
}
