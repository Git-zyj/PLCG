/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (arr_2 [i_0] [i_0]);
        arr_3 [2] [i_0] = (arr_1 [i_0]);
        var_18 = (arr_1 [i_0]);
        arr_4 [i_0] = (max(((var_9 ? (arr_0 [i_0]) : (((var_3 < (arr_1 [i_0])))))), (((-var_11 + 2147483647) << (var_13 - 15156)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (min(((((max((arr_5 [i_1] [4]), var_2)) == (~-32738)))), (min((var_0 == var_3), (arr_2 [i_1] [i_1])))));
        var_20 *= (min(1, var_12));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (0 * 1);
            var_22 = (min(var_13, (((var_7 + 9223372036854775807) << (((((arr_7 [1] [1] [14]) ^ (arr_2 [i_1] [i_1]))) - 4552592728258175243))))));
            var_23 = (12 * var_8);

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_24 = arr_1 [i_1];
                            arr_15 [i_1] [i_1] [i_5] [i_3] [i_1] [i_4] [18] = (((((var_9 / var_7) | (arr_13 [i_3 - 2] [i_3] [i_3] [i_3] [i_5]))) == (var_4 + var_0)));
                        }
                    }
                }
                var_25 = var_13;
                var_26 = (arr_8 [i_3]);
            }
        }
    }

    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        var_27 &= max((((var_0 & (arr_6 [i_6 - 1] [i_6 + 2])))), (min((arr_6 [i_6 + 1] [i_6 + 1]), var_16)));
        arr_20 [i_6] [i_6] = (((-((var_15 ? var_12 : var_11)))) + ((min((max(var_2, var_13)), (arr_1 [i_6 + 1])))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_25 [i_6] [i_7] [i_7] = var_7;
            var_28 = ((+(((var_12 == ((var_0 << (((arr_12 [i_7] [14] [i_7] [i_7] [i_6]) - 2660490767)))))))));
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            arr_28 [i_6] [i_8] = (min(((var_5 + ((var_9 + (arr_8 [i_8]))))), (((((min(58, 0))) >> ((((-(arr_19 [6]))) + 65189)))))));
            var_29 = (((var_15 < (var_13 ^ var_1))));

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_36 [i_6] [i_8] [i_8 - 1] [i_10] [5] [i_10] = (max((min(1, (((arr_16 [i_6 + 2]) ? (arr_10 [i_10]) : var_3)))), ((min((max(var_14, var_14)), var_0)))));
                    arr_37 [i_6] [i_6] [i_10] [1] [i_6 + 2] = (((((~(arr_35 [i_8] [5] [i_8 + 1] [i_8 + 1])))) - (min(((max(var_0, var_14))), var_7))));
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_30 = (((min(1982950083, 32768)) / ((min((arr_24 [i_9]), var_3)))));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_31 = (min(((-(max((arr_9 [i_11]), (arr_41 [i_6] [i_6]))))), (arr_17 [i_6 + 1])));
                        var_32 = var_0;
                        var_33 = (((arr_1 [i_11]) * (((arr_33 [i_9] [i_8] [i_9] [i_6] [5]) / ((max((arr_39 [i_6] [i_6] [i_8] [i_9] [i_11] [i_12]), var_4)))))));
                    }
                    var_34 = (((arr_41 [i_8 + 2] [i_8 + 2]) / (arr_1 [i_8 + 2])));
                    var_35 = (((min(var_15, (arr_19 [i_6])))) * (max((arr_41 [i_6 - 1] [i_8 + 3]), (arr_33 [i_6] [i_9] [i_6 - 1] [i_8] [i_9]))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_36 = (arr_39 [i_13] [4] [7] [i_9] [i_8 + 1] [i_6 - 1]);
                    arr_45 [i_6] = (arr_13 [i_6 + 2] [10] [i_6 + 2] [i_8 + 1] [i_9]);

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_37 = (arr_10 [i_6 - 1]);
                        arr_48 [i_6] [i_14] [i_9] = var_2;
                        var_38 = var_13;
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_39 &= (max(((min(var_14, var_11))), (((min((arr_1 [14]), var_5)) % (55 ^ 2533920253351109652)))));
                            var_40 = (11 ^ 983508645);
                        }
                    }
                }
            }
        }
        var_41 = (arr_49 [14] [i_6 + 2] [12] [i_6 + 2] [i_6]);
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        var_42 = (max(var_42, ((((arr_39 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) == ((var_15 >> (((arr_39 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) - 1678)))))))));
        var_43 = (max(var_43, var_9));
    }
    #pragma endscop
}
