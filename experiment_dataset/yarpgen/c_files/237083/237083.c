/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0 + 2]);
        var_16 -= (((arr_2 [4]) != (arr_2 [0])));
        var_17 = 10235231041539738150;
    }
    var_18 = ((((min(4294967288, 10235231041539738155))) ? var_2 : (((!(((8211513032169813465 ? -469127767 : 1))))))));
    #pragma endscop
}
