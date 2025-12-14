/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max((((!(arr_1 [i_0])))), (max((arr_1 [i_1]), 7495490549249311140))));
                var_18 = (arr_0 [i_0]);
                var_19 = ((-(max(4197391603, var_4))));
            }
        }
    }
    var_20 = (~(max(var_13, 7495490549249311162)));
    #pragma endscop
}
