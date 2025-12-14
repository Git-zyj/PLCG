/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_20 = var_14;
        var_21 = ((3215770699348103614 ? 14351181131975868517 : 18446744072635809792));
        var_22 = (((((((var_0 ? var_1 : 3215770699348103614))) ? ((var_15 ? var_15 : (arr_1 [i_0] [i_0]))) : (8013777789195838974 == var_11))) << (((arr_0 [i_0]) - 1774443175))));
        var_23 = (min((min(var_13, (arr_1 [i_0] [10]))), (((((min(var_12, var_6))) || (arr_1 [i_0 - 3] [i_0 - 3]))))));
        arr_2 [i_0] [i_0] = var_17;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] [i_1] = 1;
                var_24 ^= var_18;
                var_25 *= var_3;
            }
        }
    }
    var_26 = ((((((((var_11 ? var_19 : 15230973374361448002)) == ((var_6 ? 3215770699348103604 : var_19)))))) >= var_12));
    #pragma endscop
}
