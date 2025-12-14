/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(max(-3069, (242 + 1)))));
    var_14 = (((((0 | ((3091 ? 206 : 11168))))) ? (((18446744073709551609 == -125) * (!246))) : (-0 < var_7)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = -0;
        arr_2 [i_0] = (((((-962068870 ? 1 : 532364084))) ? 33 : -2147483622));
        var_16 += (50 ^ 73);
    }
    #pragma endscop
}
