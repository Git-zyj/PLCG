/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min((((~((max((arr_1 [i_0]), (arr_2 [i_0]))))))), (min(-var_3, (max(var_2, var_11))))));
        var_15 ^= (max(var_11, (max((((arr_0 [1]) ? var_4 : (arr_3 [13]))), var_1))));
    }
    var_16 = (~(((((var_5 ? var_6 : var_13))) ? var_4 : (((var_12 ? var_6 : var_9))))));
    var_17 = (var_12 % var_3);
    var_18 = (min((~var_9), var_3));
    #pragma endscop
}
