/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_2;
    var_16 *= var_12;
    var_17 -= var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0] [1]) ^ var_0));
        var_18 = (min((((arr_0 [i_0] [i_0]) ? var_1 : var_5)), ((-(arr_0 [i_0] [7])))));
        var_19 = ((!(arr_0 [i_0] [i_0])));
    }
    var_20 = (((((~2312241704) ? var_13 : 2147483647)) & 1));
    #pragma endscop
}
