/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = ((var_6 > (((1588206575 | -1) ? var_10 : (9223372036854775807 + var_6)))));
    var_14 = ((((var_8 || (!var_8))) ? var_10 : (-1588206575 && -1588206590)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -8573315207128499262;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (--8961978034175312528);
                    arr_9 [i_0] [1] [i_1] = (((arr_0 [i_0 - 4] [i_0 - 2]) >= (arr_1 [i_0 - 2])));
                    var_16 = -1588206556;
                }
            }
        }
        arr_10 [i_0] = (((arr_7 [i_0 - 2] [i_0] [i_0 - 2]) ? (((arr_5 [i_0]) * var_2)) : (((1 ? 65535 : 1869971373)))));
        var_17 = (arr_4 [i_0] [i_0 - 4] [i_0]);
    }
    #pragma endscop
}
