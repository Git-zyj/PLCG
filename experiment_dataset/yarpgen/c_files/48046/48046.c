/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max(-8082775026828383433, var_0)), var_14));
    var_20 = (max(var_20, (~var_3)));
    var_21 = (min(var_21, var_9));
    var_22 = (max((max(var_9, 23)), 50331648));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_23 = min(((var_8 ? (max(var_8, 8082775026828383445)) : ((((arr_2 [i_0]) ? 50331636 : var_5))))), (((var_0 && (arr_2 [i_0 + 1])))));
                var_24 = ((!((max((max(var_9, -1736364922)), (var_1 && var_11))))));
            }
        }
    }
    #pragma endscop
}
