/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = var_13;

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 ^= (arr_8 [i_0] [5] [i_2] [i_3] [i_4] [i_0]);
                            arr_13 [i_2] [i_0] [i_2] = (arr_12 [i_3 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_0] [i_2] [i_3] = (arr_5 [i_3] [i_2]);
                            arr_17 [i_0] [i_3 - 1] [i_2] [i_1] [i_0] [i_0] = 5050267187322219745;
                            var_21 = ((!(arr_3 [i_0] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3 + 2] [i_6] = (arr_8 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1]);
                            var_22 = (max(0, (min(var_9, 1))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = (max(1, var_1));
                            arr_22 [i_0] = -802200867;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_23 = 9314;
                            var_24 = (!var_15);
                            arr_26 [i_0] = (arr_14 [i_0]);
                            var_25 = var_6;
                            var_26 = -19783;
                        }
                        arr_27 [i_0] [i_3] = arr_1 [i_3 - 2];
                        var_27 = (arr_4 [i_0 - 1]);
                        arr_28 [i_3] &= min(((2464897812767880789 >= (1371492538 ^ var_7))), 0);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_28 = 8706870772342184055;
                                arr_34 [i_9] [i_8] [i_0] [i_0] [i_0 - 1] [i_0] = (min(((~(arr_32 [i_0] [i_0] [i_9] [4] [i_0] [i_9]))), (arr_32 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0] [i_9])));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_40 [i_0] [i_10] [i_2] [i_1] [i_0] = 44236;
                            arr_41 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] = -1;
                            var_29 = (arr_14 [i_0]);
                            arr_42 [i_0] [i_0] = 1392334706;
                            arr_43 [i_0 + 1] [i_0] [i_2] [i_10] [i_11] = (-9223372036854775807 - 1);
                        }
                        for (int i_12 = 4; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_30 = (arr_19 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
                            var_31 = var_3;
                            var_32 = 29704;
                        }
                        for (int i_13 = 4; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            var_33 = (min((min(3735352983171016437, 9314)), (min(var_10, (arr_11 [i_0] [i_13 - 1])))));
                            var_34 = (((arr_46 [i_0] [i_1] [i_1]) < var_13));
                        }
                        for (int i_14 = 4; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_35 = 288230376151711743;
                            var_36 = 3325892672;
                        }
                        var_37 &= arr_1 [i_0 - 1];
                        var_38 = max(2851659184, (max(((var_3 | (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), 18371)));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {
                        var_39 &= (arr_15 [i_15]);

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_40 = (((((arr_5 [i_0 + 1] [i_0 + 1]) + 2147483647)) >> (2147483647 - 2147483619)));
                            arr_56 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] = 633;
                        }
                        for (int i_17 = 2; i_17 < 16;i_17 += 1)
                        {
                            var_41 = 55303;
                            var_42 = var_10;
                            var_43 &= (arr_10 [i_17 - 2] [i_2] [i_0 + 1]);
                        }
                        arr_59 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_0] = -8706870772342184057;
                    }
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        var_44 += (arr_37 [i_0 + 1] [i_0 + 1] [i_2] [i_18]);
                        arr_62 [i_0] = 3732283174;
                        arr_63 [i_0] [i_0] [i_0] [i_0] [i_18] [i_18] = (32753 && var_1);
                    }
                    var_45 = ((-(min(var_9, (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_46 = (var_7 & var_2);
    #pragma endscop
}
