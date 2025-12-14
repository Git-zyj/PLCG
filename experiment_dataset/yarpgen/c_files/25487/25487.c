/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [8] = (arr_0 [i_0]);
        var_13 = (min((arr_0 [9]), -37));
    }
    var_14 = (((45 ? var_3 : (!39))));
    var_15 = (((var_9 ? var_8 : ((var_1 ? 7728751395078831190 : -6589925829955143239)))));
    #pragma endscop
}
