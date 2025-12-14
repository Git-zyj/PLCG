/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_1 [i_0])));
        var_14 &= ((((((-25954 ? 1 : (arr_2 [i_0]))))) ? (((min(1, (1 && 3))))) : (max(((1 ? 327681999742525235 : 3926144431356778341)), 0))));
    }
    var_15 = (max(var_15, var_4));
    #pragma endscop
}
