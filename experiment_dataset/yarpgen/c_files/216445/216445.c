/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [1] [i_2] = ((!((-246 != (((arr_1 [i_0]) ^ 3686782980126910618))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((-119 ? -var_6 : (~-96)));
                    var_12 = (15060 >= 15068);
                    arr_11 [i_0] [8] [i_2] = var_11;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 = (arr_1 [i_3]);

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_14 = (max(var_14, (((10520209479917019246 ^ ((((var_0 || (arr_5 [14] [i_3] [i_4]))))))))));

            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                var_15 = 1;
                arr_19 [i_3] [i_4] [i_3] = var_2;
            }
            for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_16 = 2147483648;
                var_17 = (min(var_17, (((-(arr_3 [i_6 - 3] [i_6 - 2] [i_6 + 1]))))));
                arr_22 [i_4] |= 1;
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
            {
                arr_26 [i_3] [i_7 - 2] = 1;
                var_18 = (min(var_18, (((-(4294967295 < -28))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_19 = ((((var_10 ? (arr_28 [i_3] [7] [i_8] [i_3]) : var_11)) <= (((arr_30 [i_3] [i_7] [i_8] [i_3]) & var_9))));
                            arr_32 [i_3] [i_9] [4] [i_8] [i_8] [i_9] = var_3;
                        }
                    }
                }
            }
            arr_33 [i_3] [i_4] = ((15048 ? (arr_13 [i_3]) : ((-28 ? 2085543785 : 1))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {

                for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_20 = var_0;
                        arr_44 [i_3] [i_10] [1] [i_12] [i_12] [i_12] [7] = (var_11 < 2883383513514128898);
                    }
                    arr_45 [1] [i_11] [i_12] = (arr_31 [i_12 + 1] [i_12]);
                    var_21 = (max(var_21, (arr_21 [i_3] [i_10] [1])));
                }
                for (int i_14 = 1; i_14 < 10;i_14 += 1) /* same iter space */
                {
                    var_22 -= ((var_8 ? ((4294967282 ? 0 : (arr_7 [i_3] [i_10] [1] [5]))) : 8));
                    var_23 = (arr_42 [i_10] [i_10] [i_11] [i_14 - 1] [i_14 - 1] [1] [i_14]);

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_24 = 2789884;
                        var_25 = var_7;
                    }
                    var_26 = ((~((var_10 ? var_5 : 1))));
                }
                var_27 = (max(var_27, ((((arr_21 [i_3] [i_10] [i_11]) - 14173)))));
                arr_52 [i_10] = (((((var_9 ? (arr_48 [i_3] [i_3] [2]) : var_1))) && var_5));
                var_28 = (min(var_28, ((((5737 || 21) ? 4294967278 : var_8)))));
                arr_53 [i_3] [i_10] = -15048;
            }
            var_29 = ((var_11 ? -16 : (var_11 * 17360131052384303085)));
            arr_54 [1] = 1;
        }
    }
    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        var_30 = ((((!(arr_1 [i_16 + 1]))) ? (2514417059 < 601741926) : (((~-86) ? (-91 * -28715) : ((var_8 ? (arr_56 [i_16]) : 1415726299))))));
        var_31 = (((2514417059 / var_10) ? ((((max(var_5, 0))) ? (min(var_6, 15)) : 3559186581)) : (((min(-15049, 0))))));
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 12;i_19 += 1)
                {
                    {
                        arr_64 [i_18] [2] = 5737;
                        arr_65 [5] [i_18] [4] [i_19] = ((-28715 - (max(0, ((var_6 + (arr_2 [i_19])))))));
                        var_32 = (max(var_32, var_3));
                        var_33 = (((((~(arr_0 [i_16 + 1])))) ? (7 ^ 1) : 0));
                        arr_66 [i_16] [i_17 - 2] [i_18] [i_18] [i_19 + 1] = 2147483648;
                    }
                }
            }
        }
    }
    #pragma endscop
}
