/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max((min(-var_6, var_10)), var_17));
    var_20 = var_1;
    var_21 = ((-(max(-var_16, ((min(19200, var_9)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = ((-((150 + (var_3 ^ var_6)))));
        var_23 = (((arr_1 [i_0]) > (((~((30 ? (arr_0 [i_0]) : -18584)))))));
    }
    #pragma endscop
}
