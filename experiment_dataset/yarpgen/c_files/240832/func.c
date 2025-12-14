/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240832
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) (short)-14739);
                    var_14 += ((/* implicit */_Bool) var_11);
                    arr_7 [i_0] [i_1] [i_2] = arr_3 [i_1] [i_1];
                }
            } 
        } 
    } 
}
