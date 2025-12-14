/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;
    var_15 = var_5;
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (max((((((((arr_2 [i_0] [1] [i_1]) | (arr_3 [i_0] [i_0] [i_1])))) ? var_7 : (min(var_0, var_5))))), (((arr_3 [i_0 - 2] [i_0] [i_0 - 1]) ? (min(15879877656473103222, 15879877656473103218)) : var_11))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = arr_1 [i_2] [i_3];
                                arr_14 [i_0 - 2] [i_2] [i_3] [i_4] = 1654498433;
                            }
                        }
                    }
                }
                var_18 = (((((114523790 ? (arr_5 [0] [0]) : var_3))) ? ((((arr_8 [i_0 - 3] [1] [13] [i_1] [i_1] [i_1]) == (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])))) : ((((((arr_10 [i_0] [i_0] [i_0] [1] [i_1] [i_0] [i_1]) / var_11))) ? (arr_10 [i_0 + 1] [i_0 + 1] [20] [20] [i_0 - 1] [i_0 - 3] [i_0 - 1]) : var_8))));
                var_19 = (min(var_19, (((~((max((arr_11 [12] [i_0 - 3]), (arr_11 [14] [i_0 + 1])))))))));
                var_20 = (arr_3 [i_0] [i_0 - 1] [i_1]);
            }
        }
    }
    #pragma endscop
}
