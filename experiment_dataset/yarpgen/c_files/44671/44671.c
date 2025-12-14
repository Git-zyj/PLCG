/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = 120;
        var_21 = ((-var_2 + 2147483647) << (((max(var_5, (arr_1 [i_0]))) - 932832261)));
    }
    var_22 = (min((((var_7 || ((max(var_15, var_10)))))), var_18));
    var_23 = ((var_18 >= ((54440 ? 0 : 15360))));
    var_24 = ((((((var_13 + var_3) % var_3))) ? var_19 : var_8));
    var_25 = var_3;
    #pragma endscop
}
