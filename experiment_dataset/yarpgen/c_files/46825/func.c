/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46825
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
    var_18 += ((/* implicit */signed char) var_8);
    var_19 = var_9;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_21 |= arr_2 [i_0];
                }
            } 
        } 
    } 
}
