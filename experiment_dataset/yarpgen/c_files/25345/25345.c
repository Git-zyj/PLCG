/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 *= 65535;
        var_14 -= (min((arr_0 [i_0]), (min(6325791373405165387, (arr_0 [i_0])))));
    }
    var_15 = (((((-(~var_6)))) || ((min(((var_12 << (13347 - 13341))), (~var_7))))));
    var_16 = var_1;
    #pragma endscop
}
