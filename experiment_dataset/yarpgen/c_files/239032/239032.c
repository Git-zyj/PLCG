/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 560113995));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                arr_9 [10] [10] = (((arr_6 [i_0 + 2]) ? (arr_6 [i_0 + 2]) : var_13));
                arr_10 [i_1 + 3] = (((arr_7 [i_0 + 3] [i_0 + 3] [i_0 - 2] [20]) ? (arr_3 [i_0]) : (arr_7 [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 4])));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_15 [i_3] = var_5;

                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((((((arr_17 [i_0 + 3] [i_0 + 3]) ? 28493 : var_0))) ? ((~(arr_1 [i_0] [i_0]))) : (var_12 == var_3)));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [9] [i_4 - 1] [i_0] = var_13;
                    }

                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        arr_25 [i_0 + 3] [i_4 - 1] [i_0 + 3] [24] [i_0 + 3] = 28477;
                        arr_26 [21] [21] [21] [21] [i_4 - 1] [i_4 - 2] [i_4 - 2] = (arr_24 [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_16 &= (37063 && 104);
                        var_17 = var_1;
                        var_18 = (arr_0 [i_0]);
                        var_19 = (min(var_19, (((-(arr_14 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_30 [i_3] [11] = (arr_13 [i_0 + 1] [20] [20] [20]);
                    arr_31 [i_0] [i_0] [i_0] = (arr_29 [i_0 - 1] [i_1] [i_1 - 1] [i_4 - 3] [i_4 - 3]);
                }
                var_20 = ((-(arr_6 [i_0 + 1])));
            }
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                arr_35 [i_0 - 1] [i_8] [i_0 - 1] = arr_23 [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 3] [i_8];
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_8));
                            var_22 = (arr_34 [i_1] [i_1] [i_9 - 1] [i_1]);
                            arr_43 [i_0] [i_0] [i_0 - 2] [i_8] [i_0 + 1] [2] [i_0 + 3] = (arr_3 [i_0]);
                            arr_44 [i_8] [i_1] [i_1] = (arr_23 [23] [i_10] [i_8 + 2] [i_9 - 1] [i_8 + 2]);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_48 [i_0] [i_8] [i_0] = ((37069 ? 100 : 37055));
                    arr_49 [i_0] &= (((arr_32 [i_0]) ? (arr_32 [i_0]) : (arr_32 [i_0])));
                    arr_50 [i_8] [1] [1] [8] [8] [12] = (((arr_13 [i_1] [6] [i_1 + 3] [6]) << (arr_18 [i_0] [i_0] [i_0 - 2] [i_8 + 2] [i_0 - 2])));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_23 = ((~(arr_13 [i_1 + 3] [0] [0] [i_8 - 1])));
                    var_24 = (max(var_24, ((((arr_38 [8] [i_8 + 2] [i_8 - 1] [i_0 + 3]) ? (arr_38 [i_8 - 1] [i_0 + 3] [i_8 - 1] [i_0 + 3]) : (arr_38 [24] [5] [i_8 + 2] [i_0 - 1]))))));
                    var_25 = (max(var_25, ((var_0 >> ((-(arr_4 [i_0 - 1] [i_0 - 1])))))));
                }
            }
            var_26 = (min(var_26, (arr_3 [i_1])));
        }
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            arr_57 [i_0] [i_0] = (1 || 1);
            arr_58 [i_0] [i_0] = 8112364738935435844;
        }
        arr_59 [i_0] = ((-2612350623795737512 ? var_0 : (arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2])));
        var_27 += ((arr_42 [i_0 + 1] [i_0 + 1]) ? (arr_42 [i_0 - 2] [i_0]) : (arr_42 [i_0 - 1] [i_0 - 1]));
    }
    #pragma endscop
}
