/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0 + 1];
        arr_3 [i_0] = ((((((arr_0 [13]) | (arr_0 [i_0])))) ? (arr_1 [i_0 + 1]) : (((var_0 ? (arr_1 [i_0]) : var_7)))));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] = (max(((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))), var_4));
        arr_9 [i_1] = (max(((((arr_5 [i_1]) * (arr_4 [i_1])))), 1940530010));
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_15 [i_2] = ((1 ? (arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : var_2));
            arr_16 [i_2 + 1] [i_2 + 1] [i_3] = (((arr_5 [i_2 + 3]) ? (arr_10 [i_2 + 1]) : (arr_5 [i_2 + 3])));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_4] = -60;
            arr_20 [i_2] = ((var_6 + (((min(var_2, var_6))))));
        }

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_6] [i_6] [i_6] [i_6] = (~var_11);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_6] = (((arr_12 [i_2] [i_5 - 2]) ? (arr_29 [i_8] [i_5 - 2] [i_8] [i_5 - 2] [i_2 - 1] [i_2 + 1]) : (((!(arr_30 [i_2] [i_5 + 1] [i_2] [i_7] [i_7] [i_8] [i_7]))))));
                        arr_32 [i_2] [i_6] [i_7] [i_8] = ((1 ? var_6 : (arr_30 [i_2] [1] [i_2] [i_2 + 2] [i_5] [12] [i_5 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_14 = (var_1 + var_11);
                        var_15 = (arr_30 [8] [i_2] [i_5] [i_5 + 1] [i_6] [i_5] [18]);
                        var_16 = var_4;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_17 = (max(var_17, (((~(arr_29 [i_2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1]))))));
                        arr_39 [i_2] [i_2 + 1] [i_5] [i_6] [i_6] [i_7] [7] = ((~(arr_27 [i_2] [i_5] [i_6] [i_7] [i_6])));
                        arr_40 [i_2] [i_6] [i_6] = ((241 ? 3 : 255));
                    }
                    arr_41 [i_6] [i_5] [i_5] [i_6] [i_6] [i_6] = (((((var_12 ? var_11 : var_0))) || ((var_3 <= (arr_14 [i_5] [i_7])))));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_18 = (((arr_6 [i_6]) == (arr_23 [i_2 - 1])));
                    arr_46 [i_6] [i_6] = ((var_4 ? (arr_38 [i_2] [i_2 + 3] [i_6] [1] [i_6]) : (arr_38 [1] [i_2 - 1] [i_6] [i_6] [i_11])));
                }
                arr_47 [i_2] [3] [i_6] [i_5] = ((7 < ((var_2 ? var_3 : var_2))));
            }
            var_19 = (arr_44 [14] [i_2] [i_2 - 1] [i_2] [i_5 - 1]);

            /* vectorizable */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_20 = (((arr_42 [i_12] [i_2] [i_2] [i_2]) >> ((((arr_14 [i_5 - 2] [i_12]) != (arr_10 [i_12]))))));
                var_21 = (((arr_48 [i_5 - 1] [i_5] [i_2 - 1]) ? (arr_48 [i_5 - 1] [1] [i_2 + 3]) : (arr_48 [i_5 + 1] [i_2] [i_2 - 1])));
                var_22 = var_13;
            }
            arr_52 [i_2] [i_5] [i_5] = arr_35 [i_5] [i_5 + 1] [i_2];
        }
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            var_23 = (min(4109580231, -var_10));
            arr_57 [i_13] [i_13 + 1] [i_13] = (arr_11 [i_13 + 1] [i_13 + 1]);

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                arr_60 [i_13] [i_13 + 1] [i_14] = (((((1 ? 3 : 1))) ? (((arr_38 [i_2] [8] [i_13] [i_13] [i_14]) + (((1 ? 0 : 121))))) : (((var_8 ^ ((((arr_22 [i_14]) ? (arr_44 [i_2] [i_14] [i_14] [11] [11]) : (arr_50 [i_14] [i_13] [5] [i_2])))))))));
                var_24 = var_6;
                var_25 = ((((((arr_35 [i_2] [i_13] [i_13]) ? (arr_23 [i_14]) : var_13))) ? var_8 : var_9));
                var_26 = ((!(((~(arr_45 [i_13 + 1] [i_13 + 1] [1] [i_13 + 1] [i_2 + 2]))))));
            }
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_27 = (!75);
            arr_63 [1] [i_15 - 1] [i_15] = ((-(arr_50 [19] [i_15] [i_2 + 3] [19])));
        }
        var_28 = (0 > 6);
        var_29 = ((-(arr_42 [i_2 + 3] [i_2] [16] [i_2 + 1])));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {

            /* vectorizable */
            for (int i_18 = 1; i_18 < 24;i_18 += 1)
            {
                var_30 = ((arr_66 [i_18 + 1]) ? (arr_67 [i_18 - 1] [i_18 - 1]) : (arr_66 [i_18 + 1]));

                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        var_31 = (min(var_31, (arr_78 [i_20] [i_18 - 1] [i_17] [i_16])));
                        var_32 = (arr_69 [i_16] [i_17] [i_18]);
                        arr_79 [i_16] [i_17] [i_18] [i_19] [i_16] = ((-(-127 - 1)));
                    }
                    arr_80 [1] [24] [i_18] = ((!(((-(arr_74 [1] [i_17]))))));
                    var_33 = (arr_69 [i_16] [i_16] [i_19]);
                }
                arr_81 [i_18] [i_18] [i_17] [i_18] = var_1;
                arr_82 [i_17] [i_17] [i_16] |= (((0 ? -11 : 1)));
                arr_83 [i_18] [i_17] [i_18] = ((var_11 || (arr_68 [i_18 - 1])));
            }
            var_34 *= (((arr_73 [i_16] [i_17] [i_17] [i_16]) ? (arr_67 [i_17] [i_16]) : (arr_73 [22] [i_17] [i_16] [1])));
        }
        arr_84 [1] = (((((-((var_12 << (var_10 + 1839486106194725762)))))) / (max(((var_8 ? var_13 : var_0)), var_9))));
        arr_85 [i_16] = var_6;
    }

    /* vectorizable */
    for (int i_21 = 1; i_21 < 24;i_21 += 1)
    {
        arr_90 [i_21 - 1] = var_12;
        var_35 = ((((((arr_65 [i_21]) << (((arr_75 [i_21] [14] [14] [i_21]) - 82))))) ? (arr_74 [i_21] [i_21 + 1]) : 1));
        var_36 = (arr_64 [i_21 - 1] [i_21]);
    }
    #pragma endscop
}
