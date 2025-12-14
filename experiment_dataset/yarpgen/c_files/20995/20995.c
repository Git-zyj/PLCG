/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] [i_0] = 18;
                        arr_11 [i_1] [i_1] = (255 <= -3673676951757707582);
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_16 = (max(var_16, ((((arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2]) << (((arr_7 [i_0] [i_0] [i_1] [i_2 + 1] [i_4 + 1] [i_5]) - 14055900762244585588)))))));
                            arr_16 [i_1] [1] [i_4 + 3] [i_1] [i_2] [i_1 + 1] [i_0] = 3673676951757707581;
                        }
                        var_17 &= (!1);
                    }
                    var_18 = (((arr_2 [i_1] [i_1 - 4] [i_1 - 2]) ? (((arr_0 [i_0]) ? (arr_5 [i_2] [i_1]) : (arr_14 [15] [i_1] [i_1] [i_1 - 2] [i_1 + 1]))) : (((((arr_14 [8] [i_0] [i_1] [i_1 - 1] [i_0]) && (arr_13 [i_2 - 1] [i_1] [i_1] [i_2])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_19 = 2736306967622295399;
                        var_20 = ((((((var_8 <= (arr_14 [i_0] [8] [i_7] [i_8 + 1] [i_6]))))) * (arr_26 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_7 - 1] [i_6 + 1])));
                        var_21 = (arr_23 [i_6 - 2] [i_7] [i_7 - 2] [i_8 + 1]);
                        arr_27 [i_0] [i_6 - 1] [i_7] [i_8] = (((((var_14 ? (arr_8 [i_0] [i_6 + 1] [i_6 + 1] [i_7]) : (arr_23 [i_0] [15] [i_7] [3])))) ? 1253911036 : 14552048));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_22 = arr_8 [i_0] [i_0] [i_9] [12];
            arr_30 [i_0] [i_0] [i_0] &= ((arr_21 [i_0] [i_0] [i_9] [i_9]) ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_9] [i_9]));
            var_23 = (29881 < 1);
            arr_31 [i_0] [i_0] [i_0] = var_9;
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_24 = arr_37 [i_0] [i_11] [i_12];
                    var_25 = (min(var_25, (1253911037 && 1)));
                }
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    arr_45 [i_0] [i_0] [i_11] [i_13] = (arr_29 [i_0]);
                    arr_46 [11] [i_10] = (arr_25 [i_13 - 1] [i_10] [3] [i_10]);
                    arr_47 [i_0] = (((var_8 + var_9) / ((var_1 ? (arr_2 [i_11] [i_10] [i_13]) : var_0))));
                }
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    arr_52 [i_0] [i_0] [i_0] [12] = (((arr_34 [i_14 - 1] [i_14 - 1] [i_14]) ? (arr_34 [i_14 - 1] [i_14 - 1] [i_14 - 1]) : (arr_48 [i_14 + 1])));
                    var_26 = ((-(arr_20 [i_14 + 1] [i_10] [i_10] [i_10])));
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_27 = (((((var_8 ? (arr_12 [i_10] [i_0] [i_10] [i_11] [i_15] [i_16]) : (arr_9 [i_11] [i_15] [i_16])))) ? -5 : ((var_14 << (arr_0 [8])))));
                            var_28 = (((arr_39 [i_0] [i_0] [i_15 + 1] [i_16]) ? 0 : (arr_9 [i_11] [i_11] [i_15 - 1])));
                        }
                    }
                }
                var_29 = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_10] [i_11] [i_10] [i_11]) : (arr_14 [i_0] [i_0] [i_10] [i_10] [i_0])));
            }

            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                arr_59 [i_0] [8] [i_17] = ((~(arr_38 [i_0] [2] [i_17])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_67 [i_0] [i_17] [i_18] = (arr_12 [i_10] [i_10] [i_17] [i_18] [i_10] [i_18]);
                            arr_68 [i_0] [i_10] [i_0] [i_18] [i_18] = ((-(arr_19 [i_0] [i_10])));
                            var_30 = (arr_62 [i_19] [i_18] [i_18] [i_17] [i_0] [i_0]);
                        }
                    }
                }
            }
            arr_69 [i_10] [i_0] = arr_14 [i_0] [i_10] [i_0] [i_10] [i_10];
            var_31 = (max(var_31, ((((((arr_34 [i_0] [i_0] [i_10]) - (arr_23 [i_0] [i_0] [i_10] [6]))) * (arr_28 [i_0]))))));
            var_32 = (min(var_32, var_7));
        }
        arr_70 [i_0] = ((arr_24 [i_0]) - 1);
    }
    var_33 = var_8;
    #pragma endscop
}
