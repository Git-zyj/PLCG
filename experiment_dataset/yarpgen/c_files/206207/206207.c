/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (~var_13);
                arr_7 [i_0] [i_1] [i_1] = (var_12 << (((arr_1 [i_0]) - 1383586284)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (arr_3 [i_0] [i_1])));
                            arr_13 [i_1] [i_1] = var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, (var_12 >> -var_12)));
                            arr_18 [i_5] [i_1] [1] [i_1] [i_1] [i_0] = var_13;
                            var_20 = (max(var_20, (1 || 9)));
                            arr_19 [i_0] [i_1] [i_4] [i_1] = var_10;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_1;
    var_22 = ((!(((var_16 - var_16) && var_0))));

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_23 = (~var_0);
        var_24 = (max(var_24, var_10));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_25 = (max(var_25, (arr_2 [i_7] [8])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    var_26 = var_9;
                    arr_28 [i_9] &= (+(((arr_16 [i_7] [i_7] [i_8] [i_8] [i_9 - 1] [i_9 - 1]) >> (var_3 - 12923049738630859258))));
                    var_27 = var_9;
                }
            }
        }
        var_28 = ((var_15 % (((((!(arr_14 [i_7] [i_7] [i_7])))) | ((~(arr_27 [i_7] [i_7] [i_7])))))));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_31 [i_10] [i_10] = var_3;
        var_29 = (arr_30 [i_10] [i_10]);
        var_30 -= arr_2 [6] [6];
        var_31 += ((~((var_11 << (((((arr_5 [i_10]) | (arr_14 [i_10] [i_10] [i_10]))) - 18446744073673373416))))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_32 &= (((arr_11 [4] [i_14]) == ((((((arr_11 [i_14] [i_14]) / (arr_15 [i_12] [18] [i_14]))) > ((((arr_35 [i_14] [i_11] [i_14]) + (arr_34 [i_14] [i_11])))))))));
                        arr_43 [i_14] [i_11] [i_12] [i_11] [i_11] = var_8;
                        arr_44 [i_11] [i_12] [i_12] [i_11] [i_13] [i_14] = (i_11 % 2 == 0) ? ((((((((((arr_35 [i_11] [i_11] [i_11]) + 2147483647)) >> (((arr_1 [i_14]) - 1383586263)))) % var_15)) >> (var_0 / var_14)))) : ((((((((((((arr_35 [i_11] [i_11] [i_11]) - 2147483647)) + 2147483647)) >> (((arr_1 [i_14]) - 1383586263)))) % var_15)) >> (var_0 / var_14))));
                        var_33 = var_15;
                        var_34 &= (((arr_41 [i_11] [i_14] [i_11] [i_11]) * ((var_10 / (arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                    }
                }
            }
        }

        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_35 = ((+((((arr_40 [9] [i_11]) || (arr_37 [i_15]))))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_36 = arr_50 [i_11] [i_11] [i_11] [i_17];
                            var_37 = (max(var_37, (arr_37 [i_15])));
                            var_38 = (var_3 == var_3);
                            arr_57 [i_11] = var_6;
                        }
                    }
                }
            }
            var_39 = ((var_0 / (arr_1 [i_11])));
            var_40 = (~var_4);
            arr_58 [6] [8] [8] |= ((((-(arr_54 [i_15] [i_15] [0] [0] [i_11]))) + ((((((arr_49 [i_15]) + (arr_42 [2])))) + (((arr_51 [i_11] [i_11] [i_15]) / (arr_50 [10] [i_15] [i_15 + 1] [i_11])))))));
        }

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_41 = (max(var_41, ((((((((var_13 >= (arr_1 [i_11])))) & var_7)) >> (!2147483642))))));
            arr_62 [1] |= arr_40 [2] [2];
        }
        for (int i_20 = 2; i_20 < 21;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 18;i_23 += 1)
                    {
                        {
                            var_42 = (arr_54 [9] [i_20] [i_20] [i_22] [i_21]);
                            arr_77 [i_11] = (((arr_17 [i_11] [i_11] [i_11]) > (var_9 - -var_10)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 22;i_26 += 1)
                    {
                        {
                            var_43 ^= ((+(((~var_11) * (arr_30 [i_26] [i_25])))));
                            arr_86 [i_11] = ((~(((((!(arr_16 [i_11] [i_11] [i_11] [i_11] [19] [i_11]))) && (!var_0))))));
                            var_44 = ((-(arr_81 [i_11] [i_20 - 2] [1] [i_11] [i_11] [1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
