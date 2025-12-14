/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = ((((var_7 ? 216 : var_8)) < (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [3] &= (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_11 = (((((arr_8 [i_1] [i_1]) >= (arr_1 [i_2]))) ? (31 == var_1) : ((216 ? var_0 : -26))));
                        var_12 += -38;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_13 = ((-23 ? ((64 * (arr_12 [i_4] [i_4]))) : (((var_8 > (arr_11 [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_14 = (arr_15 [i_4] [i_4]);
                        arr_22 [i_5] [i_4] [i_7] = (((-(arr_15 [i_4] [i_4]))));
                    }
                }
            }
        }
        var_15 &= ((1 > (arr_20 [i_4] [4] [i_4] [4] [i_4])));
        arr_23 [i_4] [i_4] = ((((-(arr_16 [i_4] [i_4] [3] [i_4]))) % ((8969723322568214653 ? (arr_17 [i_4] [i_4]) : (arr_17 [i_4] [i_4])))));

        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_26 [i_4] [i_4] = ((-var_9 ? var_7 : (arr_16 [i_4] [i_8] [i_8] [i_8])));
            var_16 = (min(var_16, (((((171 ? (arr_24 [i_4] [i_8] [i_8]) : 1478753075)) > (arr_19 [i_4] [i_4] [i_8] [i_8]))))));

            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                var_17 = ((((arr_14 [9] [9] [i_9]) <= (arr_14 [0] [i_8] [i_4]))) ? (arr_17 [i_9 - 2] [i_9 - 3]) : (~33973));
                var_18 = ((arr_12 [i_8] [i_9 - 1]) / (arr_12 [6] [i_9 - 3]));
                arr_30 [i_4] [i_8] [i_8] [i_8] = var_3;
                var_19 = var_2;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 = (arr_34 [i_4] [i_10] [i_9] [i_8] [i_4]);
                            var_21 = ((arr_34 [i_9 - 2] [i_9 + 1] [i_9] [i_9 - 1] [i_4]) ? (arr_12 [i_9 + 1] [i_9 - 3]) : var_9);
                        }
                    }
                }
            }
            var_22 = ((2541653728 ? 50 : 33976));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_37 [i_4] = (~1);
            var_23 = (max(var_23, var_1));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_24 = (arr_15 [i_4] [i_4]);
            var_25 = ((var_6 == (arr_27 [i_4] [6] [i_4])));
        }
    }
    var_26 = -31;
    #pragma endscop
}
