/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = ((31744 ? (9714 + 11820735657219086685) : ((((min(var_5, var_13))) ? ((9223372036854775807 ? var_14 : var_11)) : 658871532))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((max(-4457108799198444935, var_13)));
                var_19 -= (((((var_16 != var_0) ? (31744 | var_10) : var_2))) ? ((((13162 <= ((var_15 ? var_11 : var_13)))))) : (((((var_3 ? var_2 : 2402701243))) ? ((480 ? 31744 : 3)) : 12582912)));
            }
        }
    }
    #pragma endscop
}
