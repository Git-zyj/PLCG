/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = var_6;
    var_21 = var_3;
    var_22 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_23 = var_6;
        var_24 = ((var_13 + 2147483647) << (var_2 - 135));
        arr_3 [i_0] = (var_6 == var_4);

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0] [2] |= var_5;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_25 = (var_11 > var_17);
                var_26 = (var_0 * var_13);
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_27 = (var_13 | var_7);
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_28 = (~var_8);
                            var_29 = (min(var_29, (var_14 > var_7)));
                            var_30 = var_14;
                        }
                    }
                }
                arr_20 [i_0] = (((~var_13) < var_17));
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_31 = (max(var_31, var_1));
                var_32 = (min(var_32, var_8));
            }
            var_33 *= (var_3 >= var_3);
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((~(max((max(var_13, var_8)), -var_10))));
        arr_28 [i_7] = min(((((~var_17) != (max(var_15, var_18))))), var_4);
        var_34 = (min(var_34, (var_5 && var_8)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_35 = (max(((~(~var_1))), var_17));
        var_36 = var_11;
        var_37 = var_4;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_38 = (max(var_38, (((var_10 != ((var_9 | (max(var_0, var_14)))))))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_35 [i_9] = (var_8 && var_0);
            var_39 *= var_6;
            arr_36 [i_10] = var_13;
        }
        var_40 = (max((max(var_6, -var_15)), (min(((max(var_9, var_11))), -var_16))));
    }
    #pragma endscop
}
