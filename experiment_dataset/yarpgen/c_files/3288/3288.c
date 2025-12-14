/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-39 != 115) && (((32759 ? 0 : 1)))));
    var_17 = 1;
    var_18 = (max(var_18, (!-1187093534)));
    var_19 |= ((((!1) ? (var_3 && var_9) : var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = arr_0 [17] [i_0];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [15] = 24794;
            var_21 = (arr_1 [i_0]);
            var_22 = (((arr_3 [i_0]) / (arr_6 [i_0] [i_1] [i_1])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                var_23 = ((arr_1 [i_0]) - (((arr_8 [10] [i_1]) - 5394)));
                var_24 = (arr_4 [i_0] [i_1]);
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_25 = ((var_11 ? ((45229 ? (arr_11 [1] [0] [0] [i_0]) : var_1)) : 35832));
                arr_14 [i_0] [i_0] [1] [i_3] = (((arr_5 [i_1]) & (arr_1 [i_0])));
            }
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_4 + 1] [i_5] [i_4] = (1 / 2667791598370553771);
                        var_26 = (min(var_26, ((var_3 - ((((arr_19 [i_6] [i_0] [i_5] [i_0] [i_0]) ? (arr_17 [16] [i_5] [i_6]) : (arr_19 [8] [i_4] [i_5] [i_5] [i_5]))))))));
                    }
                }
            }
            arr_23 [i_0] [i_4] [i_0] = (((arr_8 [i_4 + 2] [i_0]) ? (arr_6 [i_4 - 1] [i_4 + 2] [15]) : (arr_6 [i_4 - 1] [i_4 + 2] [i_0])));
            var_27 = (arr_17 [0] [i_4] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_28 = (arr_24 [i_7]);
        var_29 = ((((((arr_4 [i_7] [i_7 + 2]) / (arr_25 [i_7])))) ? (arr_20 [i_7] [i_7 - 1] [i_7] [8] [i_7]) : (arr_17 [i_7] [i_7] [16])));

        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_30 &= var_3;
            var_31 = arr_5 [i_8];
            var_32 = (((((20 ? (arr_18 [i_7 + 1] [i_7 + 1] [i_7 + 1]) : 1))) ? (arr_21 [i_8] [i_8] [i_7] [i_7] [i_8]) : (1 || 1)));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_33 = 7155;
            var_34 = (arr_20 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 1]);
        }
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_35 = ((((((((-(arr_26 [i_10])))) ? (-2667791598370553770 | 3) : 0))) ? (((arr_1 [i_10 - 1]) ? (arr_0 [i_10 - 1] [i_10 - 1]) : (arr_9 [i_10 - 1] [i_10 - 1] [i_10]))) : -43));
        var_36 = (((((arr_15 [i_10] [i_10]) > ((2399 ? 5389 : (arr_32 [1] [i_10]))))) ? var_0 : -1187093541));
        var_37 = -1757950140;
        var_38 = (min(((((-2667791598370553778 | 1) <= 2557))), ((((arr_17 [i_10 - 1] [i_10] [2]) ? (arr_29 [i_10] [i_10]) : (arr_17 [12] [i_10] [5]))))));
    }
    #pragma endscop
}
