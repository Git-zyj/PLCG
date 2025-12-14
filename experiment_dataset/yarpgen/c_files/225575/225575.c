/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((min(-var_1, var_8))))));
    var_15 = (min(var_15, ((((min(((max(var_3, var_0))), (max(var_3, var_1)))) % (max(8307324694080243742, (var_0 % 8307324694080243742))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_16 = (((arr_1 [i_1] [i_0]) % var_3));
            arr_4 [i_0] [i_1] = 3854375494460683093;
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_9 [i_2] = 7;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] = var_2;
                            var_17 = (arr_0 [i_3]);
                        }
                    }
                }
                var_18 = (10139419379629307867 % 92);
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_19 [i_6] |= (arr_7 [i_6] [i_6] [i_6]);
                        arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] &= (((arr_0 [i_7 + 1]) ? (arr_7 [i_7 + 2] [i_7 + 2] [i_6]) : 78));
                        var_19 = var_2;
                    }
                }
            }
            var_20 = (4142432978 % 12940806893685412761);
            var_21 = var_7;
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_22 = ((-((((arr_13 [i_0] [8] [i_9] [i_9] [i_9] [i_9]) == 10896)))));
                arr_25 [i_8] [i_9] = 65529;
                arr_26 [i_8] [i_8] [i_8] = ((~(8307324694080243742 | 2786888268)));
                var_23 = 7;
            }
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_24 = var_13;
                var_25 = (max(var_25, (arr_8 [i_10] [2])));

                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    arr_33 [i_8] [0] [0] [5] [i_8] [i_8] = ((var_10 ? (arr_30 [i_8 - 1]) : 178));
                    var_26 *= (arr_10 [i_10 + 1] [14] [14] [i_10 + 1] [i_10 - 1] [i_10 - 1]);
                    arr_34 [i_8 + 4] [i_10 + 1] [i_8] = ((arr_31 [i_10 - 2] [i_8 + 1] [i_8 + 1] [3] [i_10] [i_8]) % (arr_2 [i_0] [i_10 + 1]));
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_0] [i_8] [10] = 67;
                    var_27 = ((~(arr_31 [i_10] [i_8 + 1] [i_0] [i_0] [i_0] [13])));
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    arr_43 [0] [i_8] [i_8] [i_0] = (((arr_17 [i_8 + 2] [i_10] [i_13]) ? var_2 : var_3));
                    arr_44 [i_8 - 1] [i_8] [i_8] [i_8] = var_13;
                }
                var_28 = (arr_27 [i_0] [14] [i_10]);
                var_29 = (min(var_29, (((+(((arr_18 [i_0] [i_8] [i_8] [i_0] [i_8]) % 67108863)))))));
            }
            arr_45 [1] &= -5505937180024138854;
            arr_46 [i_8] [3] = 5505937180024138856;
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_30 *= ((min(var_8, (((18446744073709551615 ? (arr_36 [1] [1] [16] [6] [i_14]) : var_9))))));
        var_31 = (min(var_31, (((var_0 | ((-(arr_28 [i_14] [i_14] [10]))))))));
    }
    #pragma endscop
}
