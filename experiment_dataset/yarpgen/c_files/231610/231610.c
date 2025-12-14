/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_12 = ((0 ? 44985 : 44985));
                        var_13 = (((((44967 ? 27159 : 27168))) ? ((min((arr_0 [i_0] [i_0]), (min(27159, 38353))))) : (arr_3 [i_2] [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_3] [7] = ((((min(-var_3, (((arr_7 [5] [i_2] [i_3]) ^ var_6))))) && (arr_14 [4] [i_3] [i_2] [i_3] [i_4])));
                            var_14 -= (20556 + 38389);
                            var_15 ^= (var_1 ? ((((arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 + 3] [i_1 + 1] [i_1 + 2])))) : ((((((arr_10 [i_0]) ? var_8 : var_11))) ? 6 : (min(var_4, var_11)))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_18 [i_0] [0] [4] [i_3] [0] [i_5] = 20546;
                            var_16 = (arr_17 [i_0] [0] [i_2] [i_3] [i_5]);
                            var_17 -= (arr_8 [i_0] [2] [2] [i_5]);
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_18 = (max(var_18, var_9));

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_26 [3] [i_6] = arr_9 [i_0] [i_0] [i_6 + 1] [i_7];
                var_19 = (((arr_25 [6] [i_6 + 1] [i_6]) / (arr_25 [i_6] [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_34 [i_6] = (((arr_24 [i_6] [i_9 + 1]) - (arr_24 [i_6] [i_9 - 1])));
                            arr_35 [i_6] [i_7] [i_8] [i_8] [i_9 + 1] = -var_11;
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_38 [i_10] [i_7 - 1] [i_7] [i_6] = ((51545 || (((var_6 ? 21 : var_9)))));
                    var_20 -= ((!(arr_22 [i_7 - 1] [i_10] [i_7 - 1])));
                    var_21 -= (var_6 | var_5);

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_42 [i_0] [i_6] [5] [10] [i_11] [i_11] = (var_9 ? (((arr_23 [i_0] [i_6 - 1] [i_10]) ? 27 : var_2)) : (~var_1));
                        arr_43 [i_0] [i_6] [i_7] [4] [i_7] [1] [i_6 - 1] = ((var_1 ? (((arr_3 [i_6] [i_6] [i_7]) ? 1843303231 : (arr_0 [i_0] [i_10]))) : ((((arr_10 [i_11]) - (arr_23 [i_11] [i_10] [i_7]))))));
                    }
                    var_22 = (var_3 ? (arr_14 [i_6 + 1] [i_10] [0] [i_7 - 1] [i_10]) : (arr_14 [i_6 + 1] [i_10] [i_6] [i_7 - 1] [i_7 + 1]));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_0] [i_0] [9] [i_6] = (!453468119);
                    var_23 -= ((18 ? 8 : (arr_36 [i_12] [i_6 - 1] [2] [4])));
                    var_24 = ((38379 ? -1 : (~var_10)));
                }
            }
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                var_25 = ((~(arr_8 [i_13 - 1] [7] [i_6] [i_0])));
                arr_50 [i_6] [i_13] = ((var_10 ? (((arr_8 [i_0] [i_0] [i_13] [i_6 - 1]) ? -47 : 41)) : ((-1792915455 ? var_7 : -8192))));
                arr_51 [i_6] [i_6] = (((((arr_37 [i_0] [i_6 - 1] [1] [i_13 - 2]) ? (arr_7 [3] [i_6 - 1] [i_13]) : var_3)) | (arr_30 [i_13] [6] [i_13] [i_13 + 1] [10] [i_13])));
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_26 = var_6;
                var_27 = (max(var_27, (((var_6 > ((34 ? 18446673704965373952 : -1500043546)))))));
            }
            arr_54 [i_0] [i_6] = (((arr_23 [i_6 - 1] [2] [i_6]) / 1989410065));
            arr_55 [10] &= (arr_39 [i_0] [i_0] [i_0] [7] [7] [10] [i_6]);
        }
    }
    for (int i_15 = 2; i_15 < 17;i_15 += 1)
    {
        var_28 -= (((((arr_56 [i_15 - 2]) + (70368744177669 - 83))) & (((-(arr_59 [i_15 - 2] [i_15]))))));
        arr_60 [i_15] = (((((arr_59 [i_15 + 1] [i_15 - 2]) || (arr_56 [i_15 - 1]))) ? ((~(arr_59 [i_15] [i_15 - 1]))) : (arr_59 [i_15] [i_15])));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        var_29 &= var_9;
        arr_64 [4] |= (((((arr_62 [i_16] [i_16]) / (arr_61 [i_16]))) >= (((arr_62 [i_16] [i_16]) ? (arr_61 [i_16]) : (arr_61 [i_16])))));
    }
    var_30 = (var_10 + var_5);
    var_31 *= ((45005 << (var_3 - 56704693)));
    #pragma endscop
}
