/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (arr_6 [i_0] [11] [19] [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = (((((351079276 ? 7 : 22))) ? (((!(arr_1 [16])))) : (((arr_5 [i_3] [11] [i_1] [i_0]) << (((arr_3 [i_0]) - 18170734896220821341))))));
                        var_22 = (!var_13);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_23 = (min(var_23, (21 ^ 29140)));
                            var_24 = var_12;
                            arr_11 [i_0] = (((arr_4 [i_1] [i_3] [i_2]) ? (arr_4 [i_3] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                            var_25 -= (((arr_0 [i_4]) ? (arr_9 [i_4] [i_3] [i_3] [15] [i_1] [1] [1]) : (var_9 && var_18)));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_26 = var_3;
                            var_27 = 18446744073709551599;
                            var_28 = 255;
                        }
                        var_29 = 5330735936224012624;
                    }
                    var_30 = (min(var_30, (((!(arr_5 [i_0] [i_0] [5] [i_2]))))));
                    var_31 = ((~(arr_5 [i_0] [i_1] [i_2] [i_2])));

                    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_32 = (min(-4683230126153991542, -29140));
                        var_33 = ((min(15780618282423871344, ((((arr_6 [i_0] [i_1] [i_2] [i_6]) && var_9))))));
                        var_34 |= (((14448737237090670195 ? ((2014698140 - (arr_7 [12] [i_1] [i_2] [11] [i_6]))) : var_6)));
                        var_35 |= -19295;
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_7] [i_2] [i_7 + 2] = (arr_0 [i_1]);
                        var_36 = (arr_8 [19] [i_1] [i_2] [i_7]);
                        var_37 = ((-3477878204682678239 / (arr_7 [i_1] [i_1] [i_7 + 2] [i_7] [12])));
                    }
                }
            }
        }
    }
    var_38 = (max(var_38, var_8));
    var_39 = ((((((var_4 ? var_16 : var_15))) ? var_18 : var_14)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_40 = (max(((-26569 ? (arr_20 [i_11 + 3]) : 2666125791285680273)), ((((((225 ? var_14 : var_9))) ? 18 : (var_3 + 1))))));
                            var_41 = ((~(arr_16 [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                        }
                    }
                }
                var_42 = ((((((arr_7 [i_9] [3] [20] [i_9] [2]) | (arr_15 [i_9] [i_8] [i_8] [i_8])))) ? ((max((arr_20 [i_8]), 1231659567))) : ((((-(arr_17 [i_8] [19] [i_8] [i_8])))))));
            }
        }
    }
    #pragma endscop
}
