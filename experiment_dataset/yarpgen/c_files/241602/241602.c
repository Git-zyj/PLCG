/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [5] [i_2] = (var_6 ^ var_3);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = var_10;
                        arr_11 [i_0] [i_2] [4] [i_2] [i_3] = var_1;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (min(var_20, (((~(~var_13))))));
                        var_21 += ((-(var_13 * var_9)));
                        arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = (((((min(var_8, var_10)))) > (var_4 | var_12)));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] &= (((-31852 && -111) || (var_16 && var_7)));
                            arr_18 [i_2] [i_1] [i_1] [i_1] = (-(var_10 - var_8));
                            arr_19 [i_0] [i_1] [i_2] [7] = var_13;
                            var_22 = (var_2 > var_8);
                        }
                    }
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        arr_22 [4] [i_1] [i_2] [i_2] = (min((var_6 + var_2), var_8));

                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            var_23 = (max(var_23, ((min((min((-9223372036854775807 - 1), 102)), (var_6 * var_1))))));
                            var_24 = (min(((var_2 << (var_2 - 7109))), (0 == 126)));
                            arr_26 [i_0] [i_1] [i_2] [5] [i_7 + 1] = (+(((~var_0) | var_3)));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_30 [i_2] [i_2] [2] [i_6 - 1] [6] = ((~((min(38923, -31834)))));
                            var_25 = (max(var_25, (((~(~var_1))))));
                            arr_31 [i_0] [i_1] [i_2] [i_6] [i_2] = ((min(var_4, var_6)) + (((min(var_3, var_17)))));
                            arr_32 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_1] [i_6] &= -117;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_26 -= (312950756 && 0);
                            arr_38 [i_0] [i_2] [i_1] [i_9] [i_10] = var_0;
                            arr_39 [i_0] [i_1] [i_2] [i_2] [i_10] [0] = (1 > var_14);
                            arr_40 [i_2] [i_1] [i_2] [i_2] [i_9] [i_10] [10] = (var_8 / var_15);
                        }
                        arr_41 [5] [5] [1] [i_9] [i_2] [i_9] = (var_13 ^ var_14);
                    }
                    arr_42 [i_2] [i_2] [i_2] [0] = ((var_13 ^ (~var_17)));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {

                    for (int i_12 = 4; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            arr_51 [i_0] [i_1] [i_11 - 1] [i_12] [i_13 + 2] = (var_8 | var_7);
                            arr_52 [i_0] [i_12] [i_11] [i_12] [i_13] [i_13] = var_1;
                            var_27 = var_2;
                            var_28 ^= (var_11 == var_17);
                        }
                        arr_53 [i_12] [i_12 - 2] = -var_5;

                        for (int i_14 = 2; i_14 < 12;i_14 += 1)
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_12] [7] = (1 * 26334);
                            arr_58 [i_12] [i_12] = 1074636054;
                        }
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_61 [8] [i_0] [i_0] [i_0] = -var_4;
                        var_29 = var_14;
                        arr_62 [8] [i_1] [i_11] [2] = var_13;
                    }

                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17] = var_5;
                            arr_69 [0] [0] [i_11] [i_16] [i_17] [i_17] [i_17] = var_9;
                            var_30 *= -var_6;
                            arr_70 [i_17] [i_17] [i_17] [i_17] = var_14;
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            var_31 -= (var_6 ^ var_17);
                            arr_73 [i_18] [i_16] [i_18] = (!var_5);
                            var_32 = var_0;
                        }
                        arr_74 [i_0] [6] [i_11] [6] = (var_1 || var_17);
                        var_33 = var_11;

                        for (int i_19 = 3; i_19 < 12;i_19 += 1)
                        {
                            var_34 = (min(var_34, var_14));
                            arr_78 [i_0] [i_19] [i_11 - 1] [i_19] [i_11 - 1] [i_16] [i_19] = (var_5 + var_12);
                            var_35 += (var_4 == var_13);
                        }
                        for (int i_20 = 3; i_20 < 9;i_20 += 1) /* same iter space */
                        {
                            arr_83 [i_11 - 1] [i_1] [i_11] [12] = var_3;
                            arr_84 [i_0] [i_1] [i_11] [i_16] [i_1] [i_16] = var_12;
                            arr_85 [i_0] [i_20] [i_11] [i_16] [i_20] [i_20 + 3] [i_16] = var_2;
                        }
                        for (int i_21 = 3; i_21 < 9;i_21 += 1) /* same iter space */
                        {
                            arr_88 [i_16] [i_21] [i_0] = var_8;
                            var_36 = -var_2;
                        }
                    }
                    arr_89 [10] [i_1] [i_1] [i_1] = (var_6 << var_17);
                }
                var_37 |= var_0;
                arr_90 [i_1] = (min(19, 26613));
            }
        }
    }
    var_38 = (~16449134847795726463);
    var_39 |= var_12;
    #pragma endscop
}
