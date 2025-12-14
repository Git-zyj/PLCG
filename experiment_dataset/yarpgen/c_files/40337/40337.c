/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_1 [i_0])));
        arr_2 [i_0] = (max((--20932), 20932));
    }
    var_21 ^= -var_8;
    var_22 = ((var_18 > ((max(var_9, -23273)))));
    #pragma endscop
}
