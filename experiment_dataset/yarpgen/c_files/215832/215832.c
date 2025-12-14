/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (-(max(var_3, (arr_6 [i_2 - 3] [i_2 - 3] [i_2 + 4] [i_2 + 2]))));
                    var_15 = ((((((~0) & (var_13 ^ 94)))) ? (arr_6 [i_0] [i_1] [i_1] [i_0]) : (((((min(215, 195))) ? 195 : (~68))))));
                }
            }
        }
        var_16 = (((14532601545564031594 ? 0 : (arr_6 [i_0] [i_0] [i_0] [0]))));
        var_17 -= (14532601545564031605 | 0);
        arr_7 [i_0] [i_0] = (((((~(arr_2 [i_0])))) ^ (184 & 18446744073709551614)));
    }
    var_18 = ((~(min((min(210, var_2)), (41 <= 3914142528145520011)))));
    var_19 *= 0;
    #pragma endscop
}
