/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!(!var_10)))), -var_11));
    var_15 = (min(var_15, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 |= (arr_1 [i_0]);
                arr_5 [i_0] [i_0] [i_1] = arr_1 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (arr_6 [0] [0]);
                            var_18 = (min(var_18, (arr_9 [i_0] [i_0] [i_0] [2] [3] [i_0])));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (arr_12 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_26 [i_8] [i_5] [i_8] [i_7] [3] [i_5] [i_4] = (max((min((arr_14 [i_6]), (((arr_20 [i_5]) ? (arr_12 [7] [i_6]) : (arr_25 [i_4] [i_5] [i_6] [i_7] [i_5] [i_5] [i_4]))))), (arr_21 [i_5])));
                            var_19 = ((~(((!((max((arr_17 [i_4] [i_6] [i_6]), (arr_12 [i_4] [i_8])))))))));
                            var_20 = (((arr_17 [i_7] [i_5] [i_7]) ? (arr_19 [i_4] [i_6] [17]) : (max((arr_12 [i_4 - 3] [19]), (((~(arr_20 [i_4]))))))));
                            var_21 = (min(var_21, ((((((((min(19, -4169928999043970636))) ? (arr_14 [i_4]) : (arr_20 [i_5])))) ? (((-(arr_13 [i_6])))) : (arr_12 [i_8] [5]))))));
                        }
                    }
                }
            }
            arr_27 [i_5] [i_5] = (((arr_25 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (max((arr_21 [i_5]), ((~(arr_20 [i_5]))))) : ((((((arr_24 [i_4] [i_5] [i_5] [i_4] [i_4]) ? (arr_22 [8]) : (arr_20 [i_4])))) ? (((arr_12 [i_4] [i_4 - 1]) ? (arr_13 [i_4]) : (arr_17 [i_4] [13] [i_5]))) : (((arr_19 [i_4] [i_5] [i_5]) ? (arr_13 [i_4]) : (arr_11 [i_4 + 1])))))));
        }
    }
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_22 = ((((((((-(arr_28 [18])))) ? ((4169928999043970653 ? -31634 : 7668439945051372290)) : (((arr_28 [i_9]) ? (arr_29 [i_9]) : (arr_29 [i_9])))))) ? (arr_29 [16]) : (((((4169928999043970653 ? (arr_28 [i_9]) : -4169928999043970653))) ? ((((!(arr_29 [0]))))) : (arr_29 [i_9])))));
        arr_30 [i_9] = arr_28 [i_9];
        arr_31 [1] [i_9] |= (arr_28 [i_9]);
    }
    for (int i_10 = 2; i_10 < 6;i_10 += 1)
    {
        var_23 = (arr_9 [i_10] [13] [i_10] [13] [i_10] [i_10]);
        var_24 = ((~(arr_16 [i_10] [i_10] [i_10])));
        var_25 = (((arr_32 [1]) ? (arr_28 [i_10 - 2]) : (((max((arr_21 [i_10]), (arr_19 [i_10] [17] [i_10]))) ? ((((!(arr_4 [i_10] [i_10] [i_10]))))) : (arr_7 [i_10] [11] [11] [i_10])))));
        var_26 = (arr_1 [i_10]);
    }
    #pragma endscop
}
