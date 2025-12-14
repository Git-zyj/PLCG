/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (((((var_13 ? (21208 && -16384) : var_1))) ? ((max((arr_1 [i_0 - 1]), var_2))) : (((((4257 ? -7611 : -23858)) == (arr_0 [i_0 + 2]))))));
        arr_2 [i_0] = (max((((((var_8 ? var_3 : (arr_0 [i_0 + 1]))) <= ((var_0 ? var_2 : var_13))))), (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : var_0))));
    }
    #pragma endscop
}
