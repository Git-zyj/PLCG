/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = ((-(((!(235 * 3484749907))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [9] = var_17;
        arr_3 [i_0] = ((((3484749890 ? 4294967286 : var_12)) >> (((var_9 | var_1) - 2779891653))));
    }
    var_20 = var_0;
    var_21 = 8113350220446379289;
    #pragma endscop
}
