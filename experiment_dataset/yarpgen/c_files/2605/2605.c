/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max((arr_4 [i_1] [i_1] [i_0]), 1379609192));
                var_17 = ((((((~var_9) & 1))) | (arr_2 [i_0 + 1] [i_0 + 2])));
            }
        }
    }
    var_18 = 3236436040;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_2] [i_2] = -var_6;
                    var_19 = (~1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, 1));
                                var_21 = ((1311564543576911601 - (arr_11 [i_2 - 1] [i_3] [i_2 + 1] [i_3])));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_22 [i_2] = (((-((var_6 ? var_1 : 18446744073709551596)))));
                    var_22 |= ((~((-(arr_7 [i_3 - 1] [i_3 - 1])))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_23 ^= var_10;
                    arr_25 [i_2] [i_3 - 1] = ((~((-(!65535)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_24 += ((-((~(1 <= var_11)))));
                                arr_30 [i_2] [i_3] [i_8] [i_9] [i_2] &= (((((((!1337006638) && (((24203 ? 1 : var_5))))))) / var_9));
                                arr_31 [i_2 - 3] [i_2] [4] [i_9] [10] |= (min((((-32767 - 1) * var_2)), var_13));
                                var_25 = (max(var_25, (((~((min(var_15, 16545577941665447062))))))));
                                var_26 = (min(var_26, (((-((~(min((arr_9 [i_2] [i_2]), var_0)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                arr_37 [i_2] [i_2] = 165;
                                var_27 = var_15;
                                var_28 ^= (var_13 == var_6);
                                var_29 -= ((-1676097010 / ((var_6 ? (5984694113475019785 * var_6) : (47 * 1099511627768)))));
                            }
                        }
                    }
                }
                arr_38 [i_2] [i_2] = (arr_34 [i_2] [i_2 - 2] [i_2] [2] [17]);
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_30 = (min(var_30, (!24203)));
                            arr_43 [16] &= var_6;
                            arr_44 [i_14] [i_3] [i_13] [i_2] = ((var_8 ? var_10 : var_3));
                            var_31 = (((!18446744073709551615) ^ var_2));
                            arr_45 [i_2] [i_13] [i_3] [i_2] = (var_5 > var_4);
                        }
                    }
                }
            }
        }
    }

    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {

        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 23;i_19 += 1)
                    {
                        {
                            arr_59 [i_18] [i_18] [i_18] [i_18] [i_18] = (min((0 / var_11), (((min(var_7, var_1)) * (arr_53 [i_16 + 1] [i_16 + 2] [i_16 - 1])))));
                            arr_60 [i_15] [i_15] [i_15 - 1] [i_18] [i_19] [i_19] = 8245192090317558155;
                            var_32 = 2032;
                        }
                    }
                }
                arr_61 [16] [16] [i_16] [i_17] |= (((-(arr_56 [i_15] [i_15] [i_16 + 1] [i_17]))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_33 -= 536608768;
                            var_34 = (~var_14);
                        }
                    }
                }
                var_35 = ((~((16693 ^ (arr_49 [i_15 - 1] [i_16 - 2])))));
            }
            var_36 = var_3;
        }
        var_37 = max(var_8, (min(-8763969557519949550, var_8)));
    }
    var_38 = (~((max(var_6, var_7))));
    #pragma endscop
}
