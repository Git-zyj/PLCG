/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((max((arr_2 [i_0 + 1]), (arr_0 [i_0 + 1]))) <= (arr_2 [i_0 - 1])));
        var_20 |= (((1 ? 47 : -1)));
        var_21 += (!((max(1, (~var_12)))));
        var_22 = var_4;
        arr_4 [i_0] = -3074996882237666447;
    }
    var_23 = (1 % 1);
    var_24 = var_8;
    #pragma endscop
}
