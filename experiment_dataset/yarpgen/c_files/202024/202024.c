/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((var_15 % ((var_7 ? var_13 : var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -var_8;
        var_18 = (((var_11 % var_1) ? var_3 : ((var_12 ? var_12 : var_6))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = (max((min((max(var_10, var_8)), ((max(var_6, var_4))))), (!var_3)));
        arr_6 [i_1] = ((((max(-var_4, -var_12))) ? ((min((max(var_15, var_16)), (var_16 % var_16)))) : (((var_1 > var_2) % var_10))));
        arr_7 [20] = var_3;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_20 = (-(max((min(var_13, var_14)), var_14)));
                var_21 += (max(((-(max(var_4, var_3)))), (min(var_3, var_2))));
            }
        }
    }
    var_22 = (min(var_22, (max(((-var_6 % (~var_6))), var_1))));
    #pragma endscop
}
