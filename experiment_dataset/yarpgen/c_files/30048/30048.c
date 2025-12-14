/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 += ((8388607 != (((min((min(82, var_11)), (!var_2)))))));
        var_15 = (max(var_15, 8388607));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = arr_2 [1];
        arr_5 [i_1] = (max(((4286578689 ? (arr_1 [i_1]) : (arr_1 [i_1]))), (min(8388606, 8388612))));
    }
    var_16 = min(((var_1 ? ((-15 ? var_8 : -15)) : ((min(30, 8388601))))), 2147483647);
    #pragma endscop
}
