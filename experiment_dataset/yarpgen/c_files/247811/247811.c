/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 *= (var_10 + var_2);
        arr_3 [i_0] = var_6;
        var_16 = (max(var_16, (((((var_12 ? 176 : var_10)) > 36008)))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_17 = max((-32552 / var_0), (min(8313746794030537903, var_4)));
        var_18 = (!-8313746794030537903);
        var_19 += ((-(arr_5 [i_1 - 2] [i_1 - 2])));
        var_20 = ((26683 ? 45087 : 162));
    }
    var_21 = (!var_7);
    #pragma endscop
}
