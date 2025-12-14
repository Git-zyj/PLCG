/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 * var_8);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_13 = (min(((-(arr_3 [i_0 - 2] [i_0 - 1]))), (((min(-88, 2423091317))))));
            arr_6 [i_0] [i_1] [i_0] = (((((2423091317 << (((arr_2 [i_0] [i_0 + 1]) - 761662103689915649))))) ? ((var_7 ? var_10 : (arr_0 [i_0 - 1] [i_0 + 1]))) : (var_2 - var_0)));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_14 = ((!(((-(var_10 < 1871875965))))));
            var_15 = (((min(((var_9 ? (arr_1 [i_0] [23]) : var_1)), -1)) - (((var_8 != (arr_8 [i_0 + 1] [i_0 - 2]))))));
            var_16 = (max(var_16, (arr_3 [i_0 - 2] [i_0 - 2])));
            var_17 = 184;
            var_18 = (min(var_18, (((((((arr_3 [i_0 - 1] [i_0 - 2]) ? (arr_3 [i_2] [i_0 - 2]) : (arr_3 [i_0] [i_0 + 1])))) ? (min((arr_3 [i_0] [i_0 - 1]), 36188)) : 2423091317)))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_19 = min((((arr_4 [i_0 - 1] [i_0 - 2]) ? ((((arr_0 [20] [20]) >= 2423091330))) : (1871875965 && var_4))), 5568);

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                var_20 = (max(var_20, ((!((min(var_2, 1871875992)))))));
                var_21 = (max(var_21, -1871875973));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_22 = (min(var_22, (arr_4 [i_4] [i_3])));
                            var_23 -= ((!((min(var_0, -30974)))));
                            var_24 = (min(var_24, (((((~(((arr_11 [5]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_2)))) | -16985)))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_25 = ((-((((arr_1 [i_0] [i_0]) == -var_11)))));
                arr_20 [i_3] [i_3] [i_0] = min((!1871875965), (~104));
                var_26 |= (((16963 ? -1871875954 : (arr_4 [1] [i_3]))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_27 = (max(var_27, ((((-(((arr_15 [i_0] [i_3] [i_7] [22] [i_0]) ? 4167754831 : var_1))))))));
                            var_28 = (min(var_28, (arr_17 [i_0] [i_3] [i_3] [i_8] [i_3] [i_3])));
                            arr_28 [i_8] [i_8] [i_7] [i_3] [i_8] = min((arr_11 [i_3]), (((!(arr_23 [i_8] [i_0 + 1] [i_7] [i_3] [i_8])))));
                        }
                    }
                }
                var_29 = ((-(((!(arr_21 [i_7] [i_7] [i_0 - 1] [i_7]))))));
            }
            var_30 = (min(1871875978, 127212452));
        }
        var_31 = (max(var_31, (~1871875978)));
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        var_32 = ((((((((-1984384448 & (arr_7 [i_10 - 1])))) ? (arr_5 [i_10 + 1] [i_10] [18]) : (arr_19 [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 2])))) == (arr_2 [i_10] [i_10])));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_33 = (((arr_10 [i_11 - 1]) / var_0));
                                var_34 = (((-(arr_30 [i_13 + 1] [i_13]))));
                            }
                        }
                    }
                    arr_41 [i_11] [i_11] [i_11] = (((45579 - 21286) ? (((!(arr_15 [i_11] [i_11 - 1] [i_10 - 1] [i_11 + 1] [i_11])))) : (~21)));
                }
            }
        }
        var_35 = (min(((-((~(arr_25 [i_10] [i_10] [i_10 + 1] [10] [i_10 + 1]))))), var_11));
        var_36 = 1871875955;
        var_37 = (max(var_37, var_4));
    }
    var_38 = ((-((-1402938662 ? (4167754844 * 177) : var_1))));
    var_39 = (min(var_39, var_0));
    #pragma endscop
}
