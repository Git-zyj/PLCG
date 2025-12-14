/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += max(18957, 8);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = var_0;
        var_15 = ((((max(((3456 << (62075 - 62056))), (arr_1 [i_0 - 1])))) ? ((((!(arr_0 [i_0]))))) : (((-38203 >= (arr_1 [i_0]))))));
    }
    #pragma endscop
}
