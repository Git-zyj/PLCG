/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((var_18 ? var_10 : 4135794434))) ? 3891 : 4294967282));
                var_20 = ((0 + ((1 ? (-2247111130213648142 + var_4) : -11991))));
                var_21 |= var_16;
                var_22 = -384213689;
            }
        }
    }
    var_23 = ((307081611 ? 31797 : (1 + 2)));
    #pragma endscop
}
