/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(64, 64037));
                var_14 = (max(var_14, var_4));
            }
        }
    }
    var_15 = var_2;
    var_16 = (max(57628, var_3));
    var_17 = (~7907);
    #pragma endscop
}
