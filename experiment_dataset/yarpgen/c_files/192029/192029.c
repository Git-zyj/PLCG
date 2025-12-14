/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((max(var_1, var_10))) ? var_6 : var_6)) | (((((31 ? 1 : 1))) ? var_9 : -1))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = arr_1 [i_0];
        var_13 ^= (arr_0 [18] [i_0]);
    }
    #pragma endscop
}
