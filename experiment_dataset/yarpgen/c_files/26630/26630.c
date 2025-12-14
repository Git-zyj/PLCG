/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(24527 / -28625)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (-var_9 * var_8)));
                var_15 += -var_9;
                var_16 |= (((5515819209195116980 | -32757) ? (~18446744073709551594) : 88448761));
            }
        }
    }
    var_17 = (((1 * (var_0 / var_10))));
    #pragma endscop
}
