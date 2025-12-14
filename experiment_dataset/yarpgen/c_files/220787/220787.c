/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_11 -= (((arr_4 [i_3] [i_1]) ? 6121910291986135503 : (arr_8 [i_2])));
                    arr_9 [i_3] [i_2] [i_2] [i_0] = ((29434 ? (var_8 != var_5) : (arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_12 = ((-29434 ? ((-24 ? -29438 : (arr_3 [i_0] [i_4] [2]))) : ((var_2 ? var_5 : (arr_7 [i_4] [i_0] [i_1] [i_0])))));
                        arr_15 [i_2] [i_2] [i_2] = (6933423875359023581 / var_8);
                    }
                    var_13 = (min(var_13, (((-1 ? (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_2)) : var_5)))));
                }

                for (int i_6 = 2; i_6 < 6;i_6 += 1)
                {
                    arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6 + 2] = ((var_0 ? (((arr_1 [i_0] [8]) ? 6933423875359023581 : (arr_13 [i_6 + 1] [i_2] [i_2] [5] [i_0]))) : -0));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_24 [i_2] [i_1] [i_2] [i_1] [i_7] = var_6;
                        var_14 = ((((arr_1 [i_0] [i_6 + 1]) ? var_4 : (arr_17 [i_2] [i_2]))));
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_15 = (min(var_15, (!var_4)));
                    var_16 *= (-1723702071 ? 2963836456 : 1);
                    arr_29 [i_2] = (((arr_7 [i_8] [i_2] [i_1] [i_0]) ? (arr_17 [i_1] [i_8]) : (arr_13 [i_0] [i_1] [i_1] [i_8] [i_2])));
                }
                for (int i_9 = 3; i_9 < 7;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_2] [i_2] = (((arr_23 [i_0] [i_9 + 1] [i_9 + 3] [i_9] [i_9 - 2] [i_9]) + 52642));
                        var_17 *= var_8;
                        var_18 = (max(var_18, (((-(((arr_16 [i_0] [i_1]) ? (arr_3 [i_0] [i_1] [i_10]) : (arr_5 [i_0] [i_0] [i_2] [i_9 - 3]))))))));
                        arr_36 [i_2] [i_9 + 1] [i_2] [7] [i_2] = (arr_34 [i_0] [i_1] [3] [i_2] [i_9] [i_10] [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        var_19 = (arr_33 [i_11] [i_9] [i_1] [i_1] [i_1] [i_0]);
                        var_20 = (!1238411579);
                        var_21 = (min(var_21, ((((((29434 ? -1723702071 : -24))) ? var_6 : 29414)))));
                    }
                    var_22 = (max(var_22, ((((arr_34 [i_9 + 2] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9]) / -var_3)))));
                }
                var_23 = (((((arr_18 [i_0] [i_1] [i_2] [i_2]) + var_5)) < (((arr_6 [i_0] [i_1] [4] [i_2]) ? (arr_6 [i_0] [i_1] [i_0] [9]) : var_7))));
            }

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_24 |= (((var_5 ? 1 : var_9)));
                var_25 = (min(var_25, (arr_18 [i_12] [i_12] [i_1] [i_12])));
            }
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_26 = (arr_38 [i_0] [i_0] [i_0] [i_0] [i_13] [i_13]);
            var_27 = (((((arr_20 [i_0] [i_13] [i_13]) == var_7)) ? (arr_10 [i_0] [i_13]) : (arr_41 [i_13] [i_0] [i_0])));
        }
        var_28 -= (((((-1238411580 + 2147483647) >> (((arr_8 [i_0]) - 11982337232318736612))))) ? (arr_13 [i_0] [i_0] [i_0] [5] [i_0]) : ((1 ? var_2 : var_1)));
        var_29 *= (((242 + 0) < (arr_20 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
