/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [19] = ((~((var_11 ? var_1 : var_2))));
        var_17 = (((~var_9) ? ((var_10 ? var_6 : var_15)) : var_1));
        arr_4 [i_0] = ((((max(var_0, var_11))) ? ((var_9 ? var_6 : var_9)) : var_12));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = (max(((var_0 ? var_15 : var_4)), var_0));
            var_19 *= (max((!var_11), ((var_14 ? var_16 : var_8))));
            var_20 = (max(var_20, var_2));
            var_21 = var_11;
            arr_11 [i_2] [i_2] [i_2] = var_10;
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_22 = (min(var_22, 127));
            var_23 = var_5;
            arr_15 [i_3] = ((~(~var_7)));
            var_24 ^= ((var_14 ? var_10 : (max(-120, var_6))));
        }
        arr_16 [i_1] = ((!var_13) ? var_9 : -28);

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_19 [i_4] = (!var_13);
            arr_20 [i_4] = (~var_13);

            for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_25 ^= var_2;
                var_26 = (~127);
                var_27 ^= ((((min(var_3, var_1))) ? -var_0 : (min(var_2, var_2))));
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_31 [i_4] = (2633764832 ? 2781679338 : 64);
                    arr_32 [i_1] [i_1] [i_1] [i_4] = var_16;
                    var_28 = var_10;
                    var_29 = (max(var_29, ((((~var_5) ? var_9 : var_11)))));
                    var_30 = (~var_0);
                }
                arr_33 [i_1] [i_4] [i_1] = ((var_7 ? var_10 : var_11));
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_31 = (min((~var_15), ((min(var_12, var_10)))));
            arr_37 [i_1] [i_1] [i_8] = (~var_14);
            var_32 = var_9;
        }
    }
    var_33 |= ((((min(var_16, var_16))) ? var_8 : var_13));
    #pragma endscop
}
