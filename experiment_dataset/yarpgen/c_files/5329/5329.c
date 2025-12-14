/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (33554430 + var_11);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? 2279891397746252422 : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_3 + 2] [i_3] [8] |= ((2279891397746252422 ? 35 : (arr_0 [i_2] [i_2])));
                        arr_11 [i_0] [i_1] [i_2] [i_2] = 12288;
                        var_17 = (arr_1 [i_0]);
                        var_18 = (arr_5 [0] [i_1] [i_2] [i_0]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_0 [i_0 + 1] [i_4])));
                            arr_19 [i_0] [i_1] [i_4] [i_0] [i_6] = (((((arr_14 [i_0 + 1] [i_1] [9] [i_0 + 1] [i_0 + 1]) ? (arr_0 [20] [i_0]) : -122)) <= (arr_9 [i_0] [2] [17] [i_5] [i_6])));
                            arr_20 [i_6 + 4] [i_0] [1] [i_1] [i_0] [i_0] = (var_14 / 8543135785388865922);
                            var_20 = 536870911;
                            var_21 -= 3566538204;
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((((arr_6 [i_0 - 1] [4] [i_7]) >= 128)))));
            arr_25 [19] [i_0] = (((arr_7 [18] [i_0 + 1] [1] [i_0 + 1] [12] [14]) ? ((var_7 ? 15 : 14840719886949848311)) : ((((arr_18 [i_0 + 1] [i_7] [i_7] [i_7] [i_7] [2]) ? 1249538292 : (arr_8 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_29 [i_8] = 58480;
        arr_30 [i_8] = ((((min(9199554339080529876, (arr_27 [i_8])))) || ((((1 ? 2013265920 : var_1))))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        var_23 |= ((min(((max((arr_37 [1] [1] [i_11] [i_12]), (arr_17 [i_9] [i_9] [i_10] [i_11] [i_12] [i_12])))), ((45407 ? 56 : 2635701998719497654)))) | ((((((arr_5 [i_9] [i_10] [i_11] [i_9]) & -27412))) & ((8588695725973086901 ? var_13 : 2279891397746252420)))));
                        var_24 = (((arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [9]) ? (arr_40 [i_10] [i_11] [i_12]) : (-4441396615468541907 && 2279891397746252427)));
                        arr_42 [i_9] [8] [i_11] = (min(((min((arr_6 [i_12] [i_11] [16]), (((var_9 != (arr_0 [i_10] [i_10]))))))), (arr_13 [5] [3] [i_11] [i_12])));
                        arr_43 [i_9] [i_10] [i_11] [i_9] = (arr_37 [17] [17] [i_10] [i_9]);
                    }
                }
            }
        }
        arr_44 [i_9] = 3566538204;
        var_25 = var_12;
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        arr_47 [12] = (((arr_41 [1] [i_13] [7]) ? (max((arr_41 [i_13] [i_13] [i_13]), var_7)) : (min((arr_41 [i_13] [i_13] [3]), var_13))));
        var_26 = (max(var_26, (((((arr_23 [i_13] [i_13] [i_13]) && (arr_12 [i_13] [10] [i_13]))) || ((max((arr_23 [i_13] [0] [i_13]), 728429091)))))));
    }
    var_27 = var_13;
    var_28 = (max((((((max(var_7, var_6))) ? ((max(var_3, var_3))) : var_7))), (min((!127), 266338304))));
    #pragma endscop
}
