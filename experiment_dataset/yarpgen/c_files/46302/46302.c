/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 738634692;
                    arr_10 [i_0] [i_1] [i_0] [i_2] = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 *= ((((!(((arr_12 [i_2] [i_2] [5] [i_2] [i_4]) && var_17)))) ? (((!((min(-289977111, 14)))))) : (((((!(arr_16 [i_1] [i_0] [i_2] [i_3] [i_0]))) && ((max((arr_3 [i_4] [i_2] [i_4]), var_14))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_1] = ((-(max((arr_9 [i_0] [i_2] [i_2]), (arr_9 [i_1] [i_3] [i_4])))));
                                var_23 = (((((arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]) + 2147483647)) << ((((((~(arr_8 [i_4]))) + 249457691)) - 5))));
                                arr_18 [i_0] [i_1] [12] [3] [i_4] = ((min((arr_16 [8] [0] [i_1] [i_1] [i_1]), (arr_16 [i_0] [i_1] [i_2] [i_3] [i_4]))) & (~var_8));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_27 [8] [i_6] [i_5] [i_5] = (~3525210003);
                        var_24 = ((-((~(arr_25 [1] [i_5 - 1] [i_6] [i_6] [i_7])))));
                        var_25 = (!289977108);
                        arr_28 [i_0] = var_8;
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_26 = (max(var_26, ((min(((1 ? var_14 : (min((arr_19 [i_8]), var_3)))), 32767)))));
            arr_32 [0] = ((((arr_6 [i_0] [8] [i_8]) < 0)) ? -1069658460 : ((-(arr_6 [12] [i_8] [i_0]))));
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    arr_41 [i_11] [i_9] [i_9] [i_9] = (((((var_7 ? (arr_39 [i_9] [19] [i_9]) : 1))) ? 769757270 : (((!var_5) ? (arr_33 [i_10] [18]) : ((((arr_38 [i_11] [i_10] [i_10] [i_9]) ? var_19 : var_10)))))));
                    arr_42 [i_9] [8] [i_11] = (arr_40 [i_9] [14] [14] [18]);
                }
            }
        }
    }
    var_27 *= (((((~var_19) ? var_14 : (18446744073709551615 > 3108859803822484763)))) ^ var_15);
    #pragma endscop
}
