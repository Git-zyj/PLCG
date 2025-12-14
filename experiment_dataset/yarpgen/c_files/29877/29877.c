/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 |= (arr_0 [i_0]);
        var_17 = (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = -241720577;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (((var_6 | (~var_4))))));
            var_19 = ((var_1 ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 + 1])));
            arr_7 [i_1] [i_2] = var_3;
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_20 += var_0;
            arr_10 [i_1] = ((var_1 ? (arr_8 [i_1]) : ((255 ? var_3 : (arr_6 [1] [i_1] [i_1])))));
            arr_11 [0] [i_1] [0] |= ((+((((arr_6 [4] [13] [i_1]) <= var_2)))));
            var_21 = ((((var_10 ? (arr_4 [i_1] [i_3 - 1]) : 2))) ? (arr_3 [7]) : (~240));
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_22 *= (((arr_5 [i_1] [i_4 - 1]) ? ((-7892 ? 255 : (arr_13 [i_1] [i_1]))) : (arr_14 [i_1] [i_1] [i_1])));
                var_23 *= (arr_14 [8] [i_4 - 1] [11]);

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_19 [i_1] [i_1] = (((arr_13 [i_4 - 1] [1]) ? var_2 : var_7));
                    arr_20 [i_4 - 1] [i_1] = var_14;
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_24 = -52;
                        arr_27 [i_1] [i_1] = ((-(arr_24 [i_8 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_25 = ((24876 ? 115 : 2));
                        arr_30 [8] [i_4] [i_5] [i_1] [i_9] = var_5;
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_26 = (min(var_26, (~7283657177991853803)));
                        var_27 += var_6;
                        var_28 = ((-(arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                    }
                    arr_33 [i_1] [i_1] [i_5] = var_1;
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    arr_36 [2] [2] [i_5] |= 1;
                    var_29 = (max(var_29, (((var_9 <= (-32767 - 1))))));
                    arr_37 [i_1] = ((var_8 | (((((arr_17 [13] [2]) >= 1))))));
                }
            }
            for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_30 = (max(var_30, ((((arr_6 [2] [i_12 - 1] [i_4]) - (((arr_15 [i_1]) * var_3)))))));
                arr_41 [8] [i_4 - 1] [i_1] [5] = ((((((arr_39 [i_12] [14] [14]) <= (arr_34 [i_12] [7] [i_12] [i_1])))) <= 255));
            }
            for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        arr_49 [i_15] [i_15] [i_1] [i_15] [i_15] = 24876;
                        arr_50 [i_15] [i_14] [i_1] [i_13] [i_1] [i_4 - 1] [i_1] = ((-(arr_47 [i_1] [i_4 + 1] [i_1] [i_4 - 1] [i_13 - 1] [4] [i_15])));
                    }
                    var_31 = (((((~(arr_23 [i_14] [0] [11] [i_4] [i_4] [i_1])))) ? (arr_9 [i_1] [i_4 + 1] [i_1]) : 17399));
                    var_32 *= var_4;
                }
                var_33 = (min(var_33, var_6));
            }
            for (int i_16 = 4; i_16 < 14;i_16 += 1)
            {
                var_34 = 48136;
                var_35 = 15956990991346664490;
                arr_54 [i_1] [i_1] [i_16] = ((~((-82 ? 53042 : (arr_51 [3] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_36 |= ((~(arr_38 [i_18 - 1] [i_17 - 2] [i_16 - 2])));
                            arr_61 [i_1] [i_1] [i_16] [i_17 + 2] [2] = (((15 / (arr_51 [i_1] [i_1] [i_18 - 1]))));
                        }
                    }
                }
                var_37 = ((var_12 % (arr_52 [i_4 + 1] [i_4 - 1] [i_4 + 1])));
            }
            var_38 = (arr_40 [i_4 - 1] [i_4 - 1] [12]);
            arr_62 [i_1] = ((~(((arr_24 [i_1]) ? 32432 : (arr_25 [i_1] [i_1])))));
            var_39 = (((0 - 15956990991346664490) <= (~var_8)));
        }
        arr_63 [i_1] [i_1] = ((var_6 ? ((~(arr_31 [0] [i_1] [i_1] [i_1] [i_1]))) : (arr_53 [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_40 |= ((-(arr_22 [i_19] [12] [12] [12])));
        var_41 = (((((var_4 ? var_13 : 113))) ? 24876 : (max(0, 1110842527))));
    }
    #pragma endscop
}
