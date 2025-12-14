/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201703
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
    var_19 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                            {
                                arr_15 [i_1] [(unsigned short)2] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_16);
                                arr_16 [i_0] [i_1] [i_0] [i_1] [(unsigned short)6] [i_4] = ((/* implicit */int) arr_10 [(_Bool)1] [i_1] [0U] [i_1]);
                                var_20 = ((/* implicit */int) var_8);
                            }
                            for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
                            {
                                var_21 *= var_6;
                                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_3]);
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [4U] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]);
                                var_22 *= ((/* implicit */signed char) arr_14 [22U] [15U]);
                            }
                            var_23 = ((/* implicit */unsigned int) var_7);
                            var_24 = ((/* implicit */_Bool) arr_14 [i_1] [i_2]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [(unsigned short)15]);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_27 [i_7] [i_1] [16] [i_7] &= ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_6] [i_0]);
                            var_26 += ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_6] [i_7]);
                            var_27 *= ((/* implicit */signed char) var_15);
                            var_28 += ((/* implicit */short) arr_4 [i_7] [13ULL] [i_1]);
                            var_29 ^= arr_6 [i_0] [i_6] [i_7];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (signed char i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) arr_23 [(_Bool)1] [i_1] [i_8] [(_Bool)1]);
                            var_31 = ((/* implicit */int) max((var_31), (arr_3 [i_9])));
                        }
                    } 
                } 
            }
        } 
    } 
}
