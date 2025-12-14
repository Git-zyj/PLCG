/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53654
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
    var_19 ^= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_11 [i_2] [i_3] [3LL]))));
                                var_22 = ((/* implicit */unsigned char) arr_14 [i_2] [i_3] [i_4] [i_5]);
                            }
                        } 
                    } 
                } 
                arr_20 [i_2] [i_3] [i_3 - 3] = ((/* implicit */long long int) arr_9 [i_2] [i_3 - 3]);
                var_23 ^= arr_12 [i_2] [i_3];
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_26 [i_2] [i_2] = arr_22 [i_2];
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                            {
                                arr_29 [i_9] [i_9] = ((/* implicit */long long int) arr_25 [(unsigned char)13] [i_3] [(unsigned short)7] [15ULL]);
                                arr_30 [16ULL] [i_3] [i_3] [i_9] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) arr_21 [i_2] [i_3 - 2] [(unsigned char)8]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_42 [i_10] [i_11] [i_12] [i_14] = ((/* implicit */short) arr_28 [i_10]);
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) 2230497728U))));
                                var_25 = ((/* implicit */unsigned long long int) arr_10 [i_14]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            arr_48 [4ULL] [4ULL] [11U] = arr_24 [i_16] [i_15] [i_11] [i_10];
                            var_26 = ((/* implicit */long long int) arr_15 [i_11] [i_10]);
                            arr_49 [(short)9] [i_11] [i_15] [i_16] = ((/* implicit */unsigned char) arr_8 [i_11] [i_16]);
                            arr_50 [i_16] [i_11] = ((/* implicit */unsigned char) arr_18 [i_10] [(short)5] [i_15] [i_16] [i_16]);
                            arr_51 [i_10] [i_10] [i_10] [8ULL] [i_15] [i_16] = ((/* implicit */unsigned short) 3841528974U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_5);
}
