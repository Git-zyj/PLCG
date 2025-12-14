/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_10 << var_2) ? (var_3 >> 0) : (!60)))) ? var_2 : (((((max(var_6, var_8))) && (0 + var_0))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 += ((-39 ? var_2 : (~40)));
        var_13 = (max((arr_1 [i_0] [i_0]), (-53 - 1125882726973440)));
        arr_2 [i_0] = (max(((var_8 ? var_0 : (arr_0 [i_0]))), ((min((var_5 > var_3), var_0)))));
        var_14 = (max(var_14, ((min(-53, ((var_3 ? (arr_1 [4] [i_0]) : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 = (~var_4);
            var_16 = (var_5 / var_3);
            var_17 = (((arr_4 [i_1 + 1]) ? (arr_3 [i_1 - 2] [i_1 - 2]) : (((var_9 > (arr_6 [i_1] [i_1] [18]))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_18 = (min(var_18, ((((45 && var_10) > 19)))));
            arr_9 [20] [i_1] [i_1] = (arr_5 [i_1 - 3] [i_1]);
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_18 [i_6] [i_5] [1] [i_4] [i_6] = (((arr_3 [i_1 - 4] [i_5 + 3]) | var_1));
                        var_19 = (52 ? 5 : (-21604 - 7));
                    }
                }
            }
            arr_19 [i_1] [i_1] = var_3;
        }
    }
    #pragma endscop
}
