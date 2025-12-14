/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((!(!var_5)))) % var_14));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 ^= ((-((-37895939862055876 ? -1 : 6182289498952431241))));
        var_19 = (max(var_19, 1649530708));
    }
    #pragma endscop
}
