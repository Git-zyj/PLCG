/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] = (min(((((arr_1 [i_0 - 1]) >= (arr_1 [i_0 + 1])))), (max(var_8, (((arr_0 [i_0]) & var_4))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(-32766, (((!((min(2548, var_3))))))));
        var_15 -= ((!(((((var_1 ? 424053447 : var_3)) << (((var_8 - var_6) - 53)))))));
        var_16 = (min(var_16, ((max((arr_1 [i_1]), ((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 1))))))));
        var_17 = var_11;
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = ((!(arr_12 [i_4 + 1] [3] [i_4])));
                                var_18 = min(((((((arr_13 [i_2 - 1] [1]) ? 1 : (arr_7 [4])))) && (127 + 1))), 1);
                                arr_21 [i_2 - 1] [i_4 + 1] [i_5 - 1] [5] = (min(((0 ? (max((arr_19 [i_2] [i_2]), (arr_0 [i_2]))) : ((((arr_12 [i_2] [i_2] [7]) / -1))))), (((!((max(var_8, (arr_8 [i_2])))))))));
                                arr_22 [1] [i_5] [2] [i_3] [1] = ((~424053447) >= ((((arr_16 [i_5 + 1]) + (arr_15 [i_3 + 2] [i_4 - 1] [i_5] [5] [i_5 + 1] [i_5])))));
                            }
                        }
                    }
                }
                arr_23 [i_2] [i_2] [i_2] = var_6;
            }
        }
    }
    var_19 = -10296;

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_27 [i_7] = ((((max(var_12, (((1 ? -1 : var_2)))))) ? (((arr_25 [i_7] [i_7]) ? (arr_25 [i_7] [i_7]) : 0)) : (arr_25 [i_7] [i_7])));
        arr_28 [i_7] = ((!((((arr_24 [i_7]) * (((-95 ? var_7 : 1))))))));
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((~(arr_30 [i_8 + 1])))))));
                        arr_37 [i_11] [i_10] [i_10] [i_10] [0] [i_11] = ((((min(var_6, (arr_35 [i_10] [7] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1])))) - var_10));
                    }
                }
            }
        }
        arr_38 [i_8] [i_8] = (((29282 & -32766) ? (var_1 >= var_6) : (((min(var_7, 1)) ? -6747 : ((min(-74, 16383)))))));
    }
    #pragma endscop
}
