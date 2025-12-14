/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ? var_4 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1 + 3] |= var_9;
                var_15 = (min((min((-12 * -74), 10952)), var_4));
            }
        }
    }
    #pragma endscop
}
