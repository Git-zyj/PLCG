/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_1 + 2] [i_1] [18] [i_1] [1] = (((arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 1]) ? (arr_8 [i_0 - 4] [i_2] [i_0 - 4] [i_3]) : var_18));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1] = ((9881 ? 519286252698707152 : 3184653345466286769));
                            var_19 |= var_9;
                        }
                        arr_15 [i_0] [i_0] = (((arr_10 [i_1 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]) >= var_4));
                        var_20 = (((((var_13 ? var_12 : (arr_2 [i_1] [i_1])))) ? -var_3 : var_17));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [17] [i_1 + 3] [i_0] = var_16;
                        var_21 = (min(var_21, var_2));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((!(((((max(var_17, -17))) ? -1856296591 : (~var_5))))));
                        arr_25 [1] [i_6] [1] [i_6] &= ((-var_18 ? ((((arr_22 [i_0 + 3] [i_0 - 1] [i_1 - 3] [i_1 - 3]) ? var_2 : (arr_22 [i_0 - 1] [i_0 - 1] [i_1 + 3] [7])))) : (min(var_17, (arr_22 [i_0 + 3] [i_0 - 3] [i_1 + 2] [i_6])))));
                        arr_26 [0] [i_6] [i_6] [i_0] &= (max(var_2, (((arr_8 [i_0 + 3] [i_0 - 4] [i_1 - 3] [i_1 - 2]) ? 76 : 1))));
                    }
                    var_23 = ((max(var_17, ((min(-7, -7))))));
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
