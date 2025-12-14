/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27518
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
    var_12 += ((unsigned char) ((unsigned char) ((int) var_11)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1]);
                    var_13 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_14 = arr_4 [i_0] [i_1] [i_2];
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_15 ^= ((/* implicit */long long int) arr_9 [i_3] [i_3] [i_3] [i_3]);
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((int) ((unsigned int) ((long long int) arr_10 [1ULL] [1ULL]))));
                        var_17 = ((/* implicit */unsigned char) arr_12 [i_0] [i_4] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((int) ((int) ((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5]))));
                        var_19 -= ((/* implicit */long long int) ((int) arr_13 [1U] [1U] [i_3] [i_3] [i_5]));
                    }
                    for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((short) arr_17 [i_0] [i_6]));
                        arr_21 [i_6] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [3U] [i_1] [i_3] [i_6] [i_6] [i_0]);
                        var_21 = ((/* implicit */int) arr_18 [i_6 - 2] [i_3] [i_1] [i_1] [i_0]);
                        var_22 *= ((/* implicit */short) arr_3 [i_3] [i_0]);
                        var_23 *= ((/* implicit */unsigned int) arr_12 [(short)1] [i_1] [i_3]);
                    }
                }
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((int) arr_0 [i_1])))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned char) arr_1 [i_7] [i_1]);
                    arr_24 [i_0] [i_7] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_33 [1] [i_1] [i_8] [i_9] [i_0] [i_8] [0ULL] = ((/* implicit */int) arr_28 [i_0] [i_1] [i_8]);
                                var_27 = ((int) ((short) arr_4 [i_0] [i_0] [(short)11]));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) ((short) ((unsigned short) arr_2 [5ULL])));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((short) var_2))));
}
