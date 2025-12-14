/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (!-1257);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [10] [i_0] [1] = var_3;

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_2] = var_4;
                        arr_11 [i_3] [12] [i_3] [i_0] [i_3] = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_13 = 0;
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_4] = ((-((((max(128, -107))) ? (~8) : (arr_18 [2] [12] [12] [i_4] [12])))));
                                arr_20 [14] [i_4] [i_2] [i_4] [i_0] = -88;
                                var_14 = ((((((var_2 ? var_10 : (arr_3 [i_0] [i_1] [i_1]))) - 7173783853472138731)) + (arr_18 [i_1] [i_1] [19] [i_1] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_15 = (((arr_14 [i_6] [i_6] [i_6 + 1] [i_6]) ? (((83 ? -117 : (arr_14 [i_6] [i_2] [i_2] [i_6])))) : var_0));
                                var_16 = (arr_23 [i_0] [5] [i_0] [i_0] [i_0] [i_0]);
                                arr_25 [12] [12] [1] [i_6] [18] = min(var_7, (arr_24 [3] [i_6] [3] [i_6 - 1] [3]));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_17 = (-13193 | var_0);
                    var_18 = -22;
                    arr_28 [20] [i_1] [i_0] [i_0] = (((arr_0 [i_8]) + (arr_0 [i_0])));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    var_19 -= (arr_0 [i_0]);
                    arr_31 [i_9] [i_9] [24] = max(((((arr_13 [20] [20] [i_9] [i_1]) || ((((arr_1 [i_0]) ? var_3 : (arr_16 [16]))))))), -2118161655);
                    var_20 = ((+(((arr_22 [i_9]) ? (arr_13 [i_9] [19] [i_1] [6]) : (var_6 * var_6)))));
                    var_21 ^= 190;
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_10] [i_1] [i_10] = (arr_1 [i_0]);
                    var_22 = (max(var_22, ((max(236, -3299252225049970399)))));
                    var_23 = (((arr_15 [22] [i_1] [22] [i_10] [i_10] [10]) ? ((var_2 ? (arr_15 [i_0] [i_1] [i_1] [i_10] [11] [i_10]) : (arr_15 [i_1] [i_1] [i_1] [15] [i_0] [i_1]))) : (((arr_2 [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_2 [i_10])))));
                    arr_35 [i_0] [i_10] = var_7;
                }
            }
        }
    }
    var_24 = 14300088750704414101;
    var_25 = var_3;
    #pragma endscop
}
