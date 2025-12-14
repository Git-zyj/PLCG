/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= 0;
        arr_2 [i_0] = (2807506353 >= var_9);
    }
    var_20 = var_15;
    #pragma endscop
}
