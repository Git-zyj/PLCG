/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 |= (max((min(var_19, (arr_3 [i_0 - 1] [i_1] [i_0]))), (max(((1943351594 ? 0 : 0)), 1))));
                var_21 = (max(var_21, 25713));
            }
        }
    }
    var_22 = -1922;
    var_23 = (min(-44, (min(49260, var_15))));
    var_24 = (max(var_24, 23071));
    #pragma endscop
}
