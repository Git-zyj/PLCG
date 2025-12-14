/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 += ((((var_9 ? var_3 : var_5))) ? (((((var_4 ? var_11 : var_1)) + (var_1 != var_11)))) : var_12);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = ((var_9 ? var_4 : var_1));
            var_16 = (min(var_16, (((var_6 ? var_11 : var_0)))));
        }
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_17 += ((((max((((var_12 ? var_4 : var_6))), (var_12 - var_12)))) ? (var_3 || var_2) : ((max(var_8, var_2)))));
        arr_8 [i_2 + 1] = ((var_11 - (~var_6)));
        var_18 &= var_0;
        arr_9 [i_2 - 1] = (max((max((min(var_7, var_1)), (((var_0 ? var_5 : var_13))))), var_7));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_19 += (var_12 & var_12);
        var_20 = ((var_4 ? var_0 : var_11));
    }
    var_21 = (((max((var_8 || var_1), var_1))) + (((min(var_13, var_1)) / var_3)));
    var_22 = -var_0;
    #pragma endscop
}
