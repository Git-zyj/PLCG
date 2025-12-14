/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_11 = (((((arr_1 [i_1 + 2]) / (arr_1 [i_1 + 1]))) / (arr_1 [i_1 - 1])));
                        var_12 = ((((arr_8 [i_0] [i_0] [i_1 - 1] [i_1] [i_2]) ? (arr_0 [i_1] [i_1]) : var_0)));
                        var_13 = var_7;
                        var_14 = (max(var_14, ((((arr_2 [i_0]) >= (-1299543974563411721 >= 48480))))));
                        arr_10 [9] [i_3] = (min(0, (arr_7 [0] [0] [i_2])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((((arr_5 [i_0] [i_0] [i_0] [i_0]) >= (arr_5 [i_0] [i_0] [4] [0]))) || var_8)) ? var_7 : ((var_6 ? var_4 : (arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_20 [i_6] = 1;
                    arr_21 [i_4] [1] [i_5] [i_5] = 489935523;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_15 *= (min(((~(((arr_0 [i_7] [i_8]) ? var_3 : 155)))), var_8));
                    arr_28 [i_8] [i_7] [11] = ((((((arr_6 [i_4] [13] [i_8]) ? var_3 : 1))) && var_3));
                    arr_29 [i_4] [i_7] [i_4] = (max((!var_1), (((var_9 ^ (arr_1 [i_4]))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_33 [i_9] = ((min(((min((arr_7 [18] [i_9] [i_9]), 0))), (max(var_9, (arr_6 [i_9] [17] [1]))))));
        var_16 = (max(var_16, var_4));
        var_17 -= ((var_8 % ((1007516420 ? (arr_30 [i_9]) : ((((arr_8 [i_9] [18] [i_9] [i_9] [i_9]) ? var_1 : (arr_31 [i_9]))))))));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_44 [i_10] [0] [i_11] [0] = (max(((((((arr_2 [i_9]) + var_3)) <= ((((arr_37 [15] [i_11]) | (arr_8 [i_9] [i_9] [i_9] [i_9] [i_9]))))))), ((((((arr_36 [i_9]) ? var_1 : var_7))) ? (((((arr_41 [i_9] [i_10] [i_11] [i_12] [i_10]) && (arr_34 [i_9] [i_11 - 1] [i_12]))))) : (max(var_2, var_9))))));
                        var_18 = (max(var_18, var_6));
                        arr_45 [i_10 - 1] [0] [0] [i_10] [i_10] [i_10] = (arr_34 [0] [i_10] [i_12]);
                        var_19 = (max(var_19, (min((((arr_1 [i_12]) ? (arr_31 [i_11 - 3]) : (arr_4 [i_10] [i_11 + 1] [i_12]))), ((1 << (((arr_4 [12] [i_10] [i_11]) + 1047799259))))))));
                        var_20 = (((((arr_7 [i_12] [i_12] [i_9]) << (var_0 - 146))) << ((var_6 % (var_7 || 2928341426)))));
                    }
                }
            }
        }
        var_21 ^= (((var_7 / 1) % var_0));
    }
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    arr_52 [i_13 + 4] [i_13 + 3] [8] [i_13] |= var_1;
                    arr_53 [i_15] [i_14] [i_13 + 3] = var_4;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 11;i_19 += 1)
                        {
                            arr_65 [i_13 + 2] [i_16] [i_13 + 2] [i_13 + 2] [i_19] = var_3;
                            var_22 = (((((arr_51 [5] [i_17] [i_13]) % var_7)) | (arr_13 [i_16])));
                        }
                        for (int i_20 = 4; i_20 < 10;i_20 += 1)
                        {
                            arr_69 [i_13] [i_13] [i_16] [i_17] [0] [12] [i_16] = var_0;
                            arr_70 [i_16] [i_18] [i_17] [i_16] [i_16] = ((var_2 ? ((((arr_62 [i_13] [12] [1] [i_16] [i_20]) ? var_2 : (arr_35 [i_13] [i_13] [6])))) : var_2));
                            var_23 += var_9;
                        }
                        var_24 = var_8;
                        arr_71 [1] [i_16] [i_17] [i_16] = ((((arr_16 [i_13 + 3] [i_13 + 2] [i_13 + 4]) ? (((arr_61 [i_13 + 3] [i_13] [i_16] [i_16] [i_16] [i_18]) ? var_8 : (arr_38 [i_13 + 3]))) : 511)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
