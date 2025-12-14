/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_11;
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (!var_13);
        var_21 = arr_2 [i_0];
        arr_5 [i_0] [10] = (((((var_12 <= (arr_1 [i_0])))) << (((max((((arr_2 [i_0]) ? 6360 : (arr_0 [i_0] [i_0]))), ((59200 ? 59176 : 16382)))) - 59163))));
    }
    var_22 ^= (!var_5);
    var_23 = (max(((var_10 ? var_0 : var_14)), var_12));
    #pragma endscop
}
