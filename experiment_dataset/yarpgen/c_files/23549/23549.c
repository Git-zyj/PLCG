/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [18] = (arr_2 [17] [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_15 = ((110 / ((var_5 ? -111 : -110))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_16 *= -1;
                arr_13 [i_0] [i_1] [i_2] [i_1] = (!429073775);
            }
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_3] = (!-75);
            var_17 = (max(var_17, (arr_8 [i_0])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_18 = ((-((var_0 ? var_4 : 10528406629705927776))));
                            var_19 = var_9;
                            arr_27 [1] [1] [i_5] [i_6] [1] = (!-var_5);
                        }
                    }
                }
                arr_28 [i_5] [i_4] [i_0] [i_5] = ((-66 - (((arr_21 [i_0] [13] [i_0]) ? 110 : var_8))));
                var_20 = (((arr_21 [i_5] [i_4] [i_0]) & 9223372036854775807));
            }
            arr_29 [i_0] = ((((-(arr_2 [i_4] [i_4]))) == (244 > 4)));
            var_21 = ((!(85 | -51)));
        }

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_22 = (arr_11 [i_8]);
            var_23 = (((var_9 ^ -83) ? (~163684044) : (arr_24 [i_8] [i_8] [i_0] [i_0] [i_0])));
        }
        arr_32 [i_0] = ((((7181 ? 48436 : (-9223372036854775807 - 1)))) ? 9223372036854775807 : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    {
                        var_24 = (min(var_24, 15));
                        var_25 = (~var_8);
                        arr_42 [i_11] = ((77 ^ (arr_10 [i_11] [i_11] [i_11 - 1] [i_11 - 1])));
                        var_26 = ((!(!16777215)));
                    }
                }
            }
        }
        var_27 = (var_2 ? -1 : (arr_19 [9] [i_9]));
        arr_43 [i_9] [i_9] |= ((var_11 ? 14498 : (arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        arr_44 [9] = 90;
        var_28 = (!98);
    }
    var_29 = (max(var_0, var_4));
    var_30 = (!var_11);
    var_31 = var_4;
    #pragma endscop
}
