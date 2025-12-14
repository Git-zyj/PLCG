/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((4673 ? (var_15 ^ var_3) : ((var_4 ? var_16 : var_2)))), 151));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [16] [i_1] [i_3] [18] = (max((((-(arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_3])))), (arr_8 [0] [i_1] [18] [i_1] [i_4] [i_4])));
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((((~((296819825 ? 151 : -1)))) <= (!var_13)));
                                arr_15 [i_0] [i_1] [i_2 + 1] = min((arr_1 [i_0]), (arr_0 [i_0 - 1]));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] = (~var_17);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_0] = ((((((arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_1] [i_2] [i_2 - 2]) ? (arr_18 [i_0] [i_1] [i_2 - 2] [i_5]) : var_8))) ? (arr_11 [i_0] [i_0] [i_2] [i_5]) : var_9));
                        arr_20 [i_0] [i_1] [i_5] [i_5] [i_5] &= var_8;
                    }
                }
            }
        }
        arr_21 [i_0] = (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]);
        arr_22 [i_0] = max((((arr_4 [i_0 + 1] [i_0] [i_0]) ? 120 : (arr_4 [i_0 - 1] [i_0] [i_0]))), (max((arr_4 [i_0 - 1] [i_0] [i_0]), (arr_4 [i_0 - 1] [i_0] [2]))));
    }
    #pragma endscop
}
