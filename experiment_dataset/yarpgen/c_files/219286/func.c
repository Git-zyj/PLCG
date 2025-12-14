/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219286
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1 - 1] [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_2] [i_1]);
                    var_16 = ((/* implicit */_Bool) arr_3 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_5 [i_2]))));
                                var_18 = ((/* implicit */long long int) arr_7 [i_2] [i_3] [i_3] [i_1]);
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = arr_6 [i_2 - 1] [i_2 - 1];
                                var_19 = ((/* implicit */unsigned short) arr_3 [i_1]);
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */signed char) arr_11 [i_0] [i_1 + 2] [i_2] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_3 [i_5]);
                        var_22 = ((/* implicit */unsigned int) arr_7 [i_2] [i_2] [(_Bool)1] [i_2]);
                        var_23 = ((/* implicit */unsigned int) arr_16 [i_1]);
                    }
                }
            } 
        } 
    } 
}
