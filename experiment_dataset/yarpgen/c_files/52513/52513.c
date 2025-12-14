/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (!744099513);
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = (((var_10 ? -8042 : var_8)));
    }
    var_14 = (max(var_14, var_2));
    #pragma endscop
}
