/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((var_14 ? 255 : var_9))) ? var_10 : 18080227623241733533))) ? (~var_11) : (((((min(var_4, var_15))) ? var_1 : 503316480)))));
    var_17 = (min(var_17, var_1));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = ((var_6 ? ((-(arr_2 [4]))) : var_13));
        var_19 = (max(var_6, var_3));
        arr_3 [i_0] [5] = (var_14 / ((((62 ? var_2 : (arr_2 [i_0]))) + (arr_1 [0]))));
        arr_4 [i_0 + 1] = var_15;
    }
    var_20 = var_6;
    #pragma endscop
}
