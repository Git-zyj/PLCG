/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, (((((((arr_1 [0]) ? (arr_1 [2]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (!2147483647))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
                    var_20 += arr_4 [i_0];
                    var_21 = (arr_5 [i_2] [i_2] [i_1] [i_0]);
                }
            }
        }
        var_22 = (arr_6 [i_0] [i_0]);
        arr_8 [i_0] = (((arr_6 [i_0] [i_0 - 1]) ? ((235 ? 2519441156 : -17213)) : (--1626606049)));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_23 = (arr_9 [i_3] [i_3]);
        var_24 += ((!((((arr_5 [i_3] [i_3] [i_3] [i_3]) ? (arr_5 [i_3] [i_3] [i_3] [i_3]) : (arr_5 [i_3] [i_3] [i_3] [i_3]))))));
        var_25 &= ((((!(arr_11 [i_3]))) ? (arr_9 [10] [0]) : (arr_3 [i_3])));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_15 [3] [i_4] = (arr_12 [i_4]);

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_26 = (((arr_16 [i_4] [i_4] [i_5]) ? (((arr_16 [i_4] [i_5] [i_5]) ? (arr_16 [i_4] [i_4] [i_5]) : (arr_16 [i_4] [i_4] [i_4]))) : (arr_16 [i_4] [1] [5])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_27 = (max(var_27, (arr_17 [i_6])));
                        var_28 = (min(var_28, (arr_17 [i_6])));
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((~(((!(arr_16 [i_5] [0] [10]))))));
                    }
                }
            }
            var_29 = (arr_14 [i_4]);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_26 [i_8] [i_8] [i_4] = (((((-(arr_21 [i_4] [i_8] [i_8] [i_4])))) ? (((arr_21 [i_8] [i_8] [i_8] [i_8]) ? (arr_21 [i_8] [18] [i_4] [14]) : (arr_21 [i_4] [i_8] [i_8] [i_8]))) : (((arr_21 [7] [i_4] [i_8] [i_8]) ? (arr_21 [i_4] [i_4] [4] [i_8]) : (arr_21 [i_4] [i_8] [14] [i_8])))));
            var_30 = (min(var_30, (((((((arr_22 [i_4] [i_4] [i_8]) ? (arr_16 [i_4] [9] [i_4]) : (((arr_25 [i_4] [i_8]) ? (arr_12 [i_8]) : (arr_12 [0])))))) ? (arr_25 [i_4] [i_4]) : ((~(((arr_17 [i_8]) ? (arr_20 [i_4] [i_4] [i_4] [i_4]) : (arr_20 [i_4] [i_8] [i_8] [i_8]))))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_31 [i_4] [i_8] [i_8] [i_10] = (((((~(arr_29 [7] [i_10 + 1] [2] [9] [i_10 - 1])))) ? ((-(arr_29 [14] [i_10 + 1] [i_10] [i_10] [i_10 - 1]))) : (arr_29 [i_9] [i_10 + 1] [0] [i_10] [i_10 - 1])));
                        arr_32 [i_8] [i_8] [i_9] [i_10] = (((((~(((arr_21 [i_4] [i_4] [9] [i_4]) ? (arr_17 [i_10 - 1]) : (arr_19 [16] [i_8] [i_8])))))) ? ((~(arr_27 [i_4] [i_4]))) : (arr_19 [i_9] [i_8] [6])));
                        var_31 = (arr_28 [i_10] [i_8]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_32 = (arr_30 [i_4]);
                        var_33 = ((!(((((((arr_27 [i_4] [i_4]) ? (arr_17 [19]) : (arr_13 [i_4])))) ? (arr_36 [i_4] [i_8] [i_11] [i_8] [i_12]) : (arr_35 [i_4] [i_4] [i_11] [i_12]))))));
                    }
                }
            }
            arr_37 [i_8] [15] = (((arr_21 [3] [i_4] [i_8] [i_8]) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (((arr_21 [i_8] [i_8] [i_4] [i_4]) ? (arr_21 [i_4] [i_8] [i_8] [i_8]) : (arr_21 [i_4] [i_4] [i_4] [3])))));
        }
        var_34 = (max(var_34, ((((arr_30 [i_4]) ? (arr_27 [i_4] [i_4]) : (((arr_16 [i_4] [i_4] [i_4]) ? -3261 : 1775526144)))))));
    }
    var_35 -= var_7;
    var_36 = (~var_15);
    var_37 = (max(var_37, (((((984234594 ? -1790698425 : -1790698429))) ? var_18 : var_12))));
    #pragma endscop
}
