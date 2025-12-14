/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0 + 2] [i_0 - 2]) * (arr_0 [i_0 + 2] [i_0 - 2])));
        var_20 *= (((var_5 * 18226) ? -1443705141 : 1443705155));
        var_21 = (max(var_21, var_15));
    }
    var_22 = -84;
    #pragma endscop
}
