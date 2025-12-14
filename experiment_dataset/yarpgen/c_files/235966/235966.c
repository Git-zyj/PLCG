/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 1] &= 21156;
        var_14 = (max(var_14, (arr_2 [i_0] [i_0 + 1])));
    }
    var_15 = (min(var_15, 44380));
    #pragma endscop
}
