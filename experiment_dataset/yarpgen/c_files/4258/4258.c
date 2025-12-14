/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (var_4 && var_7);
    var_15 = (max(((((min(var_9, var_5))))), ((-897730896828710600 ? (~1742868938) : var_9))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = ((+(min((((arr_0 [i_0]) ? var_6 : var_5)), (((var_0 || (arr_0 [i_0 + 1]))))))));
        var_17 = (((((arr_0 [i_0 + 1]) / (arr_0 [i_0 + 1]))) + (((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1])))));
    }
    var_18 = var_5;
    #pragma endscop
}
