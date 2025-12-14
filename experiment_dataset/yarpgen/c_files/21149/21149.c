/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = -1039216014083905994;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_17 = (((((arr_0 [i_0 + 1]) ? (((arr_5 [i_0] [i_0] [i_2]) ? (arr_3 [i_2]) : var_10)) : 0)) * var_14));
                var_18 = (((!(arr_4 [i_2]))));
            }

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_19 ^= (arr_3 [0]);
                    arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] = var_1;
                    var_20 = ((1 * (arr_11 [i_0 + 1] [i_0 - 2] [i_3] [i_4])));
                    var_21 = 27596;
                    arr_15 [i_4 - 1] = -var_9;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_3] [i_5] = var_5;
                    var_22 = arr_6 [i_0] [i_1] [i_3] [7];
                    var_23 *= (((arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2]) > (arr_7 [i_1])));
                    var_24 ^= ((var_3 && (~37919)));
                }
                arr_19 [i_1] = var_2;
                var_25 = (min(var_25, var_0));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_26 = ((((arr_3 [i_1]) || (arr_11 [i_8] [i_6] [i_0 - 2] [i_0 - 2]))));
                            var_27 = (arr_3 [i_1]);
                            var_28 = (arr_17 [13]);
                            arr_27 [i_0] [i_1] [i_6] [i_6] = (arr_5 [i_0 - 2] [i_0 - 1] [i_6 + 3]);
                            var_29 = var_12;
                        }
                    }
                }
                arr_28 [i_6] = (arr_2 [9]);
                var_30 = var_1;
                var_31 = ((!(arr_9 [i_6] [i_0])));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {

                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    arr_34 [i_10 - 1] [i_0 + 1] = (arr_13 [i_0] [i_0] [i_0 + 1] [1]);
                    arr_35 [i_9] [i_1] [i_1] [i_10] = 0;
                }
                arr_36 [4] [i_1] [i_1] [1] = 0;

                /* vectorizable */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_32 ^= var_8;
                    var_33 ^= (((arr_38 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]) ? var_12 : var_8));

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_34 = 750804143;
                        var_35 = (arr_2 [i_9]);
                    }
                    arr_42 [i_0] [i_1] [i_9] [i_11] = -var_13;
                }
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    arr_46 [i_0] [3] [i_1] [i_9] [i_9] = 37919;
                    var_36 = 27610;
                }
                arr_47 [i_9] [i_9] [i_9] [i_9] = (((((var_0 >= var_5) ? var_7 : ((var_1 ? (arr_45 [i_0] [i_0] [1]) : (arr_10 [i_0] [0] [i_0] [i_9]))))) == (arr_39 [i_1] [i_0])));
            }
            /* vectorizable */
            for (int i_14 = 4; i_14 < 11;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    var_37 = 17553568176808103284;
                    var_38 = (arr_40 [2] [2] [6] [i_14] [i_15 + 1]);

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_39 = var_1;
                        arr_56 [i_0] [i_1] [i_14] [i_15] [i_16] [i_16] [i_16] = (((!var_7) ? -1 : (arr_11 [i_1] [13] [i_15] [i_15])));
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_40 = (max(var_40, -1));
                        var_41 = (max(var_41, var_1));
                        arr_59 [i_0] = (arr_37 [i_14 + 3] [i_14 - 1] [i_14 - 2] [i_14 + 3] [i_14 - 3]);
                    }
                }
                for (int i_18 = 3; i_18 < 11;i_18 += 1)
                {
                    arr_63 [10] [6] [i_14] [i_18 - 2] = var_10;
                    var_42 = var_0;
                }

                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_66 [i_14] [i_14] [i_14 - 3] [i_14] = (var_4 | 0);
                    var_43 ^= ((2147483647 || (((var_2 ? var_7 : var_7)))));
                    arr_67 [i_0] [i_0] [i_14] [i_0] = ((!(arr_50 [i_14 - 2] [i_14 + 2] [i_0 + 1])));
                }
                for (int i_20 = 1; i_20 < 10;i_20 += 1)
                {
                    var_44 *= (var_6 || var_7);
                    var_45 = (min(var_45, (!var_6)));
                    var_46 = (((((~(arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (arr_37 [i_0] [i_0] [i_14] [8] [i_14]) : 140601299));
                    arr_70 [i_0 - 2] [i_1] [i_20] [i_20 - 1] = (arr_12 [i_20] [i_14 + 2] [i_1] [i_0 - 1]);
                }
                for (int i_21 = 3; i_21 < 11;i_21 += 1)
                {
                    var_47 ^= (((arr_71 [i_0] [i_1] [i_14] [i_0]) < (arr_21 [i_0 - 2] [i_1] [i_0 - 2])));
                    var_48 = 608107183948188273;
                }
            }
        }
        var_49 ^= (max(((((var_5 ? 0 : 0)))), var_13));
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 14;i_22 += 1)
    {
        var_50 = (var_8 % var_0);
        arr_75 [i_22] [3] = (((((-(arr_73 [i_22])))) ? 4133690973 : -1));
        arr_76 [i_22] [i_22] = ((-(arr_73 [i_22 - 1])));
    }
    var_51 = var_2;
    #pragma endscop
}
