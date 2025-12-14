/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (!-13206);
        var_11 ^= (((((0 ? (-1 <= 13352) : 1))) ? (min(((-16404 ? 58720256 : var_9)), var_3)) : (((1424251047 || (-127 - 1))))));
        var_12 ^= -var_10;
    }
    var_13 -= var_10;
    #pragma endscop
}
