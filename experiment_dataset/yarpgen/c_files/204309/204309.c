/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [1] &= (((~(arr_5 [i_0] [i_0] [i_0]))));
                            arr_14 [i_3] [i_3] [i_3] [i_3] = 1;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_13 = (((arr_11 [i_1] [i_1] [i_1] [i_0]) << (var_1 - 57256)));

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_23 [8] [i_4] [i_5] [i_1] [6] = ((8 ? var_10 : (arr_19 [4] [4] [4])));
                        var_14 = ((!(arr_10 [i_4] [i_5 + 1] [i_5 + 1] [i_5])));
                        var_15 += ((((((arr_5 [i_0] [i_1] [i_4]) ? 64 : var_12))) ? (arr_17 [i_0] [i_1]) : var_7));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_1] [i_4] [12] [i_6] = ((var_8 < (arr_12 [i_6] [18] [i_6] [i_6] [i_7] [i_7])));
                                var_16 = var_7;
                                var_17 = (arr_30 [i_4] [i_4] [i_4] [i_4] [8]);
                                var_18 = (min(var_18, ((((arr_20 [i_6] [i_1]) ? (arr_20 [i_0] [i_7]) : (arr_20 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
