/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((((var_2 | 3548727691) >> 0))) ? 3548727691 : (((-9223372036854775801 ? var_3 : (min(3548727684, 403178971)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(((-9223372036854775801 ? (((((arr_2 [i_0]) || var_12)))) : ((0 ? 2090252923 : -8)))), -var_11));
        var_19 = (arr_0 [i_0]);
        var_20 = (min(var_20, var_8));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = 2090252894;
        arr_6 [4] = (arr_2 [21]);

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_1] = var_1;
            var_22 = (min(var_22, ((max(((-((var_5 ? 403178963 : 5876942772505234077)))), (((1807 ? ((var_0 ? (arr_5 [i_1]) : var_16)) : (var_1 && var_1)))))))));
            arr_12 [1] = 103308246;
            var_23 = 32749;
        }
        var_24 = 3445686039062134018;
    }
    var_25 = var_4;
    #pragma endscop
}
