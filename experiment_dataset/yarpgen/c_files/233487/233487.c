/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = ((max(var_14, var_15)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((var_15 ? var_2 : var_0));
            arr_5 [i_0 - 1] [i_0] = (((((var_11 ? var_8 : var_7))) ? var_14 : var_8));
            arr_6 [i_0] [i_0] = (((((var_5 ? var_3 : var_6))) ? var_1 : var_12));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_18 = (min(var_18, ((max((((((var_10 ? var_7 : var_7))) ? ((min(var_0, var_4))) : ((var_5 ? var_12 : var_14)))), var_6)))));
            var_19 = (min(var_19, (((var_3 ? var_10 : var_3)))));
            var_20 -= ((var_10 ? ((min(var_6, (!var_8)))) : var_1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_21 = (max(var_21, var_4));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_22 -= ((84 ? 34 : -5029151587154230010));
                    arr_19 [i_4] &= var_15;
                }

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    arr_22 [i_6] [i_3] [i_4] [i_0] [i_4] [i_6] = ((var_8 ? var_15 : var_10));
                    arr_23 [i_4] [i_6] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = var_10;
                    arr_24 [i_0] [i_3] [i_0] [i_0] [i_6 - 1] = (~var_9);
                }
                var_23 = var_8;
                arr_25 [i_0] [i_3] [i_4] = var_3;

                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    arr_29 [i_0] [2] [2] [i_0] [14] = ((var_11 ? var_5 : var_13));
                    var_24 = ((var_5 ? var_3 : var_11));
                }
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                var_25 = var_15;
                var_26 |= var_14;

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_34 [i_8] [i_8] [i_8] [i_8] [i_0] = var_6;
                    var_27 += ((var_9 ? (~var_10) : ((var_10 ? var_14 : var_4))));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = var_0;
                        var_29 *= -var_8;
                        arr_38 [4] [4] [i_8] [i_0] [i_8] = var_7;
                    }
                }

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_30 = (~var_13);
                    arr_41 [i_0] [i_3] [1] = (~-var_14);
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    arr_44 [i_0] [i_3] [i_8] = -90;
                    arr_45 [i_0] [i_0] [i_8] [i_12] = var_8;
                    var_31 = var_7;
                    arr_46 [i_0] = ((var_15 ? var_3 : ((-31 ? 17129007753670729982 : var_6))));
                    var_32 = -var_4;
                }
            }
        }
        arr_47 [i_0] [i_0] = -var_13;
        var_33 = (max(var_15, (!-var_9)));
    }
    var_34 = (max(var_34, ((max(var_7, var_0)))));
    var_35 = var_6;
    #pragma endscop
}
