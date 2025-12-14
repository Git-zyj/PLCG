/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 137;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((!((((arr_0 [i_0]) << (((var_13 + 26765) - 6)))))));
        var_16 -= (((min((var_13 <= 2049440193), (arr_1 [i_0] [i_0])))) <= (((((arr_1 [i_0] [i_0]) <= var_10)))));
    }
    #pragma endscop
}
