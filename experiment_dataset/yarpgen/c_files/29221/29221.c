/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_0 ? -5914 : (((min(-87, 146)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0]) == 7));
        var_12 = 0;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_2;
        var_13 += (((677098270 * 193) ? ((((var_5 ? 141 : 1)))) : (((max(var_8, 123))))));
    }
    #pragma endscop
}
