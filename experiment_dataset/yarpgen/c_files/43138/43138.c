/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((38 - 729396110) ? var_9 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_0] [i_0]);
                var_19 = (max(var_19, (~var_14)));
            }
        }
    }
    #pragma endscop
}
