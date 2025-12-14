/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, 12302));
        arr_3 [i_0] = ((0 ? 0 : 3901415011485030395));
    }
    var_20 = ((var_11 ? var_10 : (min(12302, var_9))));
    #pragma endscop
}
