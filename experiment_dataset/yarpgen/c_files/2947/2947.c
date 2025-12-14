/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min(1, 176));
                var_12 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_4] [9] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [9]);
                                var_13 = (arr_3 [i_4]);
                            }
                        }
                    }
                }
                var_14 = ((((-1205343953 != (arr_0 [i_0] [i_0])))));
                arr_17 [i_1] [i_0] = (!1);
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_15 = var_0;
        var_16 = ((+((max((arr_19 [i_5] [i_5]), (arr_20 [i_5]))))));
        var_17 = (((((~1) + 2147483647)) << (((((arr_21 [i_5]) + 22)) - 21))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_18 = ((1 ? 43421 : 0));
                        arr_29 [i_6] [0] [13] [i_6] = (max(1, 1));
                        var_19 = max(var_7, ((((min(1, (arr_27 [i_5] [i_6] [i_7] [i_5])))) - var_6)));
                        var_20 = ((((arr_24 [i_5] [i_7] [9]) ? (arr_28 [i_6] [i_6]) : (arr_24 [4] [i_6] [i_7]))) - ((((arr_20 [i_5]) > var_2))));
                        arr_30 [i_5] [i_6] [i_7] [i_6] = (!1);
                    }
                }
            }
            var_21 = 1;
            var_22 = (max(-15, (arr_25 [i_5] [i_6] [i_6])));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_23 = (max((((((24 * (arr_28 [i_9] [i_9]))) < var_5))), (arr_34 [i_5] [i_9] [i_9] [i_10])));
                    var_24 = (max(231, (24 != var_5)));
                }
            }
        }
    }
    #pragma endscop
}
