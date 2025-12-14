/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 = (max(9, 247));
        var_20 -= (((((22912 ? 30638 : 9))) ? ((~((~(arr_1 [13]))))) : (arr_0 [i_0 - 2] [i_0])));
    }
    var_21 = ((((((((254 ? var_12 : var_18))) ? (~var_17) : (!var_10)))) ? ((((min(8, var_17))) ? (~var_17) : var_18)) : (((!(((301332448 ? 678019087801375330 : 247))))))));
    #pragma endscop
}
