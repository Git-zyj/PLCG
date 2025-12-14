/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_5 ? var_10 : var_10))) ? (((var_9 ? var_3 : var_3))) : (min(var_8, var_10))))) ? (max(((var_0 ? var_8 : var_6)), ((var_1 ? var_8 : var_2)))) : var_5));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 = var_10;
        var_15 += ((((var_9 ? var_9 : var_8))) ? ((var_1 ? var_6 : var_4)) : var_4);
        arr_2 [i_0] [i_0] = (((((var_4 ? var_6 : var_1))) ? var_0 : ((var_2 ? var_6 : var_8))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 &= var_1;
        var_17 = (max(var_17, (((var_6 ? var_0 : var_5)))));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = (var_8 ? (((var_7 ? var_3 : var_0))) : var_10);
            var_18 = (((((var_0 ? var_9 : var_0))) ? var_1 : var_11));
        }
        arr_8 [i_1] [i_1] = ((var_3 ? var_8 : var_6));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_11 [i_3] |= (((((var_0 ? var_5 : var_10))) ? (max(var_4, var_9)) : (((var_3 ? var_6 : var_3)))));
        var_19 |= ((((min(var_1, var_9))) ? (min((((var_7 ? var_3 : var_9))), ((var_5 ? var_4 : var_1)))) : ((min(((var_10 ? var_1 : var_9)), var_0)))));
        arr_12 [i_3] = (max((((var_6 ? var_9 : var_3))), (min(102820598182446868, 2007952923))));
        var_20 = (max(var_20, (((((var_9 ? var_12 : var_9))) ? (((var_9 ? var_3 : var_8))) : ((var_0 ? var_7 : var_0))))));
    }
    #pragma endscop
}
