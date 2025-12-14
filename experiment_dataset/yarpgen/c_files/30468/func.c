/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30468
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
    var_14 = var_13;
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) var_2);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_12);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_1] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) var_8);
                            var_17 = ((/* implicit */unsigned long long int) var_5);
                            arr_16 [i_1] [(unsigned char)11] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) var_11);
                            arr_20 [(short)4] [(short)4] [i_1] = ((/* implicit */unsigned long long int) var_7);
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
                            var_18 = ((/* implicit */unsigned long long int) var_5);
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) var_2);
                            var_20 = ((/* implicit */unsigned long long int) var_2);
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */int) var_2);
                            arr_26 [2U] [i_1] [i_0] [3] [i_0 - 3] = ((/* implicit */int) var_6);
                        }
                        var_21 = ((/* implicit */long long int) var_13);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) var_9);
                        var_23 = ((/* implicit */short) var_6);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_24 = var_5;
                            var_25 = ((/* implicit */unsigned char) var_5);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_5);
                            var_27 = ((/* implicit */short) var_7);
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [i_1] [i_1] [i_2] [i_7] [i_10] [4LL] = ((/* implicit */_Bool) var_12);
                            var_28 = ((/* implicit */short) var_4);
                            var_29 = var_7;
                        }
                        var_30 = ((/* implicit */int) var_10);
                    }
                    arr_36 [i_1] = ((/* implicit */unsigned int) var_10);
                }
                for (short i_11 = 3; i_11 < 13; i_11 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) var_7);
                                arr_44 [i_1] [i_12] [i_11 - 1] [i_1] [i_1] = ((/* implicit */short) var_9);
                                arr_45 [i_1] = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    arr_46 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                    var_33 = ((/* implicit */long long int) var_2);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) var_5);
}
