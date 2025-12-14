/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((((var_4 ? (var_0 * var_7) : (arr_5 [i_0] [i_1] [i_1]))) * var_1)))));
                arr_6 [i_0] = (((0 <= 111) ? ((((!-14546) != (var_1 + var_7)))) : var_0));
            }
        }
    }
    var_11 ^= ((var_7 | var_0) << (var_2 && var_9));
    var_12 = (~var_6);

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_13 = ((arr_3 [i_2]) << (((((arr_1 [2]) ? ((var_5 ? (arr_5 [i_2] [i_2] [i_2]) : var_9)) : ((((arr_5 [i_2] [i_2] [i_2]) ? (arr_5 [3] [i_2] [18]) : var_4))))) - 18446744073709551532)));
        var_14 = arr_7 [i_2] [5];

        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_13 [1] [i_3] = ((var_6 ? (((var_2 + (arr_8 [11] [i_3])))) : (arr_12 [i_3 - 1])));
            arr_14 [1] [i_2] [i_2] = (--14546);
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_15 = (arr_9 [3] [i_3 - 3]);

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_16 = var_5;
                            arr_23 [i_5] [i_2] [1] [1] [i_2] [i_5] = (var_7 ? (var_5 != var_2) : ((((arr_20 [i_2] [i_3] [i_5] [1] [0]) && var_0))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_17 = (arr_7 [i_7] [i_7]);
                                arr_39 [i_7] [11] [i_7] [i_7] [i_11] [7] = (arr_38 [i_7] [i_7] [i_7] [3] [1] [i_11 - 1] [i_11]);
                                var_18 = var_8;
                                var_19 = ((((((arr_3 [0]) ? (arr_10 [i_7] [i_7] [i_9]) : (var_8 / var_5)))) ? (((arr_1 [i_7]) - (arr_20 [i_8 + 2] [i_10 + 1] [i_7] [i_11 - 1] [i_11]))) : var_6));
                            }
                        }
                    }
                    var_20 += ((((((arr_4 [i_9]) * (arr_4 [i_9])))) ? (((arr_4 [i_9]) / (arr_4 [i_9]))) : (((arr_4 [i_9]) / (arr_4 [i_9])))));
                }
            }
        }
        var_21 = (min(var_21, ((((((arr_12 [i_7]) * (arr_12 [i_7]))) / (((49850 << (14545 - 14543)))))))));
        var_22 += var_2;
    }
    #pragma endscop
}
