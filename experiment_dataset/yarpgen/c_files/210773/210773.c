/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((-2147483647 - 1) >= (max(1, 4428452019049387180))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 228;
        var_15 = (max(var_15, (((1 ? (arr_1 [i_0] [i_0]) : 938983619)))));
    }
    var_16 = (-125 || var_13);
    #pragma endscop
}
