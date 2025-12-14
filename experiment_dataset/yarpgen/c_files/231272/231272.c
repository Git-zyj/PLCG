/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_10 - (13019900768024460687 * 0)))) ? var_5 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_1 [i_0])));
                arr_5 [i_0] [i_0] = ((13019900768024460710 >> (-34 + 86)));
                var_21 += (arr_0 [i_0]);
            }
        }
    }
    var_22 = (~420590383);
    var_23 |= var_16;
    #pragma endscop
}
