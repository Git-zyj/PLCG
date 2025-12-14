/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((~((var_17 ? var_2 : var_12))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((~var_3) + (var_14 + var_16))));
        var_21 = max(((max((max(var_13, var_5)), ((min(var_16, var_5)))))), (((((min(var_14, var_2)))) + (min(var_10, var_3)))));
        var_22 = var_8;
        arr_2 [i_0] = max((!var_16), (var_4 + var_5));
        var_23 = ((~(min(var_2, (var_16 + var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 -= ((-(var_9 + var_17)));
        var_25 = var_0;
        arr_6 [i_1] [i_1] = var_9;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = var_0;
        var_26 = (((var_15 ? var_0 : var_9)));
        var_27 &= (!var_15);
        arr_10 [i_2] [i_2] = var_6;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_28 = (var_13 || var_9);
                var_29 = (var_11 + var_10);
            }
            var_30 = (max((var_5 + var_10), (((var_10 + var_6) + var_18))));
            var_31 = (max((((((var_1 ? var_7 : var_6))) ? (var_0 + var_12) : var_10)), (~var_1)));
        }
        var_32 = (var_11 + var_7);
        var_33 = ((-(var_12 + var_18)));
        var_34 += var_6;
    }
    var_35 = var_11;
    var_36 = ((~(max(var_11, (~var_3)))));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_37 = (var_5 + var_1);
        var_38 = var_6;
        var_39 += (!var_17);
        arr_23 [i_6] = (~var_17);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7 + 1] = ((var_17 << (var_12 + 1944415320)));
        var_40 = ((!(!var_10)));
    }
    #pragma endscop
}
