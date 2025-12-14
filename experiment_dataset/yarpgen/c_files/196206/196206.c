/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_6;
    var_13 = ((((max(var_3, var_10))) ? var_6 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 |= var_7;
                arr_5 [i_0] [14] |= ((1 ? 3866536717633274065 : -1));
            }
        }
    }
    #pragma endscop
}
