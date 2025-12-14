/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = ((((var_4 ? -287707218 : 5660131240126528222)) / ((((2561835296 || (arr_1 [i_0])))))));
        var_15 = ((!((((arr_2 [i_0 - 2]) ? -35 : var_9)))));
    }
    var_16 = (var_4 || -var_0);
    var_17 *= ((136 ? 27844 : ((~((37692 ? 24423 : 27844))))));
    #pragma endscop
}
