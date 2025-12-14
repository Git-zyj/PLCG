/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (~57012);
        var_21 = (max(var_21, (((-((var_6 ? (arr_0 [i_0]) : var_0)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((((var_11 && (arr_3 [i_1])))) & (((arr_4 [i_1]) ? var_17 : ((min(5, (arr_4 [i_1]))))))));
        var_22 = ((-(((arr_3 [i_1]) ? (127 / -22) : ((-1410625765724491323 ? 139 : -7610022156399772240))))));
        var_23 = ((~(((arr_3 [i_1]) | ((max(var_9, -60)))))));
    }

    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((max((arr_8 [i_2 - 1] [i_2 + 1]), var_5)) - (arr_3 [i_2 + 1])));
        var_24 = ((-((12402 % (arr_2 [i_2 + 1] [i_2 + 4])))));
        var_25 = ((((((var_2 ? 6785956942435880569 : var_18)) + (-3481619878856992571 || 6559))) & ((min((arr_7 [i_2 + 3] [i_2]), (arr_1 [9] [i_2]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_18 [i_4] [i_5] |= var_7;

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_26 = (min(var_26, (((((((var_13 ? var_9 : 31322)))) ? (((((arr_21 [i_2 + 3] [i_5 + 1] [9] [i_6 + 1] [7]) || -29432)))) : (((arr_3 [i_4]) / (arr_16 [i_2] [i_2] [i_4] [i_5] [i_6] [i_6]))))))));
                            var_27 = (((((arr_16 [i_2] [3] [i_4] [i_5] [i_6] [i_6]) ? (((((arr_3 [i_3]) + 2147483647)) >> (42294 - 42267))) : ((min((arr_14 [i_4]), var_3)))))) && (!-31487));
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_28 = var_7;
                            arr_26 [i_2] [i_3] [i_4] [i_3] [i_5 - 1] [11] [i_7] = (arr_6 [i_4]);
                            arr_27 [i_2] [i_3] [i_4] [i_5] [i_3] = (58977 * 31457);
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_29 |= ((((~(((arr_17 [5] [i_3] [i_3] [0] [i_5 + 1] [i_5 + 1]) >> (((arr_17 [i_2] [i_3] [i_3] [i_4] [i_5] [i_8]) - 217)))))) / ((1 ? -31 : 26))));
                            arr_31 [i_2 + 1] [5] [i_3] [i_4] [i_5] [i_5] [i_8] |= (min((((arr_14 [i_2 + 2]) ? var_17 : -31)), (min((((!(arr_9 [i_2] [9])))), ((var_7 ? var_8 : 255))))));
                            var_30 = (((((((arr_2 [i_2 + 2] [i_5 - 1]) > (arr_2 [i_2 + 4] [i_5 + 1]))))) + (((arr_2 [i_2 + 2] [i_5 - 1]) ? var_17 : (arr_2 [i_2 + 2] [i_5 + 1])))));
                        }
                    }
                }
            }
        }
        var_31 = (max(var_31, (arr_1 [i_2 + 4] [i_2 + 2])));
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_32 = ((!((((1 ? (arr_16 [i_9] [i_9] [14] [i_9] [i_9 + 4] [i_9]) : var_14))))));
        var_33 += 2935233749491633755;
        var_34 = (min(var_17, var_15));
    }
    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_48 [i_10] [i_11] [i_10] [i_13] [i_10] = (((((arr_36 [i_10]) & (min(-12329, (arr_13 [i_10] [i_11] [i_12] [7]))))) ^ (((((((var_12 ? (arr_14 [i_12 + 1]) : (arr_40 [i_10] [i_12 + 1] [i_10])))) || ((max(var_1, (arr_8 [i_11] [i_13]))))))))));
                            arr_49 [i_10 + 4] [i_10] [i_11] [i_12] [i_12] [i_13 + 1] [i_14] = (-29432 / 4611681620380876800);
                            var_35 = (max((min(-var_5, (arr_39 [i_10] [i_12]))), (((var_11 ? (arr_32 [i_10]) : ((min(var_18, (arr_1 [i_11] [1])))))))));
                        }
                    }
                }
            }
            var_36 = ((((arr_14 [i_10]) + var_16)));
        }
        for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_37 = (arr_9 [i_10] [9]);
                            arr_60 [i_10] [7] [i_15] [i_16] [i_17] [i_10] = ((((max((((-(arr_52 [i_10])))), (min((arr_13 [i_10] [i_15] [12] [i_17]), var_15))))) ? ((-29653 ? 622 : 1975456340)) : 147));
                            arr_61 [i_10] [10] = ((-(((arr_24 [i_10 + 1] [i_10] [i_10] [i_10] [i_15 + 1] [i_18 - 2]) ? (arr_53 [i_10 + 4] [i_10] [i_18 - 1]) : (arr_24 [i_10 + 3] [i_15] [i_15] [i_15] [i_15 - 1] [i_18 - 1])))));
                            arr_62 [i_10] [i_16] [i_18] = (min((arr_16 [i_10] [i_15] [i_15] [i_16] [i_17] [i_18]), (((min((arr_24 [i_10] [i_10] [i_16] [i_17] [i_17] [i_18]), (arr_4 [i_16]))) / (arr_6 [i_10])))));
                        }
                    }
                }
            }
            arr_63 [i_10] [i_10 - 1] [i_15] = (((((64 ? var_1 : -26153))) ? (arr_34 [i_10]) : var_6));
            var_38 = (min(var_38, (((((((((arr_52 [14]) ? var_14 : var_2)) % -103))) ? (arr_33 [0] [i_15]) : 1)))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                {
                    var_39 = (min(var_39, var_12));
                    arr_70 [i_10] [i_19] [i_10] [i_10] = (arr_54 [i_10] [i_10] [1]);
                    arr_71 [i_10] [i_10] [i_19] [i_20] = var_17;
                }
            }
        }
    }
    var_40 = var_15;
    #pragma endscop
}
