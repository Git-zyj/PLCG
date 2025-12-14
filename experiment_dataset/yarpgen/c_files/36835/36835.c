/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (max(var_6, var_2));
    var_14 = ((var_8 << (((var_3 > var_12) / ((max(var_9, var_0)))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = min((!var_3), ((var_3 | (~var_7))));

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [1] [12] = ((~((var_4 ^ ((var_1 ? var_8 : var_7))))));
                var_16 *= (min((min(255, (var_11 | var_11))), ((var_3 << (0 << 9)))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = (max((var_11 / var_4), (var_12 - var_12)));
                var_17 = (max(var_17, ((((var_10 ^ (var_2 + var_6)))))));
                var_18 = (((-var_1 / ((var_12 ? var_11 : var_2)))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_19 += (113 != 68);
                var_20 = (var_2 && var_10);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_0] [i_5] [i_6] = (((234 ^ 2) ? (min(var_8, var_11)) : (var_8 && var_7)));
                    var_21 += (min(var_9, ((var_12 << (var_10 - 106)))));
                    var_22 = (max(var_22, (((((max(var_3, var_0))) ? ((max(var_4, var_7))) : -47)))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_23 = (max(var_23, (((((var_5 << (var_12 - 100))) << (((((min(var_6, var_7)))) - 1)))))));
                        var_24 = (var_10 / var_5);
                        arr_24 [i_0] [i_0] [i_0] [21] [i_0] = ((9 << (83 - 71)));
                        var_25 = (max(var_25, (((1 ? 226 : 162)))));
                        arr_25 [i_0] [i_1] [i_0] [i_6] [i_0] = ((((((min(var_7, var_12))) > (~var_9))) ? (var_5 >= var_8) : (255 * 246)));
                    }
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, ((((((var_12 ^ var_6) >= var_8)) ? ((min(var_0, var_10))) : (max(var_9, var_1)))))));
                    arr_28 [i_0] [18] [i_5] [i_8] [i_0] = (~var_12);
                    arr_29 [i_0 + 1] [i_0 + 1] [20] [i_0] [i_0 + 1] [i_0 - 1] = ((((34773 ? 119 : (185 % 157))) + (var_0 + var_4)));
                    var_27 = (max((var_7 * var_9), var_11));
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_28 = var_4;
                    arr_34 [i_0] [i_1] [i_1] [i_1] [22] [i_1] = -var_4;
                    var_29 = (~var_0);
                }
                arr_35 [i_0] = (((1 || 248) ? (!var_2) : (var_10 * var_3)));
            }
            arr_36 [i_1] [i_1] [i_0] = (min(-var_8, 73));
            arr_37 [i_0] [i_0] [i_0] = ((-(var_1 < var_6)));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_41 [i_0] = (var_2 ? (8 + 33956) : (var_10 | var_12));
            var_30 = (max(var_30, var_1));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_31 -= (var_6 >= var_3);
            var_32 = (min(var_32, ((max(((-((var_6 << (((var_0 + 85) - 19)))))), (min((~var_7), ((min(var_0, var_10))))))))));
            var_33 = (((var_2 < ((var_10 ? var_6 : var_0)))));
        }
        arr_44 [4] |= (((~(!var_1))));
    }
    var_34 = var_11;
    #pragma endscop
}
