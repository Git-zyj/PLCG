/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 |= (0 != 12);
        var_21 = ((((var_10 != (((arr_2 [3]) ? var_9 : 18446744073709551594)))) ? (max((657777022841649731 - var_3), (arr_1 [i_0]))) : (arr_1 [i_0])));
    }
    var_22 += (max(((~(~1659946502))), (((((max(var_17, var_12))) | var_16)))));
    var_23 |= var_6;
    #pragma endscop
}
