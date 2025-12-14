/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 == ((max(var_13, 255)))));
    var_15 *= (min((var_0 ^ var_0), (max((min(var_13, 18446744073709551600)), var_7))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 |= max((((!(-7369651710781992243 + -1969724014)))), 1020);
        var_17 = (min(var_17, ((max((min((max((arr_0 [i_0] [i_0]), var_1)), var_11)), (!var_0))))));
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
