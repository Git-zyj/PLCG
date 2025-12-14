/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) << (((arr_1 [i_0]) - 23909))));
        var_14 = (-157241658 ? (~157241658) : var_5);
        arr_3 [i_0] = 9223372036854775807;
        var_15 = ((-((var_3 * (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) && (arr_1 [i_0])));
    }
    #pragma endscop
}
