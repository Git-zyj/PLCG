/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = 5726143774262780794;
                            arr_11 [i_0] [i_3] [i_0] [i_0] = (((((1 ? ((var_1 << (((arr_5 [i_0]) + 948576469)))) : (arr_9 [i_0] [i_1] [i_0] [i_2 - 1] [i_3])))) && 122));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_3] [i_0] = (((arr_2 [i_0] [i_1 + 1]) ? ((min((arr_2 [i_0] [i_1 + 1]), 37433))) : (37451 / 59279)));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((3584 ? (((20226 ^ 6976) * ((59279 ? 61945 : var_8)))) : var_6)))));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = ((-2147483647 - 1) ? -9082 : 28103);
        var_19 = (min(var_19, (((((((arr_13 [i_4]) ? 3169223066420265860 : (arr_13 [i_4])))) ? (((arr_13 [i_4]) ? 57112 : (arr_14 [i_4]))) : 0)))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = var_9;
        var_21 = ((12253607980352738782 ? (((var_0 > (arr_14 [i_5])))) : ((min(65517, (arr_14 [i_5]))))));
    }
    #pragma endscop
}
