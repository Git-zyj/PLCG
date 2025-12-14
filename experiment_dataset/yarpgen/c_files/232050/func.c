/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232050
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
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) var_13);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_4] [i_2] [i_3] [i_4 + 3] [i_0] [i_1] = ((/* implicit */unsigned char) var_13);
                            var_16 = ((/* implicit */unsigned char) var_1);
                            var_17 += ((/* implicit */short) var_1);
                        }
                        var_18 |= ((/* implicit */unsigned short) var_13);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_1))));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_20 &= ((/* implicit */unsigned char) var_2);
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                        arr_17 [i_0] [i_1] [i_2] [13LL] = ((/* implicit */unsigned long long int) var_4);
                        arr_18 [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) var_5);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [(short)4] [i_0] |= ((/* implicit */_Bool) var_10);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_7)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            var_22 = var_9;
                            var_23 = ((/* implicit */unsigned short) var_9);
                        }
                        for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) var_8);
                            arr_30 [i_8] [i_8] [i_8] [i_1] |= ((/* implicit */unsigned long long int) var_3);
                            arr_31 [i_8] [i_6] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_2);
                        }
                        arr_32 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_6] [i_1] [i_6] [i_0] [i_9] = ((/* implicit */unsigned long long int) var_11);
                            arr_36 [i_6] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */signed char) var_11);
                            arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */long long int) var_3);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            arr_42 [(unsigned short)16] [i_0] [(short)21] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) var_8);
                            arr_43 [i_0] = ((/* implicit */long long int) var_9);
                            var_25 = ((/* implicit */unsigned char) var_11);
                            var_26 &= ((/* implicit */short) var_2);
                        }
                    }
                }
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_2))));
            }
        } 
    } 
}
