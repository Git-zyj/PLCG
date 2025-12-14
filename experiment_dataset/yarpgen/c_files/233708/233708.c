/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [12] |= (((arr_0 [i_2 + 1]) ? -18 : var_13));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = 7666414966945244591;
                                var_20 = (arr_2 [i_3] [i_0]);
                                var_21 += -1;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_22 = (((arr_9 [16] [i_1] [i_0] [i_5 + 1] [i_5]) > (arr_12 [i_5 - 2] [i_5 - 2] [i_5 + 3] [i_5] [i_5 - 2] [i_5 - 1])));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_23 = (arr_14 [i_5] [i_5]);
                        var_24 = ((1 ? (((var_14 ? var_10 : 1))) : var_2));
                        arr_20 [i_0] [17] [i_1] [i_0] = (arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_25 = (((arr_9 [i_1] [i_5 + 2] [i_0] [i_5] [i_5]) ? (arr_9 [8] [i_5 + 2] [i_0] [0] [i_7]) : 10780329106764307025));
                        var_26 = (arr_0 [0]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_27 = arr_12 [i_0] [i_1] [i_5] [i_0] [i_0] [i_1];
                        var_28 &= (arr_25 [i_8] [i_5 + 3] [i_1]);
                    }
                    var_29 += 1927940805;
                    arr_27 [i_0] [i_0] [i_0] [i_0] = -753795558;
                }
                arr_28 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
