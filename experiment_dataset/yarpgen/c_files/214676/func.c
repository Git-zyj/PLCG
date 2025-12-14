/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214676
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
    var_10 = var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) arr_3 [i_0]);
                            var_12 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] [i_4] = arr_2 [i_0] [i_0];
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_5 [i_2] [i_2] [i_2];
                                var_14 *= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_2]);
                            }
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3] [i_2] [i_2]))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))));
                                var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                                var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                            }
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0]);
                            var_19 = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_1] [i_2] [i_3] [i_1] [i_2] [i_1]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                var_21 *= ((/* implicit */short) arr_2 [i_0] [i_1]);
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_20 [i_0] [i_0] = arr_5 [i_0] [i_1] [i_1];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            {
                arr_25 [i_6] [i_6] [i_6] |= ((/* implicit */short) arr_23 [i_6] [i_6] [i_6]);
                var_23 = ((/* implicit */int) arr_24 [i_7] [i_7]);
            }
        } 
    } 
}
