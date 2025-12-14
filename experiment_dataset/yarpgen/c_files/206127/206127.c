/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 25;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = 4294967270;
        arr_2 [i_0] [i_0] = var_4;
        var_21 = (max(var_21, 64));
    }
    #pragma endscop
}
