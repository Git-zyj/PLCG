/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, 16707320735645672708));
    var_16 = (min(var_16, (((-1739423338063878901 ? var_13 : ((max(-7756082209676516834, var_1))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 ^= (arr_0 [i_0]);
        var_18 ^= (-83120460 ? -7756082209676516834 : 1750671325);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (arr_1 [i_1]);
        var_19 = (min(var_19, ((1739423338063878924 / (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = (max(var_20, (((+((min((arr_6 [i_2]), (arr_8 [3])))))))));
        arr_9 [i_2] = (arr_6 [i_2]);
    }
    var_21 = ((~((max(274810798080, var_3)))));
    #pragma endscop
}
