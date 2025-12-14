/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (max((max((arr_1 [i_0] [i_0]), var_15)), (((var_5 ? ((var_0 ? 1 : 1)) : (var_1 ^ var_2))))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_1] = ((!((((1 && var_11) ^ ((-1 ? 1 : 1)))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_21 += ((((var_11 | ((var_9 >> (var_8 + 3699672055824575913))))) * (arr_7 [i_0] [i_1] [i_2] [i_3])));
                            arr_11 [i_0] [1] [i_1] [1] [13] [i_4] [1] = (max((max(((min(var_14, 1))), (max(var_13, var_8)))), (((var_3 ? var_18 : (arr_9 [i_4 - 2] [i_1] [i_2] [i_2] [i_4] [i_2 - 1]))))));
                            var_22 = ((((max((max((arr_3 [i_4]), 1)), 1))) ^ ((((((1 ? -28343 : 1))) && var_5)))));
                        }
                    }
                }
            }
            arr_12 [i_1] = (((((((var_3 ? var_7 : 1))) ? (arr_5 [i_1]) : -114))) ? (((((var_14 ? -7327 : var_0))) ? (((var_8 ? var_11 : 1))) : (max((arr_7 [1] [i_1] [i_1] [i_1]), var_3)))) : (max(var_6, -var_15)));
            arr_13 [i_1] [12] = (max(((((max((arr_2 [i_0]), 32767))) != -20121)), var_4));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = (min(var_23, 1));
        arr_16 [i_5] [15] = ((((var_3 / (((-4368407209765582892 ? var_11 : var_4))))) / (((((min(var_11, 1))) ? (arr_15 [i_5]) : var_1)))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_24 = (min((((arr_17 [i_6 - 1]) ? var_12 : -var_16)), (max(0, (var_7 + var_12)))));

        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            arr_22 [11] [4] [i_6] = ((((var_15 ? var_12 : var_2)) * (((!(-1 ^ var_6))))));
            var_25 = (max(var_25, (1 << 0)));
            var_26 = ((1 ? 1 : -69));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_27 = (max(var_27, ((max((arr_24 [i_6 - 1]), (((arr_24 [i_6 + 1]) ? (arr_24 [i_6 + 1]) : var_16)))))));
            var_28 = (min(var_28, (((((var_4 >= (arr_2 [1]))))))));
            arr_26 [i_6] = (max(((max(var_14, var_12))), (((arr_2 [i_6 + 1]) ? (!9223372036854775786) : (arr_10 [i_6] [i_6] [i_6 - 1] [i_8] [i_6])))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_29 = (max(1, -5135));
            var_30 = ((((((arr_10 [i_6] [1] [i_6 - 1] [1] [i_6]) ? (arr_10 [i_6] [i_6] [i_6 - 1] [7] [i_6]) : var_8))) ? ((((((arr_5 [i_6]) || var_10)) && ((max(var_8, 1)))))) : (((32758 || 76) ? 32767 : (!-106892914886458563)))));
            arr_30 [i_6] [i_9] = var_6;
        }
        var_31 = ((((-var_2 ? (var_5 * var_4) : (11 / -7327)))) * (((arr_24 [i_6 + 1]) ? (((var_11 ? (arr_2 [0]) : var_7))) : (-9223372036854775807 - 1))));
        var_32 |= (-6833537565573353297 + 32767);

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_33 = (max((((arr_27 [i_6]) ? (arr_27 [i_6]) : (arr_27 [i_6]))), (((min(1, 1)) ? ((-3933615107751312000 ? var_6 : 8750957161728212367)) : 1))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_44 [i_6] [i_10] [i_6] [i_12] [i_13] = (((((var_18 / (((arr_24 [i_10]) ? var_12 : (arr_18 [1])))))) ? (min((min(var_13, var_14)), (var_4 % var_9))) : (((0 ? (~32767) : (!1))))));
                            var_34 += ((((((arr_39 [i_6] [i_6] [i_6 + 1] [i_13 - 1] [i_12]) ? (-127 - 1) : 127))) ? (((((var_3 ? var_16 : 8982))) + (max(var_15, 9223372036854775807)))) : -9223372036854775807));
                        }
                    }
                }
            }
            arr_45 [i_6] [3] [i_6] = (arr_29 [i_6] [12] [14]);
        }
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            arr_48 [i_6] [i_6] [i_6] = max((max(var_11, var_7)), ((max(1, 1))));
            arr_49 [i_6] = (((((var_1 ? var_13 : var_0))) ? ((var_18 ? var_19 : var_3)) : (~var_12)));
            arr_50 [i_6] = var_12;
        }
    }
    var_35 = (max((((var_12 | ((127 ? 5987 : var_19))))), ((var_9 | (var_8 % var_10)))));
    #pragma endscop
}
