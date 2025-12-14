/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = min((((!(arr_0 [i_0] [i_0])))), ((2854476035 ? -1028196356 : 4294967273)));
        arr_2 [i_0] = arr_1 [i_0];

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = arr_0 [i_0] [i_0];
            var_20 = ((!(arr_4 [i_0])));
            var_21 = (-(min((arr_0 [i_1 - 2] [i_1 - 2]), (arr_0 [i_1 - 1] [i_1 + 2]))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 = (~(min(var_17, (arr_8 [i_2]))));
            var_23 = arr_8 [i_0];
        }
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_24 += min(((((min((arr_0 [i_0] [i_4]), 632721337))) ? (min(var_3, (arr_13 [i_0] [i_3] [i_4]))) : var_13)), ((((((arr_15 [i_0]) ? var_18 : var_3)) >= (arr_10 [i_3] [i_3] [i_4 + 1])))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_6] = ((arr_0 [i_0] [i_0]) | (var_11 + var_14));
                        var_25 = (((arr_17 [i_0] [i_3 - 1] [i_5 + 1] [i_4 + 2] [i_3 - 1] [i_6] [i_5 + 1]) || (arr_17 [i_0] [i_3 - 2] [i_5 - 1] [i_4 + 2] [i_6] [i_5] [i_5 - 1])));
                    }
                    var_26 = var_10;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_22 [i_0] [i_0] [i_4] = arr_15 [i_7];
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_14 [i_7] [i_7] [i_4] [i_3 + 1] [i_0] [i_0];
                    arr_24 [i_0] [i_4] = ((arr_10 [i_4 + 2] [i_4] [i_4]) ? ((var_5 ? (arr_1 [i_0]) : (arr_14 [i_7] [i_4] [i_4 + 2] [i_4] [i_3] [i_0]))) : var_8);
                    arr_25 [i_0] [i_3] [i_4] [i_7] = (!1879048192);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_27 = arr_29 [i_8] [i_0];
                    var_28 = max((arr_14 [i_8] [i_4] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_3]), (((arr_6 [i_3] [i_3 - 3] [i_3]) ? (arr_6 [i_4] [i_4] [i_3]) : (arr_6 [i_4] [i_4 - 2] [i_4]))));
                    var_29 = (!var_10);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_30 = (min(var_30, (((!(arr_32 [i_3 - 3] [i_3 - 3] [i_4 - 1] [i_3 - 3]))))));
                    var_31 = (min(var_31, ((((3662245936 ? var_2 : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) >> (((arr_13 [i_4 - 1] [i_3 - 2] [i_0]) - 2711975910))))));
                    var_32 = (var_13 / (arr_28 [i_3] [i_3 - 1] [i_4 + 2]));
                    arr_33 [i_0] [i_3] [i_0] [i_4] [i_3 - 3] [i_4] = (arr_29 [i_3 - 2] [i_4 - 1]);
                }
                var_33 ^= min(((((arr_13 [i_0] [i_3 + 1] [i_4]) < (arr_13 [i_0] [i_3] [i_4 - 1])))), ((-(arr_27 [i_0] [i_4] [i_4 + 1] [i_0] [i_4]))));
                var_34 ^= arr_17 [i_0] [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_4 - 2];
            }
            var_35 = (min(var_35, var_3));
            var_36 -= ((+((((arr_15 [i_3 + 1]) != var_12)))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_38 [i_10] [i_0] = (~2044);
            arr_39 [i_0] [i_0] [i_0] = max((arr_30 [i_10] [i_10] [i_10] [i_0] [i_0] [i_0]), (((min((arr_0 [i_10] [i_10]), var_14)) >> (((~var_11) - 2452594860)))));
            var_37 = (min(var_37, ((((((max(4180865632, 3278267434)) * (var_4 * var_17)))) ? (arr_28 [i_0] [i_0] [i_0]) : (((arr_10 [i_0] [i_10] [i_0]) ? 1233833203 : var_4))))));
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    arr_47 [i_12] [i_12] [i_13] = (((!(((2175227761 ? var_5 : var_4))))) ? (min(((((arr_42 [i_11 + 1] [i_12]) <= (arr_40 [i_12])))), ((~(arr_41 [i_11]))))) : (((~(arr_42 [i_12] [i_13])))));
                    var_38 = (((((arr_42 [i_11 - 1] [i_11]) ? (arr_41 [i_11 - 1]) : (arr_42 [i_11 - 1] [i_11])))) ? var_13 : (max(((875924748 ? (arr_41 [i_11]) : (arr_44 [i_11 + 1] [i_12] [i_13]))), (!1479437977))));

                    for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_39 = ((arr_43 [i_12] [i_12] [i_12]) ? (!3729464953) : (!var_12));
                        arr_52 [i_11 - 1] [i_12] [i_11] [i_14] [i_12] [i_12] = ((-(((!4294967292) << (var_10 - 2510796523)))));
                    }
                    for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        var_40 = (((~var_10) ? ((var_9 ? (arr_46 [i_11] [i_12] [i_13] [i_15]) : (arr_41 [i_11]))) : (max((arr_40 [i_12]), var_2))));
                        var_41 = ((-(1129701714 != 1350478852)));
                        var_42 = (((1357739352 && 3140318376) <= var_14));
                        var_43 = ((-(arr_40 [i_11 + 1])));
                    }
                }
            }
        }
    }
    var_44 = ((((var_13 ? (~4294967295) : var_6))) ? (~var_2) : ((-(min(var_11, var_5)))));
    #pragma endscop
}
