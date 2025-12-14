/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((var_5 + ((var_13 ? var_9 : var_2)))) < var_10));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = max((((-(var_6 && var_12)))), (max(17407, -4708554072572394541)));
        var_16 *= var_7;
        arr_2 [i_0] [2] = ((((!var_1) && var_4)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 -= ((((var_1 ? var_11 : var_3)) / var_9));
        arr_6 [16] [13] = ((-(((((var_9 ? var_8 : var_3)) >= var_12)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = ((~(!var_11)));
        var_18 -= ((var_5 << (var_11 + 28773)));
        arr_10 [i_2] = ((var_2 ? (!var_7) : (~var_11)));
    }

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_19 -= (((var_4 ? ((max(var_11, var_0))) : var_10)) ^ (max(((var_2 ? var_6 : var_11)), var_13)));
        var_20 *= (min((!var_11), ((~((var_3 ? var_8 : var_6))))));
    }
    var_21 = (+-1);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                arr_20 [i_4] [4] &= (!0);
                var_22 = (14 | 0);
            }
        }
    }
    #pragma endscop
}
