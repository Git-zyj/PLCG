/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((3018570887 ? var_6 : var_8)) >> (var_5 + 8829389327372373406))));
    var_12 = (max(var_12, 8297229713606683068));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 -= (((((4055627062 | 239340233) | var_10)) & (((arr_0 [i_0] [i_1]) ? (~2078309632) : 4055627062))));
                arr_5 [i_0 + 2] |= ((-3630614560729344063 ? -3630614560729344080 : -3630614560729344038));
                arr_6 [i_0] [i_0] = (max(4055627063, (max(-3630614560729344059, 13))));
                var_14 = ((-3630614560729344080 ? 3630614560729344060 : var_10));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_2] = -3630614560729344063;
                    var_15 = ((((3630614560729344063 ? var_10 : (arr_2 [i_0 + 1] [i_0 - 2]))) | -3630614560729344080));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_16 *= 3702989161;
                    arr_14 [i_3] [i_1] [i_1] [i_0] = (((arr_7 [3] [13] [i_0] [i_0 + 2]) ? (1625125963 & var_0) : ((var_1 / (max(1629776862, 31))))));
                    arr_15 [i_0] [i_1] [i_0] = ((var_7 ? ((((0 ? 1276396402 : 1)) - (arr_13 [i_0] [i_0] [i_0]))) : 1));
                }
            }
        }
    }
    #pragma endscop
}
