/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246569
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
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [4ULL] [i_1] [i_2 + 2] [i_4]);
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_0 [i_4]))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) arr_4 [i_0]);
                        var_17 += ((/* implicit */_Bool) arr_4 [i_0]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */short) arr_15 [i_1] [i_1] [i_1] [i_1]);
                        arr_18 [i_0] [i_1] [i_2] [i_6] &= ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_6]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_23 [i_1] |= arr_7 [i_0] [i_0] [i_0];
                        var_19 = ((/* implicit */long long int) arr_17 [i_7] [i_7] [i_2] [13]);
                    }
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_25 [(unsigned short)0])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_32 [(short)13] [i_9] [(unsigned short)18] [i_9] [i_9] [i_9]);
                            var_23 = arr_30 [i_10] [i_9] [i_8];
                            arr_36 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */long long int) arr_24 [i_11]);
                        }
                    } 
                } 
            }
        } 
    } 
}
