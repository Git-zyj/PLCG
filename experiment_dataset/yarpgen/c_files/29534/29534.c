/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = (((15331506898790749732 ? -19057 : 1)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 = ((-((-((2287828610704211968 ? 1 : -4576923802812317832))))));
        arr_2 [1] = -22894;
        arr_3 [i_0 - 2] = 1016;
    }
    var_19 = 1;
    var_20 = (~((26058 ? (~1400) : 9121831221905929558)));
    #pragma endscop
}
