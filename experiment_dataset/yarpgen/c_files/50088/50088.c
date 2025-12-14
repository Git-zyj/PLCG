/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_3 ? ((var_9 ? var_11 : (((var_13 ? var_19 : var_19))))) : ((((((9223372036854775807 ? 255 : var_0))) ? var_1 : ((var_9 ? var_1 : var_18)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = (min(var_21, (((var_10 ? var_10 : ((var_17 ? var_17 : var_0)))))));
        var_22 = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 += ((var_3 ? var_17 : ((var_2 ? var_13 : var_10))));
        var_24 = ((var_0 ? var_14 : var_6));
        var_25 = (var_6 ? var_11 : var_4);
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_26 = ((var_4 ? ((var_3 ? var_0 : var_16)) : ((var_4 ? var_8 : var_17))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_27 = (((((var_18 ? var_16 : var_1))) ? (((var_3 ? var_3 : var_8))) : ((var_7 ? var_14 : var_5))));
            var_28 = var_13;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_29 = (((((var_11 ? var_3 : var_1))) ? ((var_9 ? 23153 : 238)) : var_7));
            var_30 = ((120 ? var_4 : var_14));
            arr_13 [i_2] = ((139 ? 16402913134602086683 : 16402913134602086683));
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_31 = (((((var_7 ? var_0 : var_3))) ? var_10 : ((var_0 ? var_14 : (((var_18 ? var_18 : var_6)))))));
        var_32 = var_18;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 6;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_33 = ((((((((var_17 ? var_3 : var_14))) ? ((var_10 ? var_19 : var_3)) : var_16))) ? (((((var_6 ? 18446744073709551594 : 6))) ? 2043830939107464936 : 238)) : (((var_9 ? ((var_2 ? var_8 : var_19)) : var_4)))));
                    var_34 = var_12;
                }
            }
        }
        arr_21 [i_5] [3] = (((((var_0 ? var_2 : var_0))) ? ((var_19 ? var_10 : var_14)) : var_3));
        arr_22 [i_5] [i_5] = var_4;
    }
    #pragma endscop
}
