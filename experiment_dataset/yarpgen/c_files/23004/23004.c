/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = ((var_9 ? (min((arr_1 [i_0 - 1] [i_0 - 3]), var_6)) : (((((arr_1 [i_0 - 4] [i_0 - 4]) == (arr_1 [i_0 - 1] [i_0 + 1])))))));
        arr_2 [i_0] &= (((arr_0 [i_0 - 2]) - (((!(arr_1 [i_0 - 2] [i_0 - 3]))))));
        var_13 = ((var_10 ? (arr_1 [i_0] [i_0 + 1]) : (arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = (((((((arr_0 [6]) ? 235 : var_10))) < var_1)));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_15 = min(((min(54092, -1))), (arr_6 [i_1 - 1] [i_1 - 4]));
            var_16 = ((!((max(var_8, (arr_5 [i_1 - 4] [i_1 - 3]))))));
            var_17 = ((-1 / (arr_7 [i_1 - 1] [i_1 - 4])));
        }
        var_18 = var_10;
        var_19 -= (arr_7 [7] [7]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_20 *= (-3272 - 4146183133);
                        var_21 = (min(var_21, ((min(-454866823, (arr_15 [i_1] [i_5]))))));
                        var_22 = (arr_11 [i_1 - 2] [i_3] [1] [i_5]);
                        var_23 -= var_6;
                        arr_16 [i_1 - 4] [i_4] [i_1] [i_1 - 4] [i_1 - 4] = (((((min((arr_8 [i_1 - 1]), (arr_8 [i_5])))) - var_5)));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_24 = ((((((arr_3 [i_6 - 1]) == var_11))) | (((var_8 < var_8) - ((var_3 ? var_10 : (arr_0 [22])))))));
        var_25 |= (((max((!var_6), -18691))) ? var_2 : (((max(-22335, 3266)))));
        arr_20 [i_6] = var_11;
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_26 = (min(var_26, var_11));
        var_27 = (((arr_9 [i_7]) ? (arr_9 [i_7 + 1]) : (arr_9 [i_7 - 2])));
    }
    var_28 = (max(((var_7 ? ((var_4 ? var_6 : var_3)) : var_10)), ((((max(var_3, var_2)) < (min(148784162, var_2)))))));
    #pragma endscop
}
