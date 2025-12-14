/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = -var_6;
                arr_5 [i_0] [i_0] [i_0] = (((((~9624) + 2147483647)) >> ((((min(-9625, -1))) + 9631))));
            }
        }
    }
    var_12 |= ((var_5 | (((-((0 ? var_7 : 4294967281)))))));
    var_13 = 23;
    #pragma endscop
}
