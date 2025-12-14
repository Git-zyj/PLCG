/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] [9] [i_1] = (arr_5 [i_0]);

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_11 = var_6;
                        var_12 = (max(var_12, -1));
                        arr_10 [i_0] [i_0] [15] [i_3 - 3] = (0 ^ 1355);
                        var_13 = var_0;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_14 = var_2;
                        var_15 = (arr_1 [i_0]);
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            var_16 ^= (((arr_13 [i_6 - 1] [i_6 - 1]) == (arr_15 [i_6 - 1] [i_6])));
            var_17 = (((arr_15 [i_5] [i_6 + 1]) ? (arr_13 [17] [i_6 + 1]) : (arr_15 [i_6] [i_6 - 2])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_18 -= ((~(arr_15 [i_5] [i_5])));
            var_19 = var_0;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_20 -= (~18446744073709551585);
                        arr_24 [i_5] [14] [i_9] = (((arr_20 [i_8 + 4] [i_7 - 1] [i_8]) ? var_2 : -var_5));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_21 &= (min(((18446744073709551585 * (max(30, (arr_26 [i_10 - 1] [i_5] [i_5]))))), (max(((var_10 ? 14045476602080335414 : 0)), 31))));
            var_22 = ((((max(-30247, 3)))) ^ ((-1 ? (((arr_26 [i_5] [i_10] [4]) + (arr_14 [i_10]))) : (((max(32329, 2047)))))));

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_30 [i_11] = (max(1, 1725960666));
                arr_31 [i_10] [i_10] [i_10] = (max(((var_0 ? (arr_14 [i_5]) : (arr_29 [i_10] [5] [i_10 - 1] [i_5]))), ((max(1347, 2027)))));
                arr_32 [1] [1] = ((var_1 || (arr_19 [i_5] [i_5] [i_5] [3])));
            }
        }
        arr_33 [i_5] = (arr_15 [i_5] [i_5]);
    }
    for (int i_12 = 3; i_12 < 19;i_12 += 1)
    {
        arr_37 [i_12 - 2] [i_12] = 30236;
        var_23 = 140737354137600;
    }
    #pragma endscop
}
