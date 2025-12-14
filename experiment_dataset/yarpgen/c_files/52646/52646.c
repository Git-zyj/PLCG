/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_16 = (max(var_16, (((~(arr_1 [3]))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_13 [2] [22] [18] [5] [i_1] [18] = -var_12;
                            arr_14 [i_1] [1] [22] [10] = (((!(arr_12 [i_1] [21] [10] [15] [2] [1]))));
                        }
                    }
                }
                var_17 = (arr_9 [i_1 + 3] [2] [i_2 - 1] [13]);
                var_18 = -var_11;
            }
            arr_15 [i_1] [19] = var_12;
            arr_16 [i_1] = (arr_9 [1] [0] [1] [12]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_24 [7] = (max(((((!(arr_22 [12] [15]))))), var_10));
                    arr_25 [22] = ((((var_4 + 2147483647) >> (((max((arr_11 [3] [3] [15]), var_5)) - 13747400703529301213)))) >> ((((var_14 % (((-(arr_7 [10] [14] [11] [8])))))) - 39501)));
                    arr_26 [1] [18] [21] = ((~((~(arr_6 [i_5] [22])))));
                    var_19 = ((min((((var_13 != (arr_7 [0] [1] [21] [15])))), (max(var_6, var_0)))));
                }
            }
        }

        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            var_20 = ((((min(var_15, var_1))) != var_12));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_21 = var_5;
                var_22 = var_8;
                var_23 = var_12;
            }
        }
        var_24 = ((+(max((arr_4 [2] [i_0] [15]), (arr_4 [22] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_25 = (var_5 ? var_9 : (arr_17 [i_9]));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                {
                    var_26 = (min(var_26, ((((((-(arr_19 [2] [12] [16])))) ? ((var_6 & (arr_4 [1] [17] [16]))) : var_13)))));

                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_43 [16] [i_10] [7] [1] [i_10] [2] = -var_11;
                        arr_44 [i_10] [5] [1] [10] = (var_1 / var_14);
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_47 [17] [0] [i_10] [11] = (arr_37 [i_10 - 1]);
                        var_27 = ((-((var_11 ? (arr_42 [i_10] [4]) : var_5))));
                        arr_48 [1] [10] [0] [16] [i_10] [17] = (((arr_27 [i_10 + 2] [12] [i_11 - 3]) != ((((!(arr_18 [7] [19])))))));
                        var_28 = (max(var_28, var_12));

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_29 = (min(var_29, ((((arr_36 [8] [12]) ? (arr_4 [i_11 + 1] [14] [i_10 - 2]) : ((~(arr_40 [14] [7] [17]))))))));
                            arr_52 [2] [i_10] [8] [5] [0] = var_8;
                            arr_53 [i_10] [8] = (arr_33 [i_10 - 1]);
                            var_30 = (arr_11 [16] [0] [15]);
                            arr_54 [11] [0] [6] [11] [5] [15] [i_10] = (((arr_49 [10] [i_11 + 1]) - (((arr_10 [0] [12] [22] [10] [i_10] [7]) >> (var_11 - 2990580157791499816)))));
                        }
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_58 [3] [i_10] = ((~(arr_42 [i_10] [15])));

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_31 = (((arr_22 [i_15] [11]) ? var_13 : (arr_22 [18] [4])));
                            var_32 = (arr_1 [i_10 - 1]);
                            var_33 &= (arr_32 [4] [14] [19]);
                            var_34 = ((var_11 >> (((arr_34 [i_11 + 1] [i_10 + 2]) - 1644054325))));
                        }
                        arr_61 [2] [12] [8] [i_10] [14] = (arr_19 [10] [9] [17]);
                        var_35 = (arr_6 [i_10] [i_11 - 3]);
                    }

                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        var_36 = (arr_63 [11] [i_10] [i_10 - 1] [16]);
                        var_37 *= (arr_18 [20] [17]);
                        var_38 = (min(var_38, ((((arr_11 [0] [1] [0]) * (((-(arr_0 [21] [12])))))))));
                    }
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {
                        var_39 = (arr_4 [4] [i_11 - 1] [i_10 + 2]);
                        var_40 = (min(var_40, (((-(arr_30 [3] [16] [6] [18]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    {
                        var_41 = ((!(arr_8 [i_19 + 1] [i_19 + 1] [i_20 - 1] [20])));
                        arr_74 [3] = var_15;
                        var_42 = (!var_6);
                    }
                }
            }
        }
        var_43 ^= (arr_60 [11] [i_9] [17] [i_9]);
        var_44 ^= ((var_11 ? var_4 : (arr_41 [9] [16] [7] [8])));
    }
    var_45 = (!var_2);
    #pragma endscop
}
