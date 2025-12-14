/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(var_13, (max(((max(104, 581099103))), var_14))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_17 = (max((arr_1 [i_0]), ((max((arr_0 [i_0]), -1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (max(var_2, (max((-9223372036854775807 - 1), var_14))));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] = (arr_6 [i_3 + 1]);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_18 [i_4] [i_1] [i_2] [i_3] [i_3 - 1] [i_3 + 1] = max((min((arr_8 [i_1]), -712)), var_0);
                            var_18 = var_3;
                        }
                        arr_19 [i_1] [i_2] [0] = (max((max(-32760, (max(240, (arr_4 [i_0] [i_1] [i_2]))))), 197));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_19 = -61;
                        arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] &= (arr_21 [i_5] [i_2] [i_0] [i_0]);

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_20 = var_13;
                            var_21 = (max(65525, 130));
                            arr_25 [i_0] [i_2] [2] [10] = (arr_23 [i_0] [i_1] [i_2] [i_5] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [1] [i_7] [1] = (min((arr_0 [i_2]), (max(1, (arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [6])))));
                            var_22 = -48;
                            var_23 |= var_0;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_32 [i_0] [i_2] = var_1;
                            var_24 *= var_5;
                            var_25 = var_8;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_26 = (arr_9 [i_9] [i_5] [1] [i_1]);
                            var_27 *= (min((arr_33 [i_2] [i_5 - 1] [i_2] [i_5] [i_9] [i_5]), (arr_11 [i_0] [i_5])));
                            arr_35 [i_1] [i_5] [i_2] [i_1] [i_0] [i_0] = var_10;
                        }

                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_28 = var_4;
                            var_29 = (min((min(581099111, (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))), (max(922701544, var_4))));
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_2] [i_5] = (arr_8 [i_11]);
                            var_30 += (max((arr_2 [i_2]), var_6));
                            var_31 = var_6;
                            arr_41 [i_11] [i_5] [i_2] [i_1] [i_0] = (arr_30 [i_0] [i_11] [i_11]);
                            arr_42 [i_5] [i_11] = arr_29 [i_0] [i_1] [i_2];
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_1] [1] [i_1] = var_5;
                            var_32 |= var_7;
                            var_33 = (max(var_33, (arr_20 [1] [i_12] [i_12] [i_12] [i_12] [i_12])));
                        }
                        for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                        {
                            var_34 = (arr_5 [i_2] [i_0]);
                            arr_52 [i_0] [i_1] [i_2] [i_2] [i_2] = 9835;
                        }
                        var_35 = (arr_6 [9]);
                        var_36 = (arr_27 [0] [i_2] [i_2] [i_12] [i_2] [i_1] [i_1]);
                    }
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            var_37 = var_13;
                            var_38 = 42;
                            var_39 = (arr_30 [i_0] [i_0] [9]);
                        }
                        var_40 += (max((min((arr_1 [i_1]), 255)), 32));
                        var_41 -= var_15;
                        var_42 = (max(var_42, (arr_56 [i_0] [i_1] [i_2] [7] [i_1])));
                        arr_58 [i_0] [i_1] [i_2] [i_0] [i_1] = (arr_5 [i_0] [i_1]);
                    }
                }
            }
        }
        var_43 = (min(9370044660372904598, 3713868195));
        var_44 = (min(var_44, var_12));
    }
    var_45 = (min(var_45, ((min(var_8, (max(9223372036854775807, var_3)))))));

    for (int i_17 = 1; i_17 < 7;i_17 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 7;i_19 += 1)
            {
                {
                    var_46 = (max(var_46, ((max(((max((min((arr_4 [i_17] [i_18] [0]), 9223372036854775807)), 1))), 6881038942123230574)))));
                    var_47 -= (max((min(3713868198, (arr_62 [i_18] [i_17 + 3]))), 3713868198));
                }
            }
        }
        var_48 = (arr_9 [10] [8] [i_17] [i_17]);
    }
    for (int i_20 = 1; i_20 < 7;i_20 += 1) /* same iter space */
    {
        var_49 = 65525;
        arr_71 [i_20] [i_20] = (max(var_1, 581099097));
        arr_72 [i_20] = (min((arr_61 [i_20]), var_3));

        for (int i_21 = 1; i_21 < 8;i_21 += 1)
        {
            arr_76 [i_20] [i_21] = (arr_45 [i_20] [i_20] [i_21]);
            var_50 = (arr_9 [i_20] [i_21] [i_20] [i_21 + 3]);
        }
        var_51 = (max(var_51, (arr_63 [i_20] [i_20])));
    }
    #pragma endscop
}
