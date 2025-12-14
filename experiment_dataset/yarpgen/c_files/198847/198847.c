/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (~var_3);
        var_11 = (min(var_11, (!-8944531346697180958)));
    }
    var_12 = var_9;
    #pragma endscop
}
