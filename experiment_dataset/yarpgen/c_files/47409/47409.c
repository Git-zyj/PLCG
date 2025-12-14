/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 5763133036571732214;
    var_18 = var_7;
    var_19 = ((((((9223372036854775807 ^ var_4) <= ((max(var_9, 0)))))) * (!0)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        var_20 = ((~(arr_0 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0 - 1]);
    }
    #pragma endscop
}
