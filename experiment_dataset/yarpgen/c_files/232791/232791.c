/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = 3813938330;
            var_21 = (max(var_21, ((((0 < (arr_6 [i_0])))))));
            var_22 += (arr_6 [i_0]);
            var_23 = (((arr_0 [i_0] [i_1]) - (arr_1 [i_0] [i_1])));
            var_24 ^= var_7;
        }
        var_25 += (((arr_3 [i_0] [i_0]) * (arr_4 [i_0] [i_0] [i_0])));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_26 = var_5;

        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_27 = var_19;
            var_28 = (arr_6 [i_2 - 4]);
            arr_14 [i_2 + 1] = (((~(arr_3 [i_3] [i_2 - 1]))));
            var_29 = ((((max((arr_12 [i_3] [i_2]), var_2))) <= (arr_13 [i_3])));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_30 = (arr_10 [i_2] [i_2 - 3] [i_4]);
            var_31 = var_14;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_27 [i_6] = ((~((+((min((arr_0 [i_2 - 2] [i_4]), (arr_20 [i_6] [i_4] [i_5] [i_6]))))))));
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= (arr_26 [i_7] [i_6] [i_4] [i_2]);
                        }
                    }
                }
            }
            var_32 = (max(var_32, ((max((((arr_26 [i_2 - 1] [i_2 - 4] [i_2 + 1] [i_2]) ? (arr_9 [i_2 - 2]) : var_15)), (((arr_3 [i_2 - 3] [i_2 - 3]) + (arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2]))))))));
            arr_29 [i_2] [i_4] = var_3;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_33 += (arr_38 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2]);
                            var_34 = (min(var_34, var_14));
                            arr_41 [i_11] [i_10] [i_9] [i_10] [i_2] = (((arr_32 [i_2 - 4]) ? (arr_6 [i_11]) : ((-(arr_30 [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_46 [i_10] [i_2] = (((((((arr_16 [i_2 - 1] [i_8] [i_9 + 1]) != var_4)))) == 481028966));
                            var_35 = var_8;
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            var_36 *= ((((((arr_17 [i_2 - 4] [i_8] [i_9 + 1]) ? (arr_24 [i_9 - 1] [i_8] [i_9] [i_2] [i_10 + 2] [i_13] [i_9 - 1]) : var_2))) ? var_8 : ((var_9 >> (var_6 - 37)))));
                            var_37 = 1135383551;
                            var_38 = var_12;
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_39 = (min(var_39, ((((arr_22 [i_2 - 3] [i_2 - 3] [i_9] [i_9 - 1]) + (var_7 * var_11))))));
                            arr_51 [i_10] [i_8] = (((arr_34 [i_14] [i_10] [i_9 - 1] [i_8]) ? (((((arr_38 [i_10] [i_2] [i_9] [i_8] [i_10]) != var_12)))) : (arr_11 [i_2 - 1] [i_8])));
                        }
                        var_40 = (((arr_17 [i_9 + 2] [i_9 + 1] [i_9]) ? (((arr_34 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 4]) / -400674777)) : var_7));
                    }
                }
            }
            var_41 = (((arr_30 [i_2 - 1]) / ((((arr_47 [i_8] [i_8] [i_2] [i_2] [i_2 - 1]) ? var_15 : (arr_16 [i_2 + 1] [i_2] [i_2 - 1]))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        var_42 &= (arr_23 [i_2 - 4] [i_16] [i_16]);

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_61 [i_17] [i_16] [i_15] [i_8] [i_2 - 2] = (((arr_21 [i_2] [i_2 - 3] [i_2 + 1] [i_2 + 1]) >> (((arr_21 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 2]) - 28456))));
                            var_43 = (var_2 == var_5);
                        }
                        for (int i_18 = 1; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            var_44 ^= (arr_42 [i_2 + 1]);
                            var_45 *= var_4;
                            var_46 ^= (arr_24 [i_18 + 3] [i_16] [i_16] [i_15] [i_8] [i_8] [i_2 + 1]);
                            arr_65 [i_16] [i_16] [i_15] [i_8] [i_16] &= ((-(arr_31 [i_16])));
                        }
                        for (int i_19 = 1; i_19 < 13;i_19 += 1) /* same iter space */
                        {
                            var_47 ^= (((~0) + var_8));
                            arr_70 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 2] = var_14;
                            var_48 = (arr_50 [i_2 - 2] [i_16] [i_2 - 3] [i_16] [i_19] [i_19 + 2] [i_15]);
                        }
                        var_49 ^= ((!(arr_60 [i_2] [i_2 - 2] [i_2] [i_2 - 4] [i_2])));
                    }
                }
            }
        }
        var_50 = ((((min(var_15, 0))) ? var_12 : var_18));
        var_51 = ((((((!(((var_1 ? (arr_67 [i_2 - 2] [i_2 - 4] [i_2] [i_2] [i_2 + 1]) : (arr_0 [i_2] [i_2 + 1])))))))) == (min((max(var_16, var_4)), (arr_6 [i_2 - 3])))));
    }
    #pragma endscop
}
