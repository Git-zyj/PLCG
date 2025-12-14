/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = var_1;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 *= (((arr_2 [i_0] [i_0]) ? (!var_11) : var_5));
            var_15 += ((~(~var_6)));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_8 [15] [i_2] [i_2] = ((+(((arr_0 [i_0 - 3]) ? var_5 : (arr_0 [i_0 - 3])))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_16 = ((((var_5 <= (arr_1 [i_0 - 3])))) / var_9);
                arr_12 [i_0] [i_2] [i_2] [i_2] = (((((-(arr_0 [i_2])))) ? (((-(arr_9 [6] [i_2] [i_0 - 2])))) : (arr_1 [i_0 + 2])));
                var_17 = (min(var_17, (((((((min(var_8, var_11))) ? (((arr_5 [i_3]) ? (arr_4 [i_0] [21] [21]) : var_4)) : var_2)) >> ((-(arr_11 [i_0 - 1] [i_0 - 3]))))))));
                var_18 = (min(var_18, var_7));
                arr_13 [12] [i_2] [i_2] = var_1;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_19 [i_0] [i_2] [i_0] [i_4] [i_5] [i_5] = -1064369331;
                    arr_20 [i_0] [i_0] [i_2] [i_0] = (arr_16 [i_0] [i_0] [13] [i_0 - 1]);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_19 = var_9;
                    arr_24 [i_2] = (arr_2 [i_0] [i_2]);
                    arr_25 [i_0] [i_0] [i_0 - 3] [i_2] = ((~(arr_16 [i_0 - 2] [i_0 - 2] [9] [i_4])));
                }
                var_20 = (max(var_20, (((-(arr_10 [16] [1] [i_0 - 1]))))));
                arr_26 [i_2] = (!-4333914194491645663);
                arr_27 [i_2] [i_4] [i_2] [i_4] = (((arr_14 [i_0] [i_0 + 1] [i_4] [i_2]) >= (arr_9 [i_0 - 1] [i_0 - 2] [i_0])));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                arr_30 [6] |= (!-4333914194491645655);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_21 = 2193282073988160627;
                    arr_33 [i_0] [i_2] [19] [19] [i_0 - 1] = 2193282073988160621;
                }
            }

            for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
            {
                arr_37 [14] [i_2] [22] &= min(var_9, (((arr_17 [i_0 - 2] [i_2] [i_9]) ^ (arr_14 [i_0] [i_0] [i_0] [16]))));
                var_22 += 24460;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_41 [i_0] [11] [i_2] [i_0] = (((arr_31 [i_9] [i_9] [i_9] [16] [20] [i_9 - 1]) ? var_9 : (arr_31 [i_9] [i_9] [i_9] [19] [i_9] [i_9 + 1])));
                    arr_42 [i_2] [i_2] = ((!(arr_31 [10] [i_2] [i_10] [i_10] [i_10] [i_2])));
                }
                arr_43 [i_9] [i_9] [i_2] = ((!(((-(arr_10 [i_0 - 3] [i_2] [i_9]))))));
            }
            for (int i_11 = 3; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_23 = (min((max((arr_7 [i_0 + 2] [i_0 + 2]), (arr_14 [i_2] [i_11 - 1] [i_11 - 3] [i_2]))), var_9));
                var_24 = (max(var_24, ((max((((!((max(var_11, 62092)))))), (min(((22955 ? var_0 : 47965)), (!var_5))))))));
                var_25 = (((min((arr_29 [i_0 - 3] [i_0 - 2]), (arr_29 [i_0 + 1] [i_0 - 1]))) * ((+(min((arr_29 [i_0] [i_0 + 2]), (arr_2 [i_0] [i_11 - 3])))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                arr_48 [10] [i_2] [i_12] = ((4333914194491645663 ? (arr_11 [i_0 - 3] [i_0 + 2]) : var_2));
                arr_49 [i_2] = var_11;
            }
            arr_50 [i_2] = (min(((var_0 ? var_3 : (arr_14 [i_2] [i_0 + 2] [i_0 - 2] [i_2]))), ((min(var_10, (arr_17 [i_0 - 2] [i_0 + 1] [0]))))));
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {
            arr_53 [i_0] [i_0] = (arr_35 [8] [8] [i_13]);
            var_26 = ((!((max((arr_5 [i_0 + 2]), (arr_5 [i_13]))))));

            for (int i_14 = 4; i_14 < 22;i_14 += 1)
            {
                var_27 = (min(var_27, var_3));
                arr_57 [i_0] [i_0 - 2] [6] &= ((((((arr_29 [i_0] [i_0 - 2]) ? var_4 : (arr_29 [i_0 - 3] [i_0 - 3])))) ? (min(-30, 4333914194491645662)) : (((((min(var_0, (arr_15 [i_0] [18] [i_0] [18])))) ? var_2 : ((min((arr_34 [i_14] [20] [8]), 12))))))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_28 *= (arr_3 [i_0 - 1]);
                    arr_62 [i_16] [i_16] [4] [i_13] [i_0] [i_0] = var_3;
                    arr_63 [13] [13] = (arr_46 [i_16] [i_16]);
                    var_29 = (arr_29 [i_0 - 1] [i_0 + 1]);
                    arr_64 [i_15] [i_15] [i_15] [i_15] = (!(arr_52 [i_0 - 3] [i_0 + 2]));
                }
                arr_65 [i_15] [i_15] [i_15] = var_9;
                var_30 = (min(var_30, var_7));
            }
            arr_66 [i_0] [i_13] = ((((((arr_44 [i_13] [i_13] [i_0 - 1]) ? (arr_51 [i_13] [i_13] [i_0 + 1]) : (arr_44 [i_13] [i_13] [i_0])))) ? (((arr_10 [i_0 + 1] [1] [i_0 + 1]) ? (min(var_9, var_8)) : -65521)) : (((((max((arr_52 [14] [i_0]), 4333914194491645636)) < ((min((arr_0 [19]), 1)))))))));
        }
        arr_67 [i_0 - 3] |= (min(((min((!var_0), (var_6 * var_3)))), (arr_7 [i_0 - 3] [i_0 + 2])));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        var_31 = ((((((arr_69 [i_17]) ? (((arr_51 [i_17] [i_17] [i_17]) ^ var_7)) : (arr_9 [i_17] [i_17] [i_17])))) ? var_10 : (min((arr_39 [i_17] [i_17] [i_17] [i_17]), var_8))));
        arr_70 [11] = (arr_2 [i_17] [i_17]);
        arr_71 [i_17] [9] = ((1201606308119960415 | (arr_52 [i_17] [i_17])));
        arr_72 [i_17] [8] = 1;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        arr_75 [i_18] [i_18] = var_11;
        arr_76 [10] = (arr_21 [i_18] [i_18] [12] [i_18] [i_18]);
    }
    var_32 = var_3;
    #pragma endscop
}
