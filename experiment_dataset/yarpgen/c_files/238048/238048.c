/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 |= (((((var_2 ? var_19 : ((15341 ? 15341 : var_2))))) ? var_17 : (((!(((var_1 ? var_6 : var_14))))))));
        arr_3 [i_0] = var_11;
        var_21 = (((((65535 ? (-127 - 1) : (((!(-9223372036854775807 - 1))))))) ? var_18 : ((-var_1 ? (((1 ? 277076930199552 : 1))) : var_14))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_22 = var_1;
        var_23 = var_12;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_24 = var_0;
            var_25 = var_12;
            var_26 = var_4;
        }
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            arr_12 [3] = ((var_3 ? ((105 ? 3108564092 : 101630048)) : var_7));
            var_27 = var_16;
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_1] [i_1] [i_1] = (var_17 ? -var_15 : (((var_14 ? var_4 : var_3))));
            var_28 &= (~var_0);
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_29 += ((var_16 ? var_2 : var_13));
            var_30 = (min(var_30, var_5));
        }
        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            var_31 = var_11;
            var_32 = var_19;
            var_33 = -var_19;
        }
        var_34 = var_0;
    }
    var_35 = var_19;
    #pragma endscop
}
