/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-30440 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_4 [i_2];
                    var_15 = (var_5 <= 28573);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_16 *= (arr_9 [i_4] [i_3] [i_2] [i_0]);
                            arr_14 [i_0] [i_1] = (var_4 && var_6);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -30440;
                        }
                        arr_16 [i_0] [i_3] [i_2] [i_3] = (((arr_9 [i_0] [i_1] [i_2] [i_3]) ? ((30439 ? 134152192 : -30454)) : (arr_5 [i_2])));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] = -32761;
                        var_17 = (-28566 == 10431296319757023155);
                        var_18 = ((arr_5 [i_0]) ? (arr_5 [i_0]) : -30454);
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_5] [i_2] [i_1] [i_5] = (((arr_9 [i_0] [i_5 - 3] [i_2] [i_0]) || (arr_9 [i_0] [i_5 - 2] [i_2] [i_5])));
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] = var_0;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((var_9 + (arr_7 [i_6] [i_2] [i_1] [i_0]))))));
                        var_20 = -20582;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_1] [i_8] = ((((var_4 ? var_8 : 100892747))) ? (((7 ? -7 : 100892747))) : (arr_13 [i_0]));
                                arr_31 [i_8] = ((var_5 ? (~30439) : (var_1 & -30440)));
                            }
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            var_21 = 28568;
            var_22 *= (arr_13 [i_0]);
        }
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            var_23 = arr_29 [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10 - 1];
            arr_38 [i_0] [i_10] [i_10] = ((((((arr_3 [i_10]) + (arr_6 [i_0] [i_10])))) ? (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_13 : var_4)) : 20604));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_42 [i_0] = ((var_9 != (arr_2 [i_11] [i_0])));
            var_24 = var_5;
        }

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                arr_47 [i_13] [i_12] [i_0] [i_0] = var_1;
                arr_48 [i_12] [i_13] = arr_18 [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1];
            }
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                arr_53 [i_0] [i_14] = (~(((arr_34 [i_0] [i_12] [i_14]) / (arr_37 [i_14] [i_12] [i_0]))));
                var_25 = (~var_12);
            }

            for (int i_15 = 3; i_15 < 20;i_15 += 1)
            {
                var_26 = (((arr_36 [i_0] [i_15 + 1] [i_12]) ? (arr_36 [i_0] [i_15 + 1] [i_15]) : var_9));
                var_27 ^= (var_11 ? (arr_49 [i_0] [i_12] [i_15 - 1]) : 14576);
            }
            var_28 = ((arr_43 [i_0]) ? ((20581 ? (arr_41 [i_0] [i_12] [i_12]) : var_5)) : (((arr_52 [i_12] [i_12] [i_0] [i_0]) ? (arr_4 [i_0]) : var_3)));
        }
    }
    for (int i_16 = 2; i_16 < 19;i_16 += 1)
    {
        var_29 = -0;
        var_30 *= var_3;
    }
    var_31 = (min(var_31, (-20597 == var_6)));
    var_32 = (max(var_32, 12400457150327722118));
    #pragma endscop
}
