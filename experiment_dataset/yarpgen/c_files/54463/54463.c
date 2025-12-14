/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((var_6 ? (~2) : (min(var_0, var_1))));

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_13 *= (arr_2 [i_0 - 1] [i_0 - 3]);
        arr_4 [i_0] = (min(((-(var_10 * var_7))), ((((arr_1 [i_0 + 4] [i_0 - 3]) ? var_4 : (arr_0 [i_0 - 1]))))));
    }
    #pragma endscop
}
