/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51208
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
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */short) ((((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 3]))) + (((/* implicit */int) ((_Bool) arr_0 [i_0 + 3])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0 + 3] [i_0 + 1] = ((/* implicit */unsigned char) ((arr_0 [i_0]) > (((/* implicit */int) arr_5 [i_0]))));
            var_23 = ((/* implicit */unsigned short) ((signed char) arr_4 [i_0] [4U] [i_0]));
        }
        arr_7 [i_0] = ((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1]);
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0]))) && (((/* implicit */_Bool) arr_0 [i_0 + 3])))) && (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
        {
            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (arr_10 [i_3 - 2] [i_3 - 1])));
                    var_26 = ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2 + 1] [9ULL])) && (((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 3] [i_2]))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 24; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_28 = arr_21 [i_6 + 1] [i_5] [16U] [i_5 - 1] [i_2 + 1] [(_Bool)1];
                            arr_25 [i_6] [i_5] [i_6] [i_5] [i_8] [20] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2 + 2] [(_Bool)1] [i_2]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_17 [i_2] [i_5] [i_6] [i_7])) | (arr_21 [(short)16] [i_2] [(short)16] [i_6 - 2] [i_7] [(signed char)9]))));
                            arr_28 [i_2 + 2] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned char) ((arr_21 [i_2] [i_5 + 1] [i_6] [i_5 + 1] [i_6] [i_6]) >= (arr_21 [i_2] [i_5] [i_6 - 2] [i_7] [i_2] [i_9])));
                            var_30 = ((/* implicit */unsigned int) ((((arr_16 [21U] [i_6 - 1]) + (9223372036854775807LL))) << (((((var_15) + (342459169))) - (11)))));
                            var_31 *= ((/* implicit */unsigned int) ((short) (-2147483647 - 1)));
                        }
                        arr_29 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((var_4) + (((/* implicit */unsigned int) arr_12 [i_2] [i_5] [i_6 - 1] [i_5])))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [9ULL] [i_6] [i_7] [i_6]))) + (var_6)))));
                        arr_30 [i_2] [i_6] [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_2 + 3] [i_2] [i_2] [i_2 + 3] [i_2])) >> (((((/* implicit */int) arr_9 [i_2 + 1])) - (7901)))));
                        var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_6 - 1] [i_5 + 1] [i_2 + 2])) && (((/* implicit */_Bool) arr_13 [i_2] [i_5] [i_6 - 1]))));
                    }
                } 
            } 
        } 
        arr_31 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2])) && (((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2] [5U] [i_2 + 2]))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        arr_42 [i_2] [i_2] [i_11] [15LL] [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_2 + 1])) ^ (((/* implicit */int) arr_26 [i_10] [24ULL] [i_12] [i_12 - 3] [4LL] [i_12] [i_12 - 1]))));
                        var_33 = ((/* implicit */unsigned long long int) arr_15 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        for (signed char i_14 = 2; i_14 < 23; i_14 += 1) 
                        {
                            {
                                arr_47 [i_14] [i_10] = arr_22 [i_2] [i_2 + 1] [i_2 + 1] [(signed char)14] [i_11];
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned int) arr_32 [i_2 - 1])))));
                                var_35 = ((/* implicit */short) arr_46 [i_14] [i_14] [i_11] [i_10] [i_14] [i_2]);
                                var_36 -= ((/* implicit */long long int) arr_46 [16] [i_11] [i_14] [i_14 + 2] [i_11] [i_14 - 1]);
                            }
                        } 
                    } 
                    arr_48 [i_10] = ((/* implicit */int) ((arr_10 [i_2 + 3] [i_10]) >> (((arr_10 [i_2 + 2] [i_2]) - (5653664586872492809ULL)))));
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */long long int) 888476627U)) / (-6330828881062305015LL))))));
                }
            } 
        } 
    }
}
