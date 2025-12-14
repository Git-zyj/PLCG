/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 -= (((arr_0 [i_0]) ? var_5 : var_3));
        var_12 = (((((arr_0 [i_0]) + 9223372036854775807)) >> (((6643945366768742199 | 2) - 6643945366768742199))));
        arr_3 [i_0] = ((var_0 ? (arr_0 [i_0]) : var_6));
    }
    #pragma endscop
}
