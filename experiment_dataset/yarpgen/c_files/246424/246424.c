/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = var_7;
                                arr_12 [i_4] [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((((((arr_4 [i_1] [i_1 + 1] [i_4]) ? (arr_4 [i_1] [i_1] [i_4]) : (arr_4 [i_1] [i_1] [i_1])))) ? 4112060216551322285 : (~var_14)));
                                arr_13 [i_0] [i_1] [i_1] [3] [i_3] [i_4] = (arr_8 [i_1] [i_1] [i_2] [i_0 - 1] [i_4] [i_1]);
                            }
                        }
                    }
                    arr_14 [20] [i_1 + 2] [i_1] = (arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_2]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = (-4112060216551322286 >= var_6);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_20 = ((((((arr_20 [i_5] [i_5] [i_5]) ? (max(4112060216551322285, -4112060216551322285)) : var_7))) ? (max(4112060216551322297, var_12)) : -4112060216551322295));
                        arr_25 [i_8] [i_7] [i_6] [i_5] = (min((((arr_18 [5] [i_6] [i_6]) ? (arr_18 [i_5] [10] [i_8]) : (arr_18 [i_5] [i_5] [i_7]))), (arr_18 [i_5] [8] [7])));
                    }
                }
            }
        }
    }
    var_21 = (((~-4112060216551322286) / ((-((-4112060216551322285 ? -4112060216551322300 : -4112060216551322295))))));
    var_22 = var_3;
    #pragma endscop
}
