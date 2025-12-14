/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0 - 1] = var_11;
                    var_13 = ((((max(32762, var_3))) ? (((var_3 + 9223372036854775807) >> (-7362784529473406993 + 7362784529473407032))) : 7362784529473406992));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_14 = ((-13047 ? (max((~var_11), ((-22528 ? var_7 : -22)))) : (max((~var_9), 6752))));
                var_15 = (max(((1 ? var_7 : var_10)), ((min(((28 ? var_2 : 7362784529473406992)), ((var_6 ? var_9 : var_12)))))));
                arr_17 [i_3] [i_3] [i_3] = (((~var_6) ? 1 : ((var_0 ? 21964 : 153))));
            }
        }
    }
    var_16 = ((((max((~var_3), var_7))) ? (max(((7362784529473406985 ? -60 : var_12)), var_11)) : -61440));
    var_17 = 276004058747293231;
    #pragma endscop
}
