/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (~var_6)));
        var_20 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((~(arr_1 [i_1] [i_1]))) & (arr_1 [i_1] [i_1]))))));
        var_22 = ((-1135051402 ? (arr_3 [i_1]) : -1560722897289495090));
    }
    var_23 = var_6;
    #pragma endscop
}
