/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_4 - var_6) ? var_8 : (var_8 != 32753))) * var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((!(((3 ? (arr_1 [i_0]) : var_2)))));
        arr_2 [i_0] = 154;
    }
    var_14 = ((3630827694 | (((var_8 ? (!2147483640) : ((30615 ? 0 : var_1)))))));
    #pragma endscop
}
