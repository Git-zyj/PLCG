/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -3214436617800210440;
    var_20 += ((var_16 ? (((var_3 ? ((var_1 ? var_15 : 511)) : (((var_12 ? 21 : var_16)))))) : (((!1) ? ((((-127 - 1) ? 114 : 114))) : ((511 ? var_13 : 13318373454150527324))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((var_7 ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [6]) : var_5)) : (arr_0 [i_0])));
        var_21 = (((-2147483647 - 1) ? (arr_2 [i_0] [i_0]) : 23371));

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_22 = (arr_1 [i_0] [i_1 + 1]);
            arr_6 [i_0] = 20018;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_23 = 4294966784;
                            var_24 = 20018;
                            arr_15 [4] [i_2 + 1] [i_0] [i_4] = ((!(arr_10 [i_1 + 1] [i_1])));
                            var_25 = (max(var_25, 131071));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_26 = (((((11 ? (arr_17 [i_0]) : var_13))) ? 512 : (((261632 ? -24590 : (arr_7 [i_0] [i_5]))))));
            var_27 = (min(var_27, (((9223372036854775807 ? (arr_2 [i_5 + 1] [i_5]) : (arr_2 [i_5 + 1] [i_5]))))));
            arr_19 [i_0] [i_0] = ((arr_18 [i_0] [i_5 + 1] [12]) ? (arr_2 [1] [i_5 + 1]) : (arr_2 [i_0] [i_5 + 1]));
            var_28 += ((var_5 >> 0) ? ((950532912 ? 0 : 39)) : (!var_2));
            var_29 += (((arr_17 [i_5 + 1]) ? ((3344434383 ? -1 : (arr_5 [2]))) : (~261632)));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
        {
            var_30 = (max(var_30, (((!(arr_18 [i_6 + 1] [i_6] [i_6 + 1]))))));
            arr_23 [i_0] [i_0] = (((arr_2 [i_6 + 1] [i_0]) ? (((arr_21 [1]) ? 138 : var_6)) : (((var_0 ? 0 : (arr_22 [i_0]))))));
        }
        arr_24 [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_20 [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_31 += (((arr_5 [i_10]) < var_4));

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_32 += ((1 ? (arr_31 [i_8 + 1] [i_8] [i_9]) : -1452782983993421937));
                            var_33 = (arr_17 [i_8 - 1]);
                        }

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_41 [i_7] [i_8] [i_8] [i_10] [i_12] = ((1 ? (arr_9 [i_8 - 1] [12] [i_12] [i_12] [12]) : (arr_9 [i_8 - 1] [1] [i_9] [1] [i_12])));
                            arr_42 [i_7] [i_7] = ((-104 ? ((var_3 ^ (arr_9 [i_7] [i_8 + 1] [i_9] [i_10] [i_12]))) : -114));
                            arr_43 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] = (((arr_1 [i_8 + 2] [i_12]) ? (((arr_1 [i_7] [20]) ? (arr_37 [i_7] [i_8 + 2] [i_9] [i_9] [i_10] [i_12]) : -9223372036854775787)) : ((((arr_5 [i_7]) ? var_12 : 23371)))));
                        }
                        var_34 = ((((-278738155 ? 1 : 12432924777929922275))) ? var_18 : (((arr_37 [i_7] [i_7] [8] [5] [i_10] [7]) ? 2725456744404539433 : 11277029260584931044)));
                    }
                }
            }
        }
        var_35 = (max(var_35, 1452782983993421936));
        arr_44 [i_7] = (((arr_25 [i_7]) ? -122 : 121));
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 15;i_13 += 1)
    {
        var_36 = 24840;
        var_37 = (arr_13 [20] [i_13 - 2]);
        arr_48 [i_13] = (arr_1 [i_13] [i_13 - 1]);
    }
    #pragma endscop
}
