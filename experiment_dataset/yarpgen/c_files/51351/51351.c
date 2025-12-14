/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (((((min(var_2, (arr_0 [i_0] [i_0])))) ? (max(((var_5 ? var_4 : var_0)), var_5)) : ((var_13 ? (min(var_4, var_6)) : ((var_2 ? var_13 : var_4)))))))));
        var_17 = (min(var_17, ((((var_8 ? (min(var_15, var_5)) : (~var_15)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((max(249, 10716))) != var_6));
        var_19 = (arr_4 [10]);
        arr_6 [i_1] = (var_15 > var_13);
    }
    var_20 = (((max((((var_12 ? var_2 : var_2))), ((var_12 ? var_4 : var_3)))) - var_3));
    var_21 = ((!(~var_6)));
    #pragma endscop
}
