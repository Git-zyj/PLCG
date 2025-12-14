/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 != var_5);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = var_6;
                                arr_11 [i_0] [9] [i_2] [5] [i_2] = (((((max(13610, -13626)))) > var_4));
                                var_12 += (((13627 > 90) || (((var_1 ? (max(var_5, 23139)) : (13619 - 13610))))));
                                arr_12 [i_0] [i_1] [i_2] [1] [i_4] = (((((2658157912 ? -44 : var_0))) ? (arr_4 [i_4] [i_3 - 1] [1]) : var_5));
                                var_13 = (min(var_13, 1636809415));
                            }
                        }
                    }
                    var_14 = ((((var_0 ? var_8 : var_6)) <= -2658157895));
                    var_15 += ((-438004769 ? var_9 : (((((var_5 ? 42384 : 1)) & 23151)))));
                }
            }
        }
        arr_13 [i_0] = ((!((((90 ? 175 : var_4)) < (arr_9 [i_0] [i_0] [i_0] [i_0] [4] [4] [i_0])))));
        arr_14 [i_0] = (((1 ? (arr_10 [12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -438004786)) <= (!var_6));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    var_16 += (((arr_4 [i_0] [i_0] [i_0]) <= (1 >= 2658157912)));
                    var_17 = var_8;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_26 [8] = 33595;
        var_18 ^= 15360;
        var_19 = var_9;
    }
    #pragma endscop
}
