/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = var_0;
        var_20 = var_4;
        var_21 = (~var_18);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_22 = ((!(((var_3 ? var_12 : var_6)))));

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_23 = var_18;
                    var_24 = (((~var_2) * (var_19 == var_12)));
                }
                var_25 = (~var_18);
                var_26 = ((-var_3 == (((var_0 ? var_11 : var_11)))));
                var_27 = (var_3 > var_11);
            }
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                var_28 = (~var_5);
                arr_13 [i_0] [i_0] [i_0] [i_0] = (!var_3);
            }
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_29 = var_15;

            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_20 [i_0] = var_14;
                var_30 = ((~((var_11 ? var_15 : var_12))));
                var_31 = (((var_0 ? var_7 : var_2)) * var_1);
                arr_21 [i_0 + 1] [i_0] [i_0 + 1] = (!var_9);

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_24 [i_7] [i_7] [i_0] [i_7] [i_0] [i_0] = ((var_19 ? var_11 : var_19));
                    var_32 = (!var_15);
                }
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_33 = var_19;
                            var_34 = (((!10) ? var_17 : (var_1 / var_3)));
                            var_35 = ((var_15 ? var_13 : var_18));
                            var_36 = var_9;
                        }
                    }
                }
                var_37 = (((((var_17 ? var_15 : var_6))) ? ((var_5 ? var_17 : var_12)) : var_14));
                var_38 = var_12;
                var_39 = ((var_16 ? (~var_6) : var_12));
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_40 = (var_8 | var_4);
                arr_33 [i_0 + 2] [i_0] = (((var_19 ? var_14 : var_7)));
            }
            arr_34 [i_0 - 1] [i_0] [i_0 - 1] = (~var_8);
            var_41 = var_14;
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_38 [i_12] [i_12] = ((!(var_18 | var_6)));
        var_42 = (((((!var_3) ? var_9 : var_6)) == (min(0, 16769024))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    var_43 = (((((var_15 ? ((var_1 ? var_16 : var_15)) : -4294967295))) ? (~var_4) : -var_4));
                    arr_43 [i_12] [i_12] [i_12] = (var_6 << (-var_15 - 3758679833));
                }
            }
        }
    }
    var_44 = var_9;
    var_45 = ((((min(var_8, var_2))) ? ((((min(var_7, var_2))) ? var_15 : var_16)) : (((~(~var_13))))));
    #pragma endscop
}
