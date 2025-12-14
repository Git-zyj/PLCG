/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = (((min(((min(var_14, var_10))), (-104 * var_8))) & ((((!(arr_7 [i_1 - 1] [i_3 - 1] [i_3] [i_3] [i_3])))))));
                        arr_9 [i_2] = (((!(var_2 || var_0))));
                        arr_10 [i_2] [i_2] [1] [1] [i_2] = (((arr_6 [2] [i_0] [i_0] [i_1 + 3]) ? ((((((-1 ? var_9 : var_11))) ? 1436691134 : 1))) : (((-2147483647 - 1) ? var_13 : (arr_3 [i_1 + 1] [i_1 + 2])))));
                    }
                }
            }
        }
        var_16 = (var_12 * ((var_5 / (-2147483647 - 1))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_17 = ((178 ? (min(var_14, ((-1349014005 ? var_8 : 7)))) : 141));
                                var_18 = (min(((max(var_12, 4194304))), ((var_9 + (arr_21 [i_8 - 2] [i_8 - 2] [7] [i_8] [i_8 - 2] [i_5])))));
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        arr_27 [i_5] [7] [i_5] = (arr_23 [i_4] [i_9 - 3] [i_6] [i_9] [i_6] [i_5]);
                        arr_28 [i_4] [i_5] [i_4] [i_5] |= -7438034985841490840;
                        var_19 = (max(var_19, (min((((-(max(-6433, 4692100731486305896))))), var_12))));
                        arr_29 [0] [i_5] [8] [2] = 7812180367943250594;
                    }
                    for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_20 = (max((arr_25 [i_5] [i_6] [7] [i_5]), (min(var_1, (arr_25 [i_5] [i_10 - 2] [i_10 + 1] [i_10])))));
                        arr_33 [i_6] [i_5] [i_6] [i_6] [i_6] = ((((!(var_12 || 16022))) ? -31872 : (max(162, var_3))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_21 = (max(var_8, (max((-93 / 1436691134), (var_0 / var_6)))));
                    arr_38 [i_4] = 1099511365632;
                    var_22 = var_0;
                    arr_39 [12] [12] [i_12] [i_12] = (((max((arr_21 [i_4] [i_11] [i_12] [i_11] [4] [i_4]), 1073741823)) >= 2174519727));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 10;i_13 += 1)
    {
        arr_42 [i_13] [9] = (((((((arr_2 [i_13]) && (arr_7 [i_13] [i_13] [2] [i_13] [i_13]))))) != var_9));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        var_23 = (min(var_23, ((((arr_47 [i_13 - 2] [i_13 + 1] [i_13 + 1]) / var_12)))));
                        var_24 = (1349014004 - -1);
                    }
                }
            }
        }
        arr_52 [i_13] &= ((var_7 <= (arr_32 [i_13 - 1] [12])));
    }
    var_25 = var_1;

    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {

        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            arr_60 [i_18] [i_17] [i_18] = 7;
            var_26 ^= (9223372036854775807 * -9223372036854775788);
        }
        var_27 = (min(var_27, -7812180367943250600));
    }
    #pragma endscop
}
