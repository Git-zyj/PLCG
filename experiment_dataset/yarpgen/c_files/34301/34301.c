/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max(-9, (max(var_4, 18446744073709551607))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_0 [0]);
        var_12 = var_1;
        var_13 = ((1666237897 ? 13832501303967385374 : 649750758));
    }
    #pragma endscop
}
