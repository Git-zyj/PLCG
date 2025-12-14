/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [1] [i_2] |= (((((~(arr_6 [i_0] [i_1] [i_2])))) | (10803069709835812326 & 1)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((((arr_0 [i_0]) | -var_16)));
                        var_19 &= (((!6327978343603369331) == 240));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_0] = var_8;
                    var_20 = (min(var_20, (arr_3 [i_1 + 2] [4] [i_1 - 1])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_15 [15] [i_4] = var_17;
        var_21 = (min(var_21, (((-(arr_13 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_20 [10] = (~2386903871977066901);

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_5] [i_5] [i_6] = ((arr_22 [i_5]) & var_15);
            arr_25 [i_6] [12] [i_6] = var_9;

            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_22 = (min(var_22, 1));
                var_23 += ((arr_23 [i_5] [i_6] [i_6]) && 659291760);
                var_24 = (max(var_24, var_3));
                arr_29 [i_5] [i_5] &= (arr_3 [i_7] [i_5] [i_5]);
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_37 [6] [i_6] [i_8] [i_6] [i_10] = 33189;
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = (!var_9);
                            var_25 = (min(var_25, ((((var_1 * 241) * 7899180627394584199)))));
                            var_26 = (7 + 3647151433);
                        }
                    }
                }
                arr_39 [1] [i_5] [i_6] = 10803069709835812341;
                var_27 = (min(var_27, ((~(1627366107 % 108)))));
            }
            var_28 = ((4867263709459780469 * (arr_4 [i_5] [i_6] [i_5])));
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                {

                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        arr_48 [i_5] [i_5] [i_12] [i_5] [i_5] = (((~18446744073709551606) | var_14));
                        arr_49 [i_5] [i_12] [i_12] [i_13] = (((var_7 - var_18) * (((((arr_1 [i_11] [i_13]) == var_16))))));
                    }
                    arr_50 [i_11 + 1] [i_12] = (!var_11);
                    arr_51 [i_12] = ((-(!-4)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    {

                        for (int i_17 = 1; i_17 < 13;i_17 += 1)
                        {
                            arr_62 [i_5] [8] [i_15] [i_16] [i_5] &= var_10;
                            arr_63 [8] [i_16] [i_14] [i_14] [i_5] = -197;
                            var_29 = (arr_22 [i_5]);
                        }
                        for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                        {
                            var_30 = (((arr_53 [i_5] [i_5]) * var_7));
                            arr_66 [i_5] [i_5] [i_14 - 1] [i_14] [0] [i_18] = (!1758929366);
                        }
                        for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
                        {
                            var_31 += ((-(~304905373)));
                            var_32 = (~1758929352);
                            arr_69 [i_14] [3] [i_16] = 179;
                            var_33 = ((-((1 & (arr_68 [i_5] [i_5] [i_14] [i_15] [i_16] [i_19])))));
                            arr_70 [i_5] [i_14] [i_15] [i_14] [i_14] [3] [i_15] = 8672002120826643593;
                        }
                        arr_71 [i_5] [2] [i_14] [i_16] = (~var_10);
                        arr_72 [i_14] [i_14] [i_15] [i_16] = (~2536037943);
                    }
                }
            }
        }
        arr_73 [i_5] = (~var_6);
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 18;i_20 += 1)
    {
        var_34 &= ((~(~18446744073709551615)));
        var_35 = (min(var_35, var_8));

        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            var_36 = (min(var_36, 1));
            var_37 = (max(var_37, (~var_0)));
            var_38 += 3206913020848653475;
            var_39 = 65522;
        }
    }
    var_40 &= (var_2 | var_3);
    #pragma endscop
}
