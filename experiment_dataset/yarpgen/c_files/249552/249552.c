/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_3 ? (2448287153 || 2716023801) : var_16))) || 18446744073709551615));
    var_20 = var_13;
    var_21 = ((2716023790 ? 0 : (((~(~5186))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (2147483632 / 1660259613);
                var_23 = (max(1578943499, 1));
                var_24 = 18446744073709551594;
            }
        }
    }
    #pragma endscop
}
