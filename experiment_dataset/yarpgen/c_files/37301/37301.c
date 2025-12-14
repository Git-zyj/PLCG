/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((~(min(((min(198, -105))), (var_10 / -27997)))));
    var_21 = (-52 == -27997);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((0 ? (arr_0 [i_0]) : (arr_0 [19]))) >> (((((arr_0 [i_0]) ? -12456 : 181213059)) - 4294954789)))), ((((arr_1 [i_0]) * (arr_1 [i_0]))))));
        var_22 *= (((((min(-654287629, (arr_0 [i_0]))) / (arr_0 [i_0]))) * ((min((12455 / -12456), (arr_1 [5]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (max(((max((((var_16 && (arr_4 [i_0] [1])))), (min(var_16, (arr_6 [i_0] [i_4])))))), (((max((arr_7 [1] [5] [1] [i_3]), (arr_12 [i_0] [15] [i_0] [i_0] [i_4] [i_0]))) + -var_6))));
                                var_24 = max((arr_11 [i_0] [i_1] [16] [i_3] [i_0]), var_12);
                                var_25 = (max((((((arr_1 [1]) + 198)))), (arr_10 [i_3 + 1] [i_2] [i_1] [i_0])));
                            }
                        }
                    }
                    var_26 = (min(var_26, ((((arr_7 [i_0] [i_1] [i_2] [i_0]) * ((((min((arr_5 [i_2] [i_1] [i_1] [i_0]), 0)) % (arr_5 [i_0] [i_1] [i_1] [i_2])))))))));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_27 = (min(var_27, -var_16));
            var_28 = (7205691578974504137 < 58);

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_29 = (-12456 * -23);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_30 [i_5] [i_5] [i_9] [i_8] [i_6] = 4294967295;
                            var_30 = ((!((((arr_5 [i_5] [i_5] [i_5] [i_5 - 2]) - (arr_14 [i_8]))))));
                        }
                    }
                }
            }
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                arr_34 [i_5] [1] [i_10 - 2] [i_6] = -127;
                arr_35 [i_5] [i_6] [10] = (-2147483647 - 1);

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_31 = (((arr_11 [i_10] [i_10] [i_5 - 1] [i_5 + 2] [i_5 - 1]) ? ((-(arr_31 [i_10 - 1] [i_6 + 1] [i_5]))) : ((((arr_8 [i_5] [i_6 - 1] [i_10 + 2] [i_11]) / (arr_28 [i_5] [i_5] [i_6 + 1] [i_10 + 2] [i_11]))))));
                    arr_38 [4] &= (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (22757 - 22740)));
                    var_32 = (((arr_9 [i_5] [i_5] [i_10 + 2]) ? 61 : (arr_9 [i_5 - 2] [i_6] [i_10 + 1])));
                }
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_43 [i_6] [i_6] [i_6] = ((~((var_4 ? (arr_0 [i_6]) : (arr_13 [i_5 + 2] [i_6])))));
                var_33 = (min(var_33, 1601583123));

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_34 = (((arr_26 [i_5] [i_6] [9] [i_6 + 1] [i_5 - 2] [5] [i_6]) || 127));
                    var_35 = ((!((((arr_20 [i_5] [i_6] [i_6] [6]) - var_14)))));
                }
            }
        }
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            arr_48 [i_14] [10] = -27997;
            var_36 = ((!(arr_46 [i_14 - 2] [6] [i_5])));
            var_37 = (((((-(arr_6 [i_5 + 2] [i_5 + 2])))) ? ((((arr_27 [i_5] [i_14] [i_5] [12] [i_5]) ? var_8 : 127))) : var_10));
            var_38 = (min(-44, var_16));
        }
        var_39 |= (min(((((arr_39 [i_5] [i_5] [i_5 - 1] [i_5 - 1]) <= (arr_39 [i_5] [i_5] [i_5 - 3] [i_5 - 3])))), (max((((~(arr_29 [i_5] [13] [i_5] [i_5])))), (arr_7 [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2])))));
        arr_49 [0] = arr_28 [i_5] [i_5] [i_5 - 3] [i_5] [7];
    }
    #pragma endscop
}
