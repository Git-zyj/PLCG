/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = ((0 ? var_11 : var_8));
        arr_2 [i_0] = (min(var_1, (arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_19 = (var_8 ? var_17 : ((var_0 ? var_10 : var_4)));
            arr_6 [i_0] [i_1] [i_1] = (!var_6);
        }
    }
    var_20 = (min(var_3, 23));
    var_21 -= (((((var_12 ? (max(var_10, var_7)) : (((-5 ? 3917930546 : -83)))))) ? var_11 : (((-127 - 1) ? (max(var_0, var_3)) : var_7))));
    var_22 -= ((((max(var_10, var_5))) ? var_17 : (((((var_2 ? 31 : var_11))) ? var_2 : ((max(var_8, var_12)))))));
    var_23 = (((((max(var_5, var_5)) ? var_16 : ((min(125, 7)))))));
    #pragma endscop
}
