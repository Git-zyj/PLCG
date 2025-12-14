/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8183820983053909536;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (max(((-(max(var_4, 8183820983053909536)))), ((min(((-(arr_2 [i_1 - 3]))), 23957)))));
                arr_7 [i_0] = (--41590);
                var_22 = 33099;
            }
        }
    }
    var_23 -= var_8;
    var_24 = var_17;
    #pragma endscop
}
