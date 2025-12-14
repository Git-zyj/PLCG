/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= -var_1;
    var_12 = (var_2 ? var_2 : (((var_9 >= var_3) ? var_0 : var_8)));
    var_13 = min((min(var_5, ((min(var_9, var_1))))), (max((~var_5), var_9)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        var_14 &= (arr_0 [i_0]);
        var_15 -= ((((arr_2 [i_0] [i_0]) + 2147483647)) >> (((arr_2 [i_0] [i_0]) + 25465)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (max(var_16, (((~((min((700189877 <= var_8), (arr_2 [i_1] [i_1])))))))));
        var_17 += (((arr_4 [i_1]) ? (arr_0 [i_1]) : ((((-(arr_1 [i_1] [i_1]))) >> (((arr_5 [1]) + 2007525231))))));
    }
    #pragma endscop
}
