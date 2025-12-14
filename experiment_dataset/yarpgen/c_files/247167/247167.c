/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [4] = (45056 >= -82871621);
        arr_4 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_12 = (arr_0 [i_1] [i_1]);
        arr_8 [i_1] = (arr_7 [i_1]);
    }
    var_13 = ((min(((var_9 ? var_7 : var_1)), var_6)) ^ var_9);
    #pragma endscop
}
