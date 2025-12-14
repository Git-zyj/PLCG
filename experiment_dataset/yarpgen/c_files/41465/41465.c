/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = 1041913404;
                var_15 = ((var_12 || (arr_4 [i_1] [i_1 - 1] [i_1])));
            }
        }
    }
    var_16 = (min((min(var_0, (min(-6579, var_12)))), var_1));
    var_17 = (((max((((var_11 ? var_9 : var_2))), var_13))) || ((((((-82 ? 3253053892 : 1))) ? 780925178 : 718917877))));
    var_18 = (min(var_18, var_6));
    #pragma endscop
}
