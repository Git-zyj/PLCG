/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -55;
    var_18 = ((((0 ? var_0 : -55))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = arr_5 [i_0] [i_0] [i_0];
                arr_6 [i_1] [i_1] = ((-((536870848 ? -100 : 536870848))));

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = (arr_5 [i_2 - 1] [i_1] [i_0]);
                    arr_10 [i_1] [i_1] [i_2 - 2] = (arr_7 [i_2] [i_2] [i_2] [20]);
                }

                for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_3] = 4049302424;
                    var_20 -= (-(max((arr_8 [i_0] [i_0] [2] [i_0]), (arr_3 [1]))));
                    var_21 = (min(-93, (max(100, var_4))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_22 -= (var_10 ? (((arr_0 [i_4]) % var_4)) : var_2);
                    arr_17 [i_1] [i_1 - 1] [i_4] [i_1] = (((arr_2 [i_0 - 2] [i_0 - 1] [i_0]) ^ (arr_2 [i_0 - 3] [i_0 + 1] [i_0 - 2])));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_23 = (!-602403030);
                    arr_20 [i_1] = (arr_0 [i_0 - 1]);
                    var_24 -= 0;
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_25 = (2187977468 >> (((((((1547821902 ? 1 : -70368744177664))) ? ((4086113946222589732 ? 3494860565 : 2106989812)) : (arr_21 [i_0 - 1] [i_1 + 1] [i_6 + 1] [i_6]))) - 3494860544)));

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_26 = (~-602403030);

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_8] = ((4133913 ? 4049302421 : 1));
                            var_27 = ((800106730 ? ((((arr_2 [i_0 - 2] [i_0] [i_0 - 1]) >= ((min(var_6, 7)))))) : (((arr_1 [i_0 + 1]) ? var_4 : (((2147352576 || (arr_11 [i_1]))))))));
                        }
                        arr_31 [i_7 + 1] [i_1] [i_1] [i_0] = 17965911718448145512;
                        arr_32 [i_1] = ((10633 ? (((arr_7 [i_0 + 1] [i_1 + 1] [i_6] [i_7 - 1]) << (2147614719 - 2147614704))) : ((max(1, 4096)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_28 |= (((arr_34 [i_0] [i_1 - 1] [i_6] [i_9]) ? 19 : (arr_34 [i_0 + 1] [i_1 + 1] [i_6 + 1] [i_9])));
                        var_29 = ((((-(arr_12 [i_9] [i_6] [i_0]))) - (arr_2 [i_6 + 1] [i_1 - 1] [i_0 - 2])));
                        var_30 = ((~(((arr_24 [i_0] [i_0] [i_0] [i_0]) & var_8))));
                        var_31 = (min(var_31, ((((((arr_21 [i_0] [i_0 - 1] [i_0] [i_0]) ? var_0 : (arr_16 [i_9] [i_0 - 3] [i_0 - 3] [i_0 - 3])))) ? (~800106731) : ((((arr_7 [i_0 - 3] [i_1] [i_0 - 3] [i_9]) - var_1)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_52 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10] = (min(((4133913 ^ ((((!(arr_51 [i_10] [i_10]))))))), -35));
                                var_32 = ((((min((max(4133927, (arr_41 [14] [i_10]))), (((~(arr_46 [i_10] [i_10] [i_12] [i_13]))))))) ? (min(((32760 ? 22 : 1)), var_9)) : var_9));
                                var_33 -= 4133894;
                                var_34 = ((-(((-(arr_47 [i_11] [i_12] [i_13] [i_14 - 1]))))));
                            }
                        }
                    }
                    var_35 -= ((var_14 ? (max((arr_47 [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 2]), 4290833398)) : (arr_46 [i_10 - 1] [i_12] [i_10] [i_10 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
