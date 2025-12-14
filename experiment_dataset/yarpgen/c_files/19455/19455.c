/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-(max(2320016375, 2320016349)))), (((var_9 == (8088302491983502794 - 2320016349))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_0 [i_0] [i_0]);
        var_22 = (var_7 > 3184501144);
    }
    #pragma endscop
}
