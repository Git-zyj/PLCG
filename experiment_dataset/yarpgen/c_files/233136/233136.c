/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (64 + var_11);

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = ((((!(arr_1 [i_0 - 3]))) ? (arr_0 [i_0 - 2]) : (arr_1 [i_0 + 1])));
        var_18 = ((((((arr_1 [i_0 + 1]) ? var_15 : ((((!(arr_0 [i_0])))))))) ? (((!(arr_1 [i_0 + 2])))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_1] = (((arr_3 [i_1 - 1]) ? var_11 : 156));
            var_19 = -989890183;
            var_20 = (min(var_20, ((((arr_5 [i_1 + 2]) >= (-107038838 && -989890164))))));
            arr_8 [i_1] [i_1] = (~(~-989890183));

            for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
            {
                arr_11 [i_1] [i_3] [i_2] [i_1] = 613348132;
                var_21 = (~(arr_4 [i_1 - 1]));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_15 [i_2] = var_8;
                arr_16 [i_2] [i_4] = 201;
                var_22 = (((-100 ? 563112022 : (arr_14 [i_1] [i_1] [i_1]))));
                arr_17 [i_1] [i_1] [i_4] [i_4] = (arr_12 [i_1] [i_2]);
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_23 = (!135);
                arr_21 [i_5] [i_5] [i_5] = (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 - 1]) : 238));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_5] [i_1 + 1] [i_1] [i_1] = ((-(arr_19 [i_6 + 1])));
                            arr_30 [i_5] = ((~(arr_28 [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 2])));
                            arr_31 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = (arr_23 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [i_5]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_24 = (min(var_24, (((1 && (arr_13 [i_1] [i_1] [i_8 + 1]))))));
            var_25 = (min(var_25, 5515897590591901040));
        }
        arr_36 [i_1] = ((18 ? 90 : -86));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                {
                    arr_43 [i_1] [i_1] [i_1] [i_1] = var_1;
                    var_26 = var_4;
                }
            }
        }
    }
    var_27 = ((var_14 | (min(((var_4 ? var_2 : var_14)), var_14))));
    var_28 = (((var_5 ^ -677455118) ? var_4 : (min(100, (~var_3)))));
    var_29 = var_13;
    #pragma endscop
}
