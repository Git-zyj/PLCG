/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4092;
    var_17 ^= ((~((var_15 * (min(var_2, var_0))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 |= (((((arr_1 [i_1 + 3]) ? 0 : (arr_1 [i_1 + 1]))) * var_3));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_19 = (arr_3 [i_1 + 1] [i_0]);
                var_20 = 26041;

                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_21 = ((-(var_8 / var_9)));
                    var_22 = (max(var_22, ((min(((((~26781) * var_3))), (((!319304836587421834) * (var_3 / -26774))))))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, ((15902877971452085451 * (~var_12)))));
                    arr_11 [i_0] [i_0] [5] [i_0] = var_7;
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_24 = ((26042 ? (((~441547883) ? ((var_8 ? (arr_3 [i_1] [i_0]) : var_12)) : (((max(var_5, var_11)))))) : (((((var_5 ? var_15 : var_14)) & (max(var_8, var_15)))))));

                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        var_25 = var_7;
                        var_26 = ((var_15 * (min((var_9 / var_9), (-12 ^ var_5)))));
                    }
                    var_27 += (max(((((arr_7 [i_2] [i_2]) ? var_11 : var_7))), ((var_1 ? 2423852886 : (arr_5 [i_0 - 2])))));
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_28 = var_9;
                    var_29 = (min(var_29, ((min(((1585673483 ? var_15 : var_12)), var_3)))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_22 [11] [i_0] [i_2] [11] [i_2] [1] = ((-((var_8 ? (((var_2 ? 456529163 : var_10))) : -var_13))));
                    var_30 = ((!(max((arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_8]), (arr_10 [i_1] [1] [i_1 + 2] [i_8])))));
                    arr_23 [i_0] [i_1 - 1] [i_0] [i_8] = -5934947337923848065;

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        arr_26 [i_0] [i_0] = 6907980865573868806;
                        var_31 = var_11;
                        var_32 = ((!((((arr_13 [i_9 - 1] [i_1 + 1] [1] [i_1] [i_0 + 4] [i_0]) ? var_14 : 63)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_33 = (((-9223372036854775806 ? 63 : var_10)));
                        var_34 = var_6;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_35 = var_7;
                        var_36 = ((((-(((arr_25 [i_0] [1] [i_11] [1] [i_8] [i_11] [i_2]) | var_10)))) * (~var_10)));
                    }
                }
                var_37 = var_3;
            }
        }
        var_38 = 22792;
        var_39 = (~((12 ? var_15 : (min(var_0, var_9)))));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_37 [i_12] [i_12] = ((((max((arr_36 [i_12] [i_12]), ((var_14 ? var_2 : var_10))))) ? (3020561072520666544 | var_12) : ((var_11 ? var_6 : (var_12 * var_13)))));

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 4; i_14 < 17;i_14 += 1)
            {
                arr_43 [i_12] [i_13] [i_12] = (~var_9);
                var_40 = (~(max(var_6, (((arr_41 [i_12] [i_14] [i_13] [i_12]) * var_14)))));
                var_41 = (max(((min(127, (var_13 / var_4)))), (min((max(var_9, 3020561072520666544)), var_5))));
                arr_44 [i_12] [i_14] [i_12] [i_12] = ((var_7 ? -var_11 : (((arr_40 [i_12] [i_13]) ? (-13462 / var_6) : (var_6 / 1210225863055538582)))));
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_42 = ((((((arr_47 [i_12] [6] [i_15 + 2] [i_16]) + (var_1 + var_1)))) ? ((max(314505988, (((var_14 ? 1 : var_7)))))) : ((~(min(var_9, var_15))))));
                        arr_50 [i_12] [i_13] [i_12] [i_12] [i_16] = (-26774 * 1);
                        var_43 += var_14;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 16;i_18 += 1)
                {
                    {
                        var_44 = ((+((var_10 ? (arr_36 [i_17 + 2] [i_18 - 3]) : (arr_36 [i_17 + 2] [i_18 - 1])))));
                        var_45 = (max(((((var_15 ? var_13 : 18442240474082181120)))), var_0));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            var_46 = (var_10 * var_5);
            var_47 = (max((var_3 / var_13), 127));
        }
        var_48 = (1 ? var_1 : (((((~(arr_49 [i_12] [i_12] [i_12] [i_12])))) * 3980461295)));
        arr_58 [i_12] = (((((max(var_9, (min(1, 115)))))) * var_2));
        var_49 = (max(var_49, 1));
    }
    var_50 ^= 1;
    #pragma endscop
}
