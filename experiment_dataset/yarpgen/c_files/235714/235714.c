/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_12 -= ((47 ? 278289160 : 1));
        var_13 = (((var_6 > var_5) == -var_5));
        var_14 -= ((((((1 != ((min(1, -88))))))) | (var_0 | var_6)));
        arr_3 [i_0 - 1] [i_0] = ((var_4 % (max(var_9, var_1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_15 = (min(var_15, (var_9 / var_10)));
            var_16 -= var_6;
            var_17 = (((((var_2 ? var_11 : var_10))) % var_6));
            arr_8 [i_1] = (!1);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 &= var_7;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_19 = (1 ? 1 : 0);
            var_20 = (var_7 || var_0);
            var_21 = (min(var_21, (var_11 <= var_8)));
            var_22 = (min(var_22, 1));
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = (!1);
        var_24 = (((max(var_11, var_9)) + ((var_2 ? var_2 : var_6))));
        var_25 -= (1 <= 1);
        arr_16 [i_4] [i_4] = (max(((min(var_5, var_3))), (var_2 <= var_11)));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_26 = (65535 <= 18898);
        arr_19 [i_5] = ((min((~var_2), (var_6 | var_2))) < var_1);
    }
    #pragma endscop
}
