/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((-(var_10 / var_10)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_3 [3] = var_9;
        var_16 = -var_3;
    }
    #pragma endscop
}
