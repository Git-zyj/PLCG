/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(((var_7 ? var_15 : var_6)), var_4)), var_6));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (arr_3 [i_0 + 3]);
                        arr_8 [i_0] [21] [i_2] [i_2] [i_3] [i_3] = ((min(var_4, (arr_2 [i_0 - 1] [i_0 + 1] [i_0]))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_20 = (max(((max(-11098, 3584))), 3520417218));
                            arr_12 [i_0] [i_1] [10] [i_3] [i_4] = (((arr_4 [i_0] [i_0 - 1] [i_0]) ? (arr_3 [i_0 + 2]) : (min((arr_4 [i_1] [i_1] [i_1]), ((max((arr_0 [i_2]), var_3)))))));
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] = (min(((((arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) ? (arr_15 [i_0]) : ((max(var_5, (arr_14 [i_0 - 1] [i_1] [i_0] [i_3] [i_5] [20] [i_2]))))))), var_12));
                            var_21 = arr_13 [i_0] [11] [6] [i_3] [i_5];
                            arr_17 [i_0] [i_1] [5] [i_2] [i_3] [i_5] = ((max(((var_11 ? (arr_6 [i_5 + 1] [i_3] [i_2] [9] [15]) : var_12)), ((min((arr_5 [i_0] [i_5] [i_2] [i_3]), var_11))))));
                            arr_18 [i_5] [i_5 + 1] [i_3] [i_3] [i_2] [i_1] [i_0 + 2] = (max((min((min(var_6, (arr_15 [i_2]))), 7739)), var_16));
                            arr_19 [5] [15] [i_2] [8] [i_2] = ((-32443 ? 78 : (arr_10 [i_2] [i_2] [i_2] [i_2])));
                        }
                        var_22 = var_9;
                    }
                    arr_20 [i_2] [i_0] = (arr_3 [i_0]);
                }
            }
        }
        arr_21 [i_0 - 2] = 8192;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_7] [i_6] = (max(var_6, (max(var_6, (arr_7 [i_6] [i_7 + 1] [i_8] [i_7 - 1] [i_7 + 2] [6])))));
                    arr_31 [i_6] [i_7 - 1] [i_6] = (min((arr_22 [i_6] [i_7]), (min((((var_15 ? (arr_26 [i_6]) : var_8))), var_0))));
                }
            }
        }
        var_23 = arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
        var_24 = ((min((max(var_7, (arr_26 [i_6]))), (arr_26 [i_6]))));
        arr_32 [i_6] [i_6] = var_1;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            {
                arr_37 [i_9] [i_10 + 3] [i_10 + 1] = var_5;
                arr_38 [i_9] [i_9] = var_9;
                arr_39 [i_9] [i_10] [i_9] = arr_0 [i_9];
                arr_40 [3] [i_9] [i_9] = max((arr_34 [i_10]), -11098);
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}
