/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214045
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
    var_18 = ((/* implicit */_Bool) 1927766248U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1]))));
                arr_7 [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            }
        } 
    } 
}
