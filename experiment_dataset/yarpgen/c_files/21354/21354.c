/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (var_9 != 19676);
                        arr_9 [i_0] [0] [9] [i_2] [7] [i_3] = 11208048276547040591;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                var_22 ^= ((!(arr_2 [6] [i_4] [i_5])));
                var_23 = ((var_18 ? var_2 : (var_12 == var_8)));
                var_24 = (arr_2 [2] [i_4] [i_5 + 1]);
                arr_14 [i_0] = (((((203 ? -3055190807725048097 : -3055190807725048103))) ? (arr_12 [i_5] [7] [i_4] [3]) : -3055190807725048073));
            }
            arr_15 [9] [i_4] [i_4] = (((arr_11 [i_0]) ? (-3055190807725048097 * var_2) : (var_12 && 3055190807725048096)));
            var_25 = (3055190807725048096 && var_5);
            arr_16 [i_0] [i_4] = (arr_2 [2] [i_0] [1]);
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] = var_9;
            var_26 -= ((~(arr_18 [i_6 + 1] [5] [i_0])));
            arr_22 [i_0] [3] = (var_9 | var_15);
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_27 += ((~(var_14 / 3055190807725048104)));
                            var_28 = (max(var_28, var_19));
                            arr_33 [5] [i_8] [i_7] [i_7] [i_7] [6] [9] = ((~(arr_30 [i_8 - 1] [i_8] [i_8] [9] [i_8 - 1])));
                            arr_34 [i_7] [i_6] [i_6] = (var_5 - var_11);
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_38 [i_6] [2] = var_14;
                var_29 = (((arr_32 [8] [i_0] [8] [i_6 + 1] [0] [i_6] [i_6]) > var_14));
                arr_39 [i_0] [1] [i_10] [3] = (arr_29 [i_0] [i_0] [8] [9] [8] [1]);
                arr_40 [7] [4] [6] [i_0] = (((((var_5 ? var_14 : var_7))) ? (arr_8 [1]) : 3055190807725048123));
            }
        }
        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 6;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_52 [2] [i_11] [i_13] = (arr_23 [i_11]);
                            var_30 = ((var_18 ? (arr_18 [i_13 + 1] [2] [i_12]) : var_19));
                            arr_53 [i_11] = (((arr_13 [i_13 + 1] [i_11 + 1]) ? var_18 : 3055190807725048096));
                        }
                    }
                }
                var_31 -= (arr_11 [i_0]);
                arr_54 [1] [i_0] [i_11] [4] = var_2;
                arr_55 [i_11] [i_11] [1] = ((~((~(arr_23 [i_11])))));
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 9;i_17 += 1)
                    {
                        {
                            arr_64 [i_11] [i_11] [i_15] [i_16] [3] [i_11] [i_15] = ((((3055190807725048096 ? -3055190807725048095 : -3055190807725048088)) % var_7));
                            arr_65 [i_11] = (((arr_43 [0] [i_17 + 1]) + (arr_43 [i_0] [i_15])));
                            var_32 = (min(var_32, var_14));
                            var_33 -= var_8;
                            arr_66 [i_0] [i_11] [i_15] [i_16] [i_11] [3] = (((arr_17 [1] [i_11 - 1]) != var_16));
                        }
                    }
                }
                var_34 = (min(var_34, (~var_18)));
                arr_67 [i_11] = ((~(arr_25 [i_11])));
            }
            var_35 = (((var_5 | (arr_59 [i_0] [4] [8]))));
        }
        for (int i_18 = 1; i_18 < 9;i_18 += 1) /* same iter space */
        {
            arr_72 [0] [9] [i_18] = (~-3055190807725048100);
            arr_73 [i_18] [2] [i_0] = ((-3055190807725048097 ? (arr_62 [i_18] [i_18 + 1] [4] [i_18] [i_18 + 1]) : var_11));
            var_36 = (min(var_36, (((var_10 >= (arr_70 [i_18] [1] [8]))))));
        }
        arr_74 [1] = ((3055190807725048102 ? var_9 : (arr_46 [i_0])));
    }
    #pragma endscop
}
