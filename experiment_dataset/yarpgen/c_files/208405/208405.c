/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 *= (~var_5);
                var_12 = (max(var_12, (arr_2 [i_1 - 1] [i_1 - 1] [i_0 - 1])));
                var_13 = var_0;
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_14 = var_2;
        var_15 ^= ((((arr_2 [i_2] [i_2] [i_2 - 2]) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 - 1]))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [i_2 - 1] [1] [i_3] [i_4] [i_5] = ((-(((var_4 == (((-1 + 2147483647) >> (1360394435 - 1360394409))))))));
                        var_16 = var_9;
                    }
                }
            }
        }
        var_17 = (max(var_17, (((arr_10 [i_2] [i_2]) > (-1360394435 / var_7)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_18 &= (~(((((arr_17 [i_6] [i_6]) + 2147483647)) >> 1)));
        arr_18 [6] = ((arr_4 [4] [i_6]) > (arr_0 [i_6]));
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {
                        var_19 = (~1);

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_20 = (max(var_20, var_0));
                            var_21 = (max(var_21, -var_4));
                            arr_31 [i_10] = var_9;
                        }
                        for (int i_11 = 4; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_22 += -var_3;
                            var_23 ^= 1;
                            var_24 = var_10;
                            arr_35 [15] [15] [3] = (arr_32 [3] [i_9] [i_9 - 2] [3] [i_8 - 2] [i_7] [i_6]);
                        }
                        for (int i_12 = 4; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_12] [i_9] [i_8] [i_7] [i_6] = (((~(arr_24 [i_6] [17]))));
                            arr_40 [i_6] = (((arr_28 [i_6] [i_9 - 1] [i_9 - 1] [i_12] [i_7 + 3]) / (arr_28 [i_6] [i_6] [i_9 - 2] [i_7] [i_12])));
                            var_25 += ((2044482535 ? 12379365646852552055 : 1));
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_43 [i_6] [i_7 + 4] [i_7 + 2] [i_8] [i_9] [i_6] = (arr_23 [i_8] [i_8] [i_8 + 1] [i_8 + 1]);
                            arr_44 [i_6] [i_7] = 3979708270;
                            arr_45 [i_6] [i_6] &= (((arr_27 [8] [1] [i_8 - 1] [i_8 - 1]) ? (arr_36 [i_7 + 1] [i_7] [i_9 - 1] [6] [i_8 - 2]) : (~var_1)));
                            arr_46 [i_6] [i_6] [5] [i_6] [0] [i_6] = var_6;
                        }
                        arr_47 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] = (((arr_1 [i_9]) > (arr_2 [7] [i_7 + 2] [i_7 + 2])));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_26 = ((~(~315259026)));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 8;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 6;i_17 += 1)
                {
                    {
                        var_27 = (((((3418046830 != ((760246719 >> (-364422425 + 364422450)))))) * -1));

                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            var_28 = ((var_10 >> (3487741979 / 236507466)));
                            arr_60 [i_15] [i_15] [i_16] [i_17] [i_18 + 2] = (((876920466 * 4263458741) ? (arr_22 [i_15 + 2] [i_17]) : (arr_54 [i_15])));
                            arr_61 [i_16] [i_15] [i_16] [i_16] [i_15] [i_18 + 2] = (-4294967290 / 2147483648);
                            arr_62 [1] [1] [i_15] [i_17 + 4] [i_17] = (~var_1);
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            arr_65 [i_19] [i_19] [i_14] [6] [i_14] [i_15 - 1] [6] &= ((min(((var_3 - (arr_4 [i_14] [i_14])), (arr_57 [i_15 + 2] [9] [i_16] [i_16] [i_16 + 1] [i_17 + 2])))));
                            var_29 = (min(var_29, 224));
                            arr_66 [i_19] [8] [i_15] [i_16] [i_15] [i_14] [i_14] = (((-(arr_24 [i_14] [6]))));
                        }
                        arr_67 [i_14] [i_15] [8] [i_17] = ((!(((((~(arr_42 [i_14] [i_14] [i_14] [i_15] [5] [i_16] [i_17 + 4]))) + ((((!(arr_55 [i_14] [5] [i_16]))))))))));
                        arr_68 [8] [i_15] = var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 2; i_20 < 21;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 22;i_21 += 1)
        {
            {
                arr_73 [i_20] [i_21] = -21;
                arr_74 [i_21] = var_1;
            }
        }
    }
    #pragma endscop
}
