/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240514
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
    var_18 = var_1;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = var_15;
                    arr_7 [i_0] [(signed char)13] [i_1] [i_2] = var_13;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((signed char) var_10)))));
}
