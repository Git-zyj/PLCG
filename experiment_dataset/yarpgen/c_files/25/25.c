/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 18446744073709551615));
                arr_7 [i_0] [i_0] [i_1] = arr_2 [i_0] [5];
                arr_8 [i_1] = 950138743190904291;
            }
        }
    }
    var_13 = (((~-var_1) ? (((1229 ? 950138743190904279 : -7516116564236972462))) : (((~var_5) ? (min(-7516116564236972472, var_4)) : (max(6880538423784896294, var_1))))));
    var_14 = (~var_8);
    var_15 = (var_8 && var_6);
    var_16 *= var_9;
    #pragma endscop
}
