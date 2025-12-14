/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = var_12;
    var_21 = ((max((var_2 > var_15), var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = ((8752302144136020501 ? var_1 : (max(12669875615774703821, var_12))));
                    arr_9 [i_1] [i_1 - 1] [8] = 33554431;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = -48;
                                var_24 = (max(((((arr_8 [i_1] [i_1 - 1] [i_1]) ? ((min(31744, var_9))) : (((arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_13 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_3] [i_4]) : var_2))))), (((~1) ? ((((!(arr_2 [i_0]))))) : (max(3230302145, var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_25 = -2125941120;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_6] [i_7] = (((((arr_15 [i_5] [i_5] [i_6] [2] [i_7] [1]) ? -1 : (var_11 / 2358199594)))) ? 1 : (((((31096 ? -1059766138 : var_0))))));
                        var_26 = (((((+(((arr_7 [i_8] [i_6] [i_6]) ? 240 : 105))))) + (max((arr_0 [i_7] [i_5]), (((arr_17 [i_5] [9]) ? var_3 : var_12))))));
                        var_27 = var_3;
                        var_28 = (arr_2 [i_8]);
                    }
                }
            }
        }
        arr_28 [i_5] [i_5] = -var_1;
        var_29 = -0;
        arr_29 [i_5] = ((!(arr_10 [i_5] [4] [4] [4])));
    }
    #pragma endscop
}
