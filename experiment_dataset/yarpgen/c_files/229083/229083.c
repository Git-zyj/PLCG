/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_10;
        arr_5 [i_0] = ((-0 - (((arr_2 [i_0]) / (arr_2 [i_0])))));
        var_17 = 36577;
    }
    var_18 -= var_4;
    #pragma endscop
}
