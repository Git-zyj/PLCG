/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_4 & var_5);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = var_3;
                var_15 *= (~56683);
                arr_4 [i_0] [i_1 + 1] [i_1] = ((!(var_0 % -53)));
            }
        }
    }
    var_16 = var_1;
    var_17 = (min(var_17, (~var_10)));
    #pragma endscop
}
