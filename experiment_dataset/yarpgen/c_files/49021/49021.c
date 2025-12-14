/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((-32756 <= 16) <= var_11));
        var_20 = var_3;
        var_21 = (var_17 & var_5);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = var_15;
        var_23 = var_4;

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_1] [5] [i_5] [4] [1] = var_8;
                            var_24 *= ((var_4 > ((((var_10 & var_15) > var_1)))));
                            var_25 = (((((var_12 && var_10) - var_13)) - var_9));
                            var_26 = ((var_7 && (var_5 / var_12)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_27 = ((((((3 - 220) > var_7))) >> (var_5 + 64)));
                        var_28 = var_3;
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_29 += var_13;
            arr_26 [i_1] [i_1] [i_1] = ((((var_11 * (var_7 * var_3))) / var_3));
            var_30 = var_2;
            var_31 = (((var_12 & var_11) || var_15));
        }
        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_32 = var_9;
            var_33 = ((var_6 * ((((var_2 && var_13) && (var_0 > var_3))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_34 = var_6;
        arr_32 [i_10] = (50 >= -3);
        var_35 = var_4;
        var_36 = var_12;
        arr_33 [i_10] = (((var_2 && var_5) != (var_16 <= var_16)));
    }
    #pragma endscop
}
