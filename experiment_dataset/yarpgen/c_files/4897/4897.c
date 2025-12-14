/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 *= ((var_4 ? ((var_16 ? var_3 : (((1621820646051484058 ? -639377601 : 639377624))))) : var_2));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_9;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] = var_8;
                        arr_14 [i_0] [i_0] = var_1;
                        arr_15 [i_0] [i_1] [i_2] [6] = var_4;
                        arr_16 [i_0] [i_0] [i_0] = (((var_9 & var_4) ? ((var_10 ? var_3 : ((var_11 ? var_1 : var_14)))) : (((((5431891747490585999 ? 19190 : -197158643))) ? ((var_15 ? var_0 : var_6)) : var_14))));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_18 = ((!(((var_13 ? var_3 : var_15)))));
                var_19 = (((((var_8 ? ((var_1 ? var_10 : var_6)) : var_13))) ? (!var_10) : -12757));
            }
            var_20 = ((((((var_2 ? var_2 : var_10))) && var_11)) ? var_8 : (((var_14 ? var_9 : var_12))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        var_21 |= (!var_16);
                        var_22 -= ((!(((var_7 ? ((var_5 ? var_13 : var_5)) : var_9)))));
                        arr_26 [i_0] |= var_13;
                        var_23 = (((var_10 ? var_11 : 4294967295)));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    {
                        var_24 = (((((var_6 ? var_5 : var_14))) ? (var_15 - var_16) : -4294967289));
                        arr_34 [i_0] [i_7] [1] [i_9] = var_10;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_25 *= (((((var_12 ? var_6 : var_0)) > var_14)));
                            var_26 -= ((!((((var_7 ? var_11 : var_9))))));
                            var_27 = (max(var_27, (~var_16)));
                        }
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            var_28 -= ((((var_10 ? var_16 : var_13))));
                            arr_39 [i_0] [i_7] [i_11] [i_9] [i_11] = (var_10 && var_11);
                            var_29 = (!var_6);
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            var_30 = var_13;
                            var_31 = (((var_8 && var_16) / (var_7 != var_13)));
                            var_32 -= (((16776192 | 4294967288) | (((((var_14 ? var_16 : var_13))) ? (((var_4 ? var_13 : var_3))) : ((-968724053 ? -6660 : -1))))));
                        }
                        arr_43 [i_9] [10] [9] = (((var_4 != 4294967295) ? var_5 : var_10));
                    }
                }
            }
            var_33 ^= var_7;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [0] = var_5;
                            arr_53 [i_0] [i_7] [i_13] [i_7] [i_15] [i_15] [i_15] = ((((((var_8 ? var_9 : var_12)))) | (var_8 || var_8)));
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        arr_58 [i_16] [i_16] = ((((!var_14) > var_11)));
        arr_59 [3] [i_16] = (((((var_14 ? var_13 : var_13)))));
    }
    for (int i_17 = 1; i_17 < 10;i_17 += 1)
    {
        arr_63 [i_17] = var_10;
        arr_64 [i_17] = (495160522 - 173);
        var_34 = ((var_9 ? ((var_14 * (!var_10))) : (!var_7)));
        var_35 = -292944019;
        var_36 *= var_3;
    }
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {
        arr_67 [i_18] [i_18] = (((var_14 ? (((var_6 ? var_13 : var_9))) : var_1)));
        var_37 = (!191526617);

        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            var_38 = (var_7 ? (((var_6 % var_1) ? ((var_10 ? var_13 : var_11)) : var_1)) : ((var_15 ? var_6 : var_13)));
            var_39 -= ((-((((var_12 ? var_3 : var_3))))));
        }
    }
    var_40 += var_10;
    var_41 = (min(var_41, (((((((var_0 ? var_2 : var_11)))) || var_10)))));
    #pragma endscop
}
