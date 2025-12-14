/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((var_9 + var_2), var_1))) ? ((var_5 ^ (var_9 + var_0))) : var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(3585174056033611009, 3585174056033611010));
        arr_2 [i_0] = (min((((arr_0 [4]) - var_10)), (((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6)) >> (var_7 - 141)))));
    }
    #pragma endscop
}
