/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195319
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) ((int) (+(((arr_9 [i_0] [i_1 + 2] [i_1 + 4] [12] [(short)6] [i_4]) - (1438736824))))));
                                var_21 = ((/* implicit */unsigned int) var_7);
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_7))));
                                var_23 = arr_2 [i_2];
                            }
                        } 
                    } 
                    arr_12 [i_1] = var_19;
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */int) ((short) (~(7))));
    var_25 = (+(((int) 755387466416426210ULL)));
}
