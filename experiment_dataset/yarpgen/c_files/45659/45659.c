/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = 4;
        var_11 = (min(var_11, ((((-29311 ? ((max(230, 4095))) : 1))))));
        arr_2 [i_0] [6] = (~-15);
    }
    var_12 = var_0;
    #pragma endscop
}
