/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) + var_8));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = ((var_3 ? (arr_4 [i_0] [i_1]) : var_6));
            var_14 = ((var_7 ? (arr_5 [i_0] [i_1 + 1]) : (arr_3 [i_0] [i_1 - 1])));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_15 = (~((((arr_1 [i_2 - 1]) == var_2))));
            arr_10 [i_0] [i_0] = (((arr_3 [i_2 - 2] [5]) ? (arr_3 [i_2 - 1] [i_2 - 1]) : var_5));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_0] = (arr_8 [i_3 - 2] [i_0]);
            arr_14 [i_0] = -51;
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_16 = (33 - var_8);

            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                arr_22 [i_0] [i_0] = (var_7 ? (((arr_21 [i_0] [i_0]) ? -50 : var_4)) : ((var_1 ? 39 : var_5)));
                arr_23 [i_0] [3] [i_0] [i_5] = (23 / -33);
                arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0]);
                var_17 = var_12;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_28 [i_0] = (arr_25 [i_0] [i_0]);
                arr_29 [i_0] [i_4] [3] = (arr_7 [i_0] [i_4 - 1] [i_0]);
                var_18 = ((80348832 - -62) / -54);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_19 = ((~(arr_4 [i_0] [i_4 - 2])));
                    arr_35 [i_0] [i_0] [i_7] [i_8] = ((-63 ? 4214618464 : -62));
                    var_20 = (2871307443 / 80348829);
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_38 [i_9] [i_0] [i_4] [1] [i_0] [i_0] = (arr_8 [i_0] [i_0]);

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_41 [i_0] [1] [i_0] [i_7] [2] [i_9] [9] = (arr_33 [i_0] [i_7]);
                        var_21 = ((~(arr_25 [i_7] [i_0])));
                    }
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_44 [i_0] [i_0] [0] = (((arr_33 [9] [i_4]) ? ((-(arr_4 [i_0] [i_4]))) : ((((arr_20 [1] [i_7] [1] [i_7]) || 80348817)))));

                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_48 [11] [i_0] [8] [i_4] [i_4 + 1] = ((!(~3871410851)));
                        arr_49 [i_0] = (((arr_3 [i_7] [i_4 - 3]) | 993353066));
                        arr_50 [i_0] [i_0] [10] [i_0] [i_0] [i_0] = (-((var_10 ? 4214618464 : (arr_25 [i_7] [i_0]))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_53 [i_0] [i_0] [7] [i_7] [1] [i_13] = (((arr_0 [i_0]) ? (arr_15 [i_4 - 3] [i_0]) : -var_0));
                        arr_54 [i_0] [i_13] [i_11] [i_7] [i_4] [i_0] [i_0] = (arr_5 [i_0] [i_4 - 2]);
                        var_22 = ((!(arr_45 [i_4 - 3] [i_4] [i_4] [i_4 + 1] [i_4 + 1])));
                        arr_55 [i_0] [i_7] [i_0] = (~51);
                    }
                }
            }
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_63 [11] [5] [i_0] [i_0] [11] [i_0] = (arr_39 [i_15] [i_4] [i_0] [i_14 - 2] [i_0]);
                    var_23 = (arr_20 [i_0] [i_4 - 3] [i_4] [i_15]);
                }
                arr_64 [i_0] [i_0] [i_0] [i_0] = (arr_46 [i_0] [i_14] [i_4] [6] [i_4] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    var_24 = (((((var_6 ? var_4 : (arr_66 [i_16] [i_18])))) >= var_5));
                    var_25 = (max(var_25, (((((((max(var_8, var_0))) + var_3)) * (arr_71 [13] [13] [i_17 + 1] [i_17]))))));
                }
            }
        }
    }
    #pragma endscop
}
