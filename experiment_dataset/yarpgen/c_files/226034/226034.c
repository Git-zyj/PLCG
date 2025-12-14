/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 38624;
        var_12 = (((arr_1 [i_0] [i_0 - 1]) ? (var_1 > var_7) : (max(3774917, -2048083627536669086))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_13 = (arr_3 [5] [i_1 - 3]);
        var_14 = (min(var_14, (arr_4 [i_1] [i_1])));
    }
    var_15 &= ((var_11 ? ((2048083627536669085 ? (min(506930702513504315, -1213940252)) : (~var_6))) : var_8));
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            {
                var_17 = 15539;
                var_18 = ((!(arr_9 [i_2] [i_3] [i_3])));
            }
        }
    }
    var_19 = (~49);
    #pragma endscop
}
