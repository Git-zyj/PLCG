/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 >> (((32 && (-9223372036854775807 - 1))))));
    var_13 = ((!((max(16, 32753)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((!3250356830) ? (arr_0 [i_0]) : 32564));
        arr_5 [i_0] [i_0] = ((((((arr_2 [i_0]) ? var_6 : var_9))) ? ((((arr_2 [i_0]) > 9223372036854775807))) : (((arr_2 [i_0]) >> (-32254 + 32282)))));
        var_14 &= -5660496409732898444;
    }
    var_15 = var_4;
    var_16 = (((((((max(178, 71)))) | var_10)) << (((((max(-119, 78)))) + 139))));
    #pragma endscop
}
