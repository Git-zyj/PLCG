/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22209
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
    var_15 ^= ((/* implicit */_Bool) var_10);
    var_16 = var_3;
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned long long int) var_6)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_11))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_0] [i_3] = var_12;
                                var_20 = ((/* implicit */_Bool) var_3);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                arr_20 [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) var_7));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_10))));
                                var_22 ^= ((/* implicit */long long int) ((unsigned long long int) ((_Bool) var_12)));
                                var_23 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) 
                            {
                                arr_23 [(signed char)14] [i_3] [i_3] [i_2] [i_3] [(signed char)13] [i_0 + 1] = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                                var_24 -= ((/* implicit */unsigned int) ((signed char) var_6));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
