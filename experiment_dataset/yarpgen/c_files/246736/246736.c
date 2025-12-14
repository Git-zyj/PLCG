/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = (((arr_9 [7] [7] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1]) - (arr_9 [i_1] [i_2] [i_2 + 4] [i_2] [9] [i_3])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = (min(var_21, (!27)));
                            var_22 = var_18;
                            arr_13 [1] [1] [0] [6] [11] [i_3] [i_4] = (-10454 & 65);
                        }
                        var_23 = var_6;
                        var_24 = (-23 + 27);
                    }
                }
            }
        }
        var_25 = (arr_0 [1] [1]);
        var_26 &= (((((arr_4 [i_0]) + 2147483647)) << (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) - 7958286115443871369))));
        var_27 = ((((var_3 ? 0 : 28)) <= var_15));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_28 = (max(var_28, (((((arr_12 [i_0] [1] [i_0] [i_0] [i_0]) - var_10))))));
                        arr_20 [i_0] [i_5] [i_6] [i_5] [i_6] [i_0] = (!-28);
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, ((-28 < (-27 % -64)))));

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 *= ((-(((var_16 >= var_12) ? (arr_16 [i_8] [i_8] [10] [i_8]) : (((arr_18 [i_8] [i_8] [1] [8] [i_8]) - var_19))))));
        var_31 += var_4;
        var_32 = ((!((max(((var_18 ? var_19 : var_7)), var_10)))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_33 += (((arr_23 [i_9]) - ((var_19 + (arr_23 [i_9])))));
        var_34 = arr_24 [i_9];
        var_35 = (max(var_35, -27));
    }
    #pragma endscop
}
