/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((!var_18), (((!0) && ((min(16, var_14)))))));
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (var_9 & 84);
        var_21 = ((-((var_5 ? 1 : var_2))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_22 = 78;
        var_23 ^= (max(4582044445346373413, var_13));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_24 ^= var_18;

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_5] = 3932160;
                        arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = 3857218181;
                        arr_21 [i_2] [i_3] [i_3] [i_3] [i_3] [i_5] = (~4294967285);
                        arr_22 [i_3] [i_3] [i_4] [i_5] = -13;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_29 [i_2] [9] [i_3] [i_8] = (((3540719249 ? var_13 : 2)));
                            var_25 = (max(var_25, (16383 == 2)));
                        }
                    }
                }
                var_26 = var_8;
                var_27 = ((-var_9 ? ((var_0 ? var_5 : var_11)) : 2244303458));
                var_28 *= var_13;

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_32 [i_3] [11] [i_3] [i_6] = (((var_7 / -13) ? -var_10 : ((128 ? 84 : var_7))));
                    var_29 = (min(var_29, ((4294967295 ? var_10 : ((var_0 ? 53975 : 3068664875))))));
                    var_30 = ((13 & (25135 & 1226302421)));

                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_31 = ((var_9 ? 24703 : ((9223372036854775807 >> (17163421690424839899 - 17163421690424839880)))));
                        var_32 = (min(var_32, var_9));
                    }
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_33 = 2068763345;

                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        var_34 = (min(var_34, (~var_14)));
                        var_35 ^= ((((var_10 ? var_11 : var_6))) ? 4294967287 : var_10);
                        var_36 &= -var_3;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_42 [i_13] [i_3] [i_6] [8] [i_3] [i_2] = 3940222805;
                        var_37 = (((!var_2) ? 8263550847818265799 : ((var_0 ? var_13 : var_2))));
                        var_38 = (!4294967283);
                        var_39 = 120;
                    }
                }
                for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    var_40 = (max(var_40, var_1));
                    var_41 = ((var_12 ? 66 : (!22)));
                }
                for (int i_15 = 1; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    var_42 |= 14784840078742011851;
                    var_43 = (min(var_43, 1));
                    arr_49 [i_2] [i_2] [i_2] [i_3] = (~var_6);
                }
            }
            var_44 = var_12;
            var_45 = (var_17 >> 1);
        }
        var_46 = (10662 ^ 26225);
    }
    var_47 &= 3084168468;
    var_48 += (((((min(17, var_16) == (((2603889800 ? 1 : var_11))))))));
    #pragma endscop
}
