/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((!(41406 != var_8))));

        for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((max(((min(var_7, (arr_0 [4] [i_1])))), (max(var_3, (arr_3 [i_0] [i_1] [18])))))))));
            arr_4 [i_0] = ((((arr_1 [i_1 - 4]) | ((var_13 | (arr_2 [i_1]))))) | ((max((arr_2 [i_0]), (((arr_2 [i_0]) ? var_5 : var_14))))));
            arr_5 [i_0] [i_0] = ((var_0 == ((-(arr_0 [i_0] [i_0])))));
        }
        for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = var_14;
            arr_10 [i_2 - 1] [i_0] [i_0] = ((((((max(var_18, (arr_0 [i_0] [1])))) ? 24130 : var_2)) << (((((((var_12 ? 56 : 127))) ? ((var_11 ? (arr_7 [i_2 - 4] [i_2]) : (arr_6 [i_0]))) : var_0)) - 56465))));
        }
        for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (max(1, (arr_0 [20] [i_3])))));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_23 = ((-var_19 ? ((var_8 ? (arr_14 [i_0] [i_3 - 2] [i_3 - 4] [i_0]) : (arr_3 [i_0] [i_3 - 3] [i_0]))) : ((max((arr_7 [i_3 + 1] [i_3 - 2]), (arr_7 [i_3 + 1] [i_3 - 3]))))));
                arr_16 [i_3 - 2] [i_3 - 4] [i_0] = (((((-(arr_11 [i_0])))) ? (max((arr_11 [i_0]), var_17)) : (arr_12 [i_3 - 4])));
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_19 [i_0] [i_0] [i_5] [i_0] = ((((!(arr_18 [i_0] [i_3 - 1] [i_5 + 3]))) ? (max(var_7, (arr_7 [i_3 - 4] [i_3 - 2]))) : (arr_11 [i_0])));
                var_24 = (min((max((-2147483647 - 1), var_13)), ((max(0, 15)))));
                arr_20 [i_0] [i_5 + 3] = (((min(24138, (var_14 - var_2))) <= ((((arr_3 [i_3 - 3] [i_3 - 3] [i_0]) ? (arr_0 [i_0] [i_3 - 3]) : var_15)))));
                arr_21 [i_0] [i_3] [i_5] = (74 || 1092395189);
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_27 [i_0] = ((-(4 <= 16384)));
                        var_25 = 113;
                        arr_28 [i_0] = (max(2, 4));
                    }
                }
            }
            var_26 = ((var_13 / ((((arr_13 [i_0]) ? 1 : (arr_25 [i_3 - 1] [i_3] [i_0]))))));
        }
        for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((min((min(var_18, (-2147483647 - 1))), (arr_7 [i_8 - 2] [i_8 - 4]))) > (min(((((arr_8 [1]) == var_17))), (max(var_11, var_16)))));
            arr_33 [i_0] [i_0] [i_0] = var_13;
            var_27 = (127 * 41378);
            arr_34 [i_0] [i_0] = (max(var_9, ((41416 - (6 != 1)))));
        }
        var_28 = (min(var_28, (((((((var_3 <= (arr_31 [10]))) ? (~var_13) : (((-(arr_26 [i_0] [i_0] [i_0] [i_0])))))) <= (arr_15 [i_0] [i_0] [14] [i_0]))))));
        arr_35 [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                arr_42 [i_10] = ((((min((arr_37 [i_9]), var_19))) ? (((arr_29 [i_9] [i_9] [i_10]) ? var_0 : (arr_24 [i_9] [i_10] [i_9] [i_10]))) : ((max((arr_17 [11] [i_10] [i_10]), (arr_29 [20] [i_9] [i_9]))))));
                var_29 = ((-(min((var_0 + var_7), ((min((arr_25 [i_10] [i_9] [i_9]), var_4)))))));

                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    var_30 = ((((((var_5 ? (arr_0 [i_10] [i_10]) : (arr_13 [i_10]))) * (arr_14 [i_10] [i_10] [i_10] [1]))) <= var_0));
                    var_31 *= var_8;
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_32 = ((-((-(arr_14 [i_10] [i_10] [i_12] [i_12])))));
                    var_33 |= (arr_7 [i_9] [i_10]);
                    var_34 = (max(var_34, ((((252 ? -10527 : 2734624916032350086))))));
                    var_35 = (min(var_35, (arr_22 [i_10])));
                }
            }
        }
    }
    var_36 = var_1;
    #pragma endscop
}
