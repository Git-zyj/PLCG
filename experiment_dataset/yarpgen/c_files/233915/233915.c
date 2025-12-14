/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((min((var_4 & 0), var_9)), var_2));
    var_20 = 1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((!(arr_3 [i_0 + 1])));
        var_21 = arr_0 [i_0];
    }
    var_22 = -var_11;
    #pragma endscop
}
