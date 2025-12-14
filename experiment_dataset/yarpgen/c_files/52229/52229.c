/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((((((max(var_8, -18628))) / var_2)) * var_3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((arr_0 [i_0] [i_0]) & var_8))) ? (((min(var_9, (arr_0 [i_0] [i_0]))))) : ((var_1 | (arr_2 [i_0]))))))));
        var_13 = (max(var_13, ((min((arr_2 [i_0]), (((var_2 ? (arr_3 [i_0] [i_0]) : var_7))))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_0));
        var_15 += var_1;
        var_16 = (arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_17 = (min((arr_5 [i_1]), (!var_7)));
                    var_18 = (((arr_6 [i_1] [i_2]) ? (((var_3 ^ (arr_6 [i_1 + 1] [i_3 + 1])))) : ((var_7 - (arr_4 [i_1] [i_1])))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_1));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = ((+((((arr_10 [i_4 + 2]) < (arr_10 [i_4 - 1]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = min(((var_9 / (arr_13 [i_4 + 1] [i_4 + 2] [i_4 + 2]))), ((min((min(var_8, var_7)), var_7))));
                        arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2] = (min(((((arr_18 [i_4 + 1] [i_4 + 2] [i_4 + 1]) && var_3))), ((((var_8 ? (arr_12 [i_4] [i_5] [i_7]) : var_1)) * (~27)))));
                    }
                }
            }
        }
        var_22 |= ((((((max((arr_14 [9]), var_1))) >> (((arr_8 [i_4] [i_4 - 1] [i_4]) - 2673788171)))) & var_3));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] &= ((!(((arr_15 [i_8 + 1] [i_8 + 2]) > var_6))));
        var_23 = (min(var_23, (arr_23 [i_8 + 2] [i_8 + 2])));
        arr_26 [4] = (min((max((arr_15 [i_8 - 1] [i_8 - 1]), (((0 ? var_7 : 21183))))), (~0)));
        var_24 = (~var_0);
        var_25 = (max(var_25, (((max(var_0, (max(var_6, var_9))))))));
    }
    var_26 = var_9;
    #pragma endscop
}
