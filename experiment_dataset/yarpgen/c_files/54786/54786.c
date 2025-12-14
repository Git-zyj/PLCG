/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(max(4, (-2147483647 - 1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = min(((-106801218 ? (-127 - 1) : -var_11)), 62);
        arr_3 [i_0] = (var_12 ? var_1 : (!var_8));
        var_19 = (min(var_0, ((min(41, var_4)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = (min(var_20, var_11));
        var_21 = (max(var_21, (((-2147483628 ? var_0 : (min(4, ((max(var_14, var_10))))))))));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        var_22 = (min(var_22, ((min(var_10, ((var_7 ? -22 : var_4)))))));
        arr_8 [i_2] [i_2 - 3] = var_11;
        var_23 = (max(var_23, (((((min(var_16, 56))) ? ((-53 ? 8 : 0)) : (((-(~16)))))))));
    }
    var_24 = 2147483635;

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_25 = ((-((var_12 ? var_3 : 21))));
        var_26 = (min(var_26, (~var_1)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    arr_19 [i_4] [20] [i_5] = 8122658132893448250;
                    var_27 = var_16;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] [i_3] [7] [i_4] = var_3;
                                arr_27 [i_3] [i_4] [i_3] [i_3] [i_3] [15] [i_3] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_28 = var_3;
                                var_29 = (~295304076);
                                arr_32 [3] [3] [3] [i_4] [22] = (min(2147483626, var_9));
                                var_30 = ((((min(0, var_2))) ? var_8 : var_15));
                            }
                        }
                    }
                    arr_33 [i_4] [i_4] = (max((min(var_4, var_11)), ((~((65 ? -19 : var_15))))));
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_31 &= 1;

            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                arr_39 [i_3] [i_11] [i_3] = 71;
                var_32 = (max(var_32, var_15));
                arr_40 [i_11] [i_10] [i_11] = var_4;
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                var_33 = var_16;
                arr_44 [i_10] [i_10] = ((var_13 ? var_15 : -43));

                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    var_34 = var_3;
                    arr_47 [i_3] [i_3] [19] = var_15;
                    var_35 = (min(var_35, -2));
                    var_36 = (max(var_36, var_13));
                    arr_48 [i_3] = var_2;
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_37 = (-2147483647 - 1);
                    var_38 = -var_0;
                    arr_51 [8] [6] [6] = ((98 ? (((-2 ? -120 : 172))) : 0));
                    arr_52 [11] [i_10] [11] [11] [i_10] [i_10] = var_3;
                }
            }
            var_39 -= (~var_7);
            var_40 = ((var_11 ? var_4 : 38));
            var_41 = (~var_11);
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            var_42 = 2286870655666993732;
            var_43 = (max(var_43, var_12));
        }
        arr_57 [i_3] = var_16;
    }
    var_44 = (max(var_44, ((max(var_6, -386315640)))));
    #pragma endscop
}
