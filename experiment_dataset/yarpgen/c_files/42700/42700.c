/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 241));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] [i_0] = (((8 * (max(18446744073709551607, 8)))));
        var_12 = (max(var_12, 45751));
    }
    var_13 &= ((((((min(var_2, var_9)) + var_2))) ? var_4 : 6));
    var_14 &= var_6;
    var_15 = (2 < -85);
    #pragma endscop
}
