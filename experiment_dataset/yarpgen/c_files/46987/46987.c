/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((max(var_15, 1))), ((var_6 ? var_15 : var_12))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = ((-162430057829579465 >= ((((65535 == (min(13, -5470111604589898618))))))));
            var_19 = min((((var_1 - ((max(var_9, 4104)))))), (min(6519724561586937897, 69)));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0 + 2] [i_0] = ((var_4 | var_6) ? (!1383428777) : (min(908352554, var_16)));
            var_20 = (!((((!1) ? 17002 : ((var_15 ? -5 : 9))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_3] [i_4] [i_0] [i_0 + 2] = (!var_10);
                        var_21 = (min(((var_0 ? -5 : var_9)), (!-1433103392)));
                        var_22 = (!(var_4 & var_2));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = 1548656844;
                            var_24 = ((-6519724561586937912 ? 252 : -36));
                        }
                    }
                }
            }
            var_25 = var_10;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_26 = (((!var_6) > ((var_12 ? 1 : var_5))));
                        arr_33 [i_7] [i_0] [i_0] [i_7] = (var_11 * -1609004665);
                        arr_34 [i_0] [i_0] = (((!var_5) - 1));
                    }
                }
            }
            arr_35 [i_0] [i_6] [i_0] = (-6519724561586937898 | -5);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_38 [i_0] [i_9] [i_9] = (((var_13 | var_14) ? ((var_7 ? -6519724561586937882 : var_10)) : (var_4 == 2746310451)));
            var_27 = ((((-115 ? ((-3708907420663226716 ? 2746310451 : 1)) : 20669))) ? (((!var_11) ? var_14 : (254 || 1))) : (((!(var_11 | var_3)))));
        }
        var_28 = (max((min(((min(2147483647, var_5))), (max(-6519724561586937898, 199)))), (((1 ? 112 : 57)))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    arr_43 [i_10] [i_10] [i_0] = (!-1649283801);
                    var_29 = (!(7993601519217691225 - -187926078));
                    var_30 = ((!((!((min(var_14, 329720049)))))));
                    var_31 = (max(((var_7 ? -1649283816 : 3161274638)), (1 & -34)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_32 = (max((57831519 != 5855121428597787417), (-2101106025762595837 ^ 67108864)));
                                var_33 = (!-329720049);
                                arr_48 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = var_11;
                                var_34 = 127;
                            }
                        }
                    }
                }
            }
        }
        var_35 = var_14;
    }
    #pragma endscop
}
