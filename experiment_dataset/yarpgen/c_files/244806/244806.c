/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? (((1958418508 >> var_12) ? (((min(var_2, var_6)))) : (min(4081930860, var_14)))) : (((-2219 > 2218) ? (0 ^ 1901117956) : (min(1, var_5))))));
    var_16 = var_9;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 1] = -2219;
        var_17 = (((arr_0 [i_0 + 1] [i_0]) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 + 1] [i_0])));
        var_18 = ((2219 ? ((-2219 ? 2224 : ((8541 ? 2219 : -7127046436245971544)))) : 65535));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(var_19, ((min((min((((arr_0 [i_1] [i_1]) ? 20200 : (arr_9 [i_1] [i_2] [i_2]))), -var_1)), 50)))));
            var_20 = ((-(arr_4 [i_2] [i_1])));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_1] [20] [16] = ((!(arr_6 [i_1] [i_1])));
            var_21 = (((arr_8 [i_1] [i_3]) < ((min(57015, var_6)))));
            var_22 = var_7;
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            var_23 = (min(var_23, ((max(((((max(var_5, var_6))) ? -224 : ((var_9 ? -20201 : var_4)))), ((((~var_4) == -var_6))))))));
            var_24 |= 1;
            arr_17 [i_4] = (arr_10 [i_1]);

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                arr_21 [i_5] [i_4] [i_4] [i_1] = (((-7086558642988658801 ? (arr_8 [i_4 - 2] [i_5 - 1]) : (arr_0 [i_4 + 1] [i_4 + 3]))) <= ((((arr_4 [i_4 + 1] [i_5 - 3]) ? (arr_4 [i_4 + 1] [i_5 + 3]) : (arr_4 [i_4 - 4] [i_5 + 3])))));
                var_25 = (arr_5 [i_1]);
                arr_22 [i_5] [i_4] [i_1] = ((max(((var_4 ? var_6 : var_14)), (min((arr_11 [i_5] [i_1] [i_1]), 0)))));
                var_26 &= ((((((arr_14 [i_4] [i_4 - 4] [i_4 - 3]) ? var_2 : 8521))) ? ((((((arr_15 [i_1]) ? 3168106017 : var_9)) <= ((((arr_7 [i_4 + 2]) ? var_12 : var_10)))))) : (((!((0 < (arr_0 [i_4 - 1] [i_1]))))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
            {
                arr_25 [i_4] [i_4] = (((((((max(var_2, var_2)))) <= ((var_5 >> (arr_14 [i_1] [i_1] [16]))))) ? var_0 : var_8));
                var_27 = ((((min((arr_9 [i_1] [i_1] [i_1]), (var_14 || 31)))) ? (((var_5 ? 232 : 11))) : (arr_10 [i_1])));
                var_28 = (((arr_18 [i_4 - 2]) ? (arr_18 [i_4 - 2]) : 1863250717));
                var_29 = ((((max((arr_12 [i_1]), (((arr_2 [i_1]) ? (arr_7 [i_1]) : 4294967295))))) ? (max((arr_19 [i_4]), (min((arr_20 [i_6] [i_4 - 4] [i_1]), (arr_19 [i_4]))))) : ((min((((arr_11 [i_1] [i_4 - 4] [i_6]) ? (arr_14 [i_1] [1] [10]) : -113)), ((min((arr_24 [i_1] [i_1] [i_1]), (arr_8 [i_4] [i_1])))))))));
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                arr_28 [i_1] [i_1] [i_1] [i_4] = (min((~var_3), (((arr_8 [i_4 + 3] [i_4 - 2]) ? (arr_6 [i_1] [i_1]) : (var_7 > 0)))));
                var_30 = ((9 ? 113 : 81));
                var_31 = (max((min(var_7, -113)), (!56994)));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_32 = (max(var_32, 291164968));
            arr_32 [i_8] [i_1] = 7246;
            arr_33 [i_1] = ((!(arr_19 [i_1])));
        }
        var_33 = -60;
        var_34 = (((--77) >> (((((((arr_1 [i_1]) < (arr_12 [i_1]))) ? 6448 : -36)) + 66))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_35 += ((var_6 ? ((var_11 ^ (arr_35 [1]))) : (((-23647 > (arr_35 [i_9]))))));
        var_36 = (max(var_36, (((~((var_6 ? (arr_35 [i_9]) : (arr_34 [20]))))))));
        var_37 = (min(var_37, (((128 ? 4294967295 : 2218)))));
        var_38 = (((((-(arr_34 [2])))) / (arr_34 [1])));
    }
    #pragma endscop
}
