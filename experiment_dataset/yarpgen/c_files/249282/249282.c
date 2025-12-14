/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (-var_1 < var_8)));
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 += (min(123, 1536));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] &= var_9;
                    var_19 = 18;
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((((-13 ? -29503 : -18))) <= var_4));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (((arr_12 [i_3]) / (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - var_3))));
                            var_21 &= ((-32 <= (arr_11 [i_4 + 2] [1] [i_2] [i_3] [i_3] [i_1])));
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_3] = (((arr_12 [i_3]) - (((arr_12 [i_3]) & var_4))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 ^= (((arr_15 [4] [i_1] [i_2] [i_2] [i_3] [i_3]) ? (arr_15 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0]) : (arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])));
                            var_23 = var_1;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 = (-((var_8 / (arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6]))));
                            var_25 = ((var_8 ^ (arr_16 [i_0] [i_0] [i_1] [i_0] [i_0])));
                            var_26 = (((arr_2 [i_1] [i_6]) ? 1400496326 : (arr_2 [i_0] [i_2])));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (((arr_1 [i_0]) + var_13));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_27 = 5221;
                            arr_23 [i_7] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = (arr_22 [i_3] [i_7] [i_3] [i_3] [i_2] [i_0] [i_0]);
                            var_28 = -18;
                        }

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_28 [i_3] [i_1] [i_2] [i_3] [i_2] [i_1] = ((~((var_7 ? 66 : var_11))));
                            arr_29 [i_3] = (17 ^ -98);
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_29 = (max(var_29, (arr_17 [i_9] [i_1] [i_2] [i_2] [i_2] [i_2])));
                            arr_34 [i_9] [i_0] [i_3] [i_3] [i_0] [i_0] = (((arr_24 [i_0] [i_2] [i_3] [i_9]) ? (arr_33 [i_3] [i_2] [i_9]) : (arr_16 [i_9] [i_3] [i_3] [i_1] [i_0])));
                        }
                        var_30 = (arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_1] [i_10] = arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_10] [i_10];
                        var_31 = (min(var_31, (((-(arr_18 [i_0] [i_1] [i_2] [i_10] [i_2]))))));
                        var_32 &= ((((!var_11) < (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (~-2138000936) : ((-(22940 & var_2))));
                        arr_38 [i_0] [i_1] [i_0] [i_1] [i_10] [9] = arr_31 [i_2] [6] [6] [i_0] [i_1];
                        arr_39 [i_2] [i_2] [i_2] [i_10] = (17162 % -121);
                    }
                    var_33 = (min(var_33, (((!(((~(arr_18 [i_0] [9] [i_2] [i_0] [i_2])))))))));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 18;i_11 += 1)
    {
        var_34 = ((!((((arr_40 [i_11 - 1] [i_11 - 4]) ? (arr_40 [i_11 + 1] [i_11 - 3]) : (arr_40 [i_11 + 1] [i_11 - 3]))))));
        arr_42 [i_11] = (((arr_41 [i_11]) / 126));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            arr_45 [i_11] [i_12] = (arr_40 [i_11] [i_11]);

            for (int i_13 = 4; i_13 < 15;i_13 += 1)
            {
                var_35 *= ((4190208 ? -98 : -3045));
                arr_49 [i_11] [i_12] [7] &= var_7;
                var_36 += (((arr_47 [0] [i_12] [i_11] [i_11]) | (arr_46 [i_11 - 2] [i_12] [i_13 - 1])));
                var_37 = (max(var_37, (~var_0)));
            }
            var_38 -= ((var_11 ? -11 : -127));
            var_39 *= (var_7 ? 8188 : var_14);
            arr_50 [i_12] [i_12] [i_11] = ((((var_6 != (arr_40 [i_11] [i_12])))) % (((13 > (arr_46 [i_11] [i_12] [i_12])))));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_54 [i_11 - 3] [i_14] = arr_51 [i_11 - 2] [i_14] [i_14];
            var_40 = (-(!37));
            arr_55 [i_14] [i_14] [i_14] = -98;
        }
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_59 [i_15] = (((!((max(32760, var_4))))));
        var_41 = ((((max((arr_21 [i_15] [i_15] [i_15] [i_15] [i_15]), (arr_21 [i_15] [i_15] [i_15] [1] [i_15])))) > ((max((arr_6 [i_15] [i_15] [i_15]), (arr_41 [i_15]))))));
    }
    var_42 = ((var_4 | (((var_10 ? (min(var_3, var_3)) : (!-29738))))));
    #pragma endscop
}
