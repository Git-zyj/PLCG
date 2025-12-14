/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 = (arr_0 [4]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = (arr_0 [i_0]);
            arr_6 [3] [i_0] [i_0 - 3] = (max(var_1, ((((2184 ? (arr_4 [i_0] [i_0]) : var_4))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_19 &= ((max((3 < var_16), (arr_0 [i_0 - 4]))));
            var_20 *= ((var_4 <= (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 2])));
            var_21 &= arr_5 [i_0] [19] [i_0];
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_22 = ((-((max((arr_8 [i_0 + 1] [13] [i_0]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0]))))));
            arr_13 [i_3] [i_3] [i_0] = var_7;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_23 = (((((arr_7 [i_0] [18] [11]) ^ (arr_2 [i_0] [i_4]))) == ((~((var_6 ? var_15 : var_6))))));
            var_24 = (arr_14 [i_0] [i_0 + 2] [i_0]);

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_25 = (~var_12);
                var_26 = (max((((var_11 || ((max(var_7, var_2)))))), var_11));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_27 = (max(var_27, (((((max((((-(arr_10 [i_0] [i_0])))), ((var_14 >> (var_9 - 6483914014291927530)))))) ? ((max(var_13, (arr_15 [i_0 - 4] [i_0 + 2])))) : (arr_17 [5]))))));
                        var_28 = (arr_2 [i_0] [i_0]);
                        var_29 = (!23);
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_18 [i_7] [8] [i_5] [i_4] [0]) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_18 [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0] [12])));
                        arr_25 [2] [i_5] [14] = (((((var_10 ? (arr_19 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 + 1]) : (arr_23 [i_7] [i_6] [i_6] [i_5] [8] [21])))) ? ((var_8 % (min((arr_18 [11] [2] [7] [i_6] [4]), var_15)))) : var_2));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_30 = (((arr_4 [i_0 - 4] [i_0 - 3]) ? (arr_4 [i_0 - 4] [i_0 - 4]) : var_5));
                        var_31 = (((var_0 ? var_5 : (arr_4 [i_6] [i_0 - 1]))));
                    }
                    arr_28 [16] = ((((((arr_27 [i_4] [i_4] [i_5] [i_5] [i_4] [12] [i_6]) ? 252 : (arr_27 [i_4] [i_5] [i_5] [i_5] [i_4] [i_0 + 1] [i_4])))) ? (min((arr_10 [i_0 + 1] [i_0 - 1]), var_15)) : var_9));
                    var_32 = ((-(((arr_19 [i_0] [i_0] [i_0 - 3] [i_0 + 2]) >> (((arr_19 [i_0] [i_0 - 4] [i_0 - 2] [i_0 + 1]) - 333814994))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_33 &= ((-var_10 ? var_16 : (arr_18 [i_0] [i_0 - 2] [i_0] [i_9] [i_9])));
                    var_34 = (min(var_34, ((~(var_11 & var_14)))));
                    var_35 = (max(var_35, ((((((arr_10 [i_0] [2]) ? var_4 : 255)) != (arr_4 [i_0 + 2] [11]))))));
                    var_36 = var_8;
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_33 [i_4] [i_5] [i_10] = ((((max((arr_17 [i_0 - 4]), var_12)))) * (max((arr_20 [i_5] [i_10]), ((var_11 ? var_12 : var_13)))));
                    arr_34 [2] [i_4] [9] [18] [7] [i_5] = ((((((arr_29 [i_0] [i_0 - 1] [i_0] [i_0 - 3]) < (arr_29 [i_0] [i_0 - 3] [i_0] [i_0 - 4])))) & ((~(arr_31 [3] [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 3])))));
                }
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {

                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    var_37 *= ((((arr_22 [i_0 - 4] [i_0 - 4] [i_11] [i_12] [i_0 + 1]) ? (arr_22 [i_0 - 1] [i_4] [i_4] [i_12 - 1] [i_4]) : (arr_22 [i_0 - 4] [i_0 - 1] [i_12 - 2] [i_12 - 1] [i_0 + 2]))));
                    arr_39 [i_11] [i_11] = (((arr_7 [i_0 - 3] [i_0 - 4] [i_12 - 2]) / var_11));
                    var_38 = min((arr_29 [i_12] [i_4] [i_12 - 2] [8]), (arr_8 [13] [i_12 - 1] [i_12 + 1]));
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {

                    for (int i_14 = 4; i_14 < 21;i_14 += 1)
                    {
                        var_39 = (var_6 ? (arr_38 [i_14 - 2] [i_13] [21] [i_4]) : (max((max((arr_7 [i_0 - 2] [i_4] [i_13]), var_15)), var_2)));
                        var_40 = -var_16;
                    }
                    for (int i_15 = 3; i_15 < 21;i_15 += 1)
                    {
                        arr_48 [i_11] = (((arr_9 [i_13]) || var_4));
                        arr_49 [i_0 + 2] [i_11] [i_13] [i_11] = (min((arr_23 [i_0 - 4] [i_0 + 1] [i_0 + 2] [i_15 + 1] [i_15 - 1] [i_15 - 2]), (max((arr_32 [i_15 + 1] [19] [i_0 + 1]), (arr_22 [18] [i_0] [i_0 - 4] [i_11] [i_13])))));
                    }
                    arr_50 [i_11] [i_0] [5] [i_11] [i_13] = (arr_42 [i_0] [i_4] [i_11] [i_0 - 3]);
                    var_41 = (max((arr_10 [i_0 + 2] [5]), var_8));
                }
                arr_51 [i_11] [i_11] [i_4] [i_11] = (min((min((arr_5 [i_0] [i_0] [i_0]), var_9)), (((!(11007 && var_9))))));
                var_42 *= (!var_8);
                arr_52 [i_0 - 2] [i_4] [i_11] = (((((((arr_35 [8] [i_4] [19] [i_0]) << (var_16 + 37)))) | (((arr_38 [i_0 + 1] [i_4] [i_11] [i_0 + 1]) ? (arr_27 [i_11] [i_0] [i_0 + 2] [i_11] [i_4] [i_4] [i_0]) : 101)))));
            }
            arr_53 [19] [19] [i_0] = min(var_4, ((((!(arr_11 [i_4] [i_4] [16]))))));
        }
    }
    var_43 = -var_6;
    var_44 = var_13;
    #pragma endscop
}
