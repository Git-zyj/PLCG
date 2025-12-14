/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min(1, var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (max(0, 4294967287));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (((4294967295 % (((~(arr_0 [i_0])))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (((0 && 4294967295) ? (arr_2 [i_0]) : (max((min((arr_2 [i_1]), 8)), (arr_0 [i_0])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, ((max(((-(min(var_3, (arr_16 [i_0] [i_3] [i_3] [i_4]))))), (((((((arr_11 [i_3]) ? 0 : (arr_16 [0] [i_0] [i_0] [3])))) + 11))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (((arr_4 [i_0] [i_0] [i_0]) * (((((~(arr_5 [i_0] [6])))) + (max(4294967282, (arr_23 [i_0])))))));
                                var_21 = (max(var_21, ((min((((((-(arr_8 [i_3] [i_3] [i_3] [i_3])))) % ((0 ? (arr_18 [i_3] [i_5]) : var_16)))), (((4294967295 ? (arr_14 [i_0] [i_0]) : (arr_14 [i_3] [i_3])))))))));
                                var_22 = ((~(max((((arr_2 [i_6]) + var_10)), (((0 ? (arr_8 [i_0] [9] [i_4] [6]) : 4294967295)))))));
                            }
                        }
                    }
                    arr_24 [i_0] = -31;
                    var_23 = (arr_0 [i_0]);
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                var_24 = ((((((arr_15 [i_8] [i_7] [i_7] [i_0]) ? 77 : 4294967295))) && (arr_1 [i_0])));
                arr_30 [i_7] [0] [i_7] = ((arr_7 [2] [i_7] [4] [i_7]) ? 0 : (arr_27 [i_0] [i_7] [i_8]));
                var_25 ^= var_17;
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_36 [i_7] = (((!1) % ((~(arr_11 [i_0])))));
                            var_26 = (((arr_35 [i_7] [i_7] [i_7] [i_7] [1]) + ((9938 % (arr_27 [11] [i_9 - 1] [i_10 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] [i_11] [i_7] [i_7] [i_0] = ((((arr_13 [i_7]) + (arr_7 [i_0] [i_7] [i_7] [i_11]))));
                            var_27 = 2322698139901511689;
                            var_28 ^= ((-13497 ? ((2 * (arr_1 [i_0]))) : (arr_2 [i_0])));
                        }
                    }
                }
            }
            var_29 = (arr_8 [i_0] [i_7] [i_0] [i_7]);
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_30 = ((arr_51 [i_16] [i_15] [6] [6]) + (arr_35 [i_14] [i_15] [i_13] [i_13] [i_14]));
                            var_31 = (max(var_31, var_9));
                            var_32 *= var_11;
                        }
                    }
                }
            }
            var_33 = (arr_1 [i_0]);
            arr_54 [i_0] = (arr_14 [i_13 + 1] [i_13 - 2]);
            var_34 *= var_10;
            arr_55 [1] [0] [7] = 179;
        }
        var_35 = 76;
    }
    var_36 = (min(var_11, ((((((var_15 ? var_13 : var_1))) && (((var_6 ? (-127 - 1) : var_13))))))));
    var_37 = var_16;
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 21;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 23;i_18 += 1)
        {
            {
                arr_61 [1] [i_17] [i_18] = ((!(arr_58 [i_18 - 1])));
                /* LoopNest 2 */
                for (int i_19 = 4; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            var_38 = (min(var_38, var_0));
                            arr_66 [i_20] [i_17] [i_19 - 4] [1] [i_17] [i_17] = (arr_60 [i_18 - 3] [i_19 - 2] [i_20]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
