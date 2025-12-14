/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(547115656, 1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        var_12 += ((-5606117039778458218 ? 1 : 1));
    }
    var_13 = ((1 ? 1 : 4306052476235005930));
    #pragma endscop
}
