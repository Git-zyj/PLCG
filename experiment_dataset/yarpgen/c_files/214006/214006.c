/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(-var_1, ((((-69 ? var_4 : 3952113740)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 -= (~(-var_4 % var_15));
        arr_4 [i_0] = (((min((arr_3 [i_0]), (arr_0 [i_0] [i_0]))) * (((((arr_1 [i_0]) >= var_15))))));
        var_18 = var_4;
    }
    var_19 *= var_8;
    #pragma endscop
}
