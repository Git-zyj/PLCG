/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_13;
    var_17 = (max(var_14, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [11] [1] = ((var_9 >= (arr_1 [i_0])));
        var_18 = ((((arr_1 [i_0]) ? var_3 : (arr_0 [1]))));
    }
    var_19 *= var_3;
    #pragma endscop
}
