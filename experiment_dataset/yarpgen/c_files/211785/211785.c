/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_10 = (((((((max((arr_6 [i_3] [i_1] [i_1] [i_0]), var_3))) ? ((min((arr_7 [i_0] [5] [5]), (arr_0 [i_0])))) : (min(0, (arr_8 [i_1] [i_2] [1])))))) ? (min((arr_8 [i_1] [i_2 - 1] [i_2]), (arr_5 [i_0] [i_1] [i_2 + 1] [5]))) : (!58956)));
                        var_11 *= (arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
                        arr_11 [i_1] = var_8;
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((!(((arr_9 [i_0] [i_1] [i_2 + 2] [i_3]) || (!1)))));
                        arr_13 [i_3] [12] [i_1] [5] [12] = ((1 ? (((((min(6585, 17346))) ? (((var_0 != (arr_7 [i_3] [i_2] [1])))) : (!var_7)))) : ((-(arr_1 [0])))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                var_12 -= (~var_1);
                var_13 *= (arr_5 [i_0] [i_4] [i_4] [1]);
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_14 = 6580;
                var_15 = arr_16 [i_0] [i_6];
                arr_22 [i_0] [i_4] [i_4] [i_6] = ((((min(10572, 1607872511)))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [i_4] [i_4] [i_7] [i_7] = (arr_26 [5] [i_0] [i_0] [5] [i_7]);
                    arr_28 [i_4] [i_4] [i_4] [i_4] = (((arr_23 [i_0] [i_4] [i_6] [i_6] [i_7]) ? var_6 : (arr_21 [i_0] [i_4] [i_6])));
                }
            }
            /* vectorizable */
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                arr_31 [i_8] [i_8 + 1] [i_4] = (!10572);

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_34 [i_8] [i_8] [i_4] = ((~(!var_1)));
                    var_16 = (max(var_16, (arr_8 [i_9] [i_8 - 1] [i_8 + 2])));
                    var_17 ^= 10573;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_37 [i_0] [i_4] = ((~(arr_5 [i_0] [i_4] [5] [i_0])));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_18 = (((arr_8 [i_4] [i_0] [i_4]) && var_7));
                        var_19 -= (((~2131118292) ? (-9223372036854775807 - 1) : -17576028751660673728));
                    }
                    var_20 = (min(var_20, (~5490)));
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_44 [i_0] [1] [i_4] [i_8 + 1] [i_8] [i_8] = (((arr_40 [i_0] [i_0] [i_0] [i_0] [1] [i_0]) & 1));
                    var_21 = (min(var_21, -0));
                    arr_45 [i_4] [i_4] = ((!(arr_38 [i_8] [i_8 - 2] [i_8] [i_12] [i_12])));
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_52 [i_0] [i_4] [i_0] [i_0] [i_0] [i_4] = (((arr_9 [i_8] [i_4] [i_8 - 1] [i_4]) || (arr_9 [i_8] [i_4] [i_8 + 2] [i_8 + 1])));
                        arr_53 [i_4] [i_4] [i_8 + 3] [i_14] [i_4] = (((((36982 ? 36989 : 2687094784))) ? var_5 : (arr_17 [i_0] [i_4] [i_14])));
                    }
                    var_22 *= (arr_25 [i_0] [i_0] [i_0] [i_0]);
                    arr_54 [i_4] [i_8 - 2] [i_8 - 2] [i_4] [i_0] [i_4] = var_6;
                    arr_55 [4] [4] [i_4] [i_13] [i_4] = 24;
                }
                arr_56 [i_4] = ((~(arr_4 [i_8 + 2] [i_8 + 2] [i_8 + 4])));
                arr_57 [i_8] [i_4] [i_4] [i_0] = var_9;
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                arr_61 [i_0] [i_0] [i_0] [i_4] = (arr_23 [7] [i_15] [i_0] [i_0] [i_0]);
                arr_62 [i_0] [i_4] [i_4] [i_4] = (max(-3588782875, var_0));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_23 *= arr_32 [i_17] [i_17] [i_17];
                            var_24 ^= ((~(max(1, (arr_10 [i_0] [i_0] [i_17] [i_16] [i_17])))));
                        }
                    }
                }
            }
            arr_69 [i_0] [i_4] [i_0] = var_1;
        }
        for (int i_18 = 3; i_18 < 13;i_18 += 1)
        {
            arr_72 [2] [2] |= (max((((arr_42 [10] [i_18]) ^ ((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_35 [i_18 + 2] [0] [i_18] [1] [0])))))), ((((((-(arr_9 [i_18] [0] [i_18] [i_18 - 1])))) ? (!var_2) : var_0)))));
            var_25 *= (min(5065832330990881248, 0));
        }
        arr_73 [i_0] [i_0] = (min(536870911, (var_7 * 1)));
    }
    for (int i_19 = 2; i_19 < 12;i_19 += 1)
    {
        arr_77 [i_19] = var_0;
        var_26 = (max(var_26, (((((((max(var_6, (arr_36 [i_19] [i_19])))) || -9223372036854775799)) || var_1)))));
        var_27 *= (min(var_1, 116));
    }
    var_28 = var_8;
    var_29 = (58956 >= -9223372036854775799);
    var_30 = (min(var_30, ((((((min(1, var_4)) | ((var_6 ? var_4 : 10304521861340496890)))) & (var_2 / var_4))))));
    #pragma endscop
}
