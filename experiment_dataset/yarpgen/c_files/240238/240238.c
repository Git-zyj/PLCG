/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (10 ? 33769 : (min(-92, 17583596109824)));
    var_12 = (~8679568443683454832);
    var_13 *= 18446726490113441780;
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (-(((arr_0 [i_0] [i_0]) - (((arr_1 [i_0] [i_0]) ? var_1 : var_5)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_16 = ((+((+((var_10 ? (arr_1 [i_0] [i_0]) : -4))))));
            var_17 = (((max(8679568443683454832, (arr_0 [i_1 - 1] [i_1 + 1]))) + -var_4));
            var_18 = (((((max(var_2, 284855446)))) ? ((((46 / 18446726490113441783) < (arr_3 [i_1])))) : (((((min((arr_1 [5] [i_1]), 105))) == (arr_2 [i_0]))))));
        }
        var_19 = (((max(17583596109842, (arr_1 [i_0] [14])))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_20 *= (((((min(((var_7 ? var_0 : var_3)), ((8679568443683454832 ? var_7 : var_6)))) + 2147483647)) >> ((((((((arr_4 [i_2 - 1]) ? 131 : var_9))) ? (min(142, var_5)) : (((-8231364755232667903 + (arr_6 [i_2 + 1])))))) - 115))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2 + 1] [i_3] [i_4] = 113;
                    arr_16 [i_2 + 1] [i_3] [i_4] = (((17583596109849 | (arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                    arr_17 [3] = (min(((103 ? (arr_10 [i_3 + 1] [i_2 - 2]) : 17583596109824)), 110));
                }
            }
        }
    }
    #pragma endscop
}
