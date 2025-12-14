/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1 - 1] [i_1 + 1] [i_1] = var_1;
                    var_11 = (min(var_11, ((((!38) & (((19582 > 4100059428134377852) ? ((((arr_0 [i_0]) != 19571))) : (arr_6 [i_0] [2] [12] [i_2]))))))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_12 = -19571;
                        arr_11 [i_1] [i_3] = ((((max((arr_1 [i_1] [7]), (max((arr_5 [16] [i_2] [16]), (arr_10 [i_0] [12] [i_2] [i_3])))))) ? ((min(-19562, ((min(var_1, -19591)))))) : -var_2));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_13 = var_8;
                        arr_16 [i_4] [i_4] [i_1] [10] = 19561;
                        var_14 = var_8;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_2] [11] [i_1] = (arr_3 [i_0] [i_5]);
                        var_15 = ((((((7 / (arr_9 [1] [i_0] [1] [i_1] [i_1] [i_5]))))) ? var_6 : var_6));
                        arr_20 [i_1] [i_5] [i_5] [i_2] [i_1] [i_1] = (arr_9 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_2]);
                    }
                }
            }
        }
    }
    var_16 -= (min(var_8, 808963402));
    #pragma endscop
}
