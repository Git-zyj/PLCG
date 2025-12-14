/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max((((var_11 << (var_10 - 3555078492)))), (~440246899793967573))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [3] = -32763;
        arr_3 [10] [1] = ((65535 <= (arr_1 [i_0])));
        arr_4 [i_0] = var_0;
        var_16 = 0;
    }
    var_17 = ((-(max((!var_12), (-23257 * var_7)))));
    var_18 = ((max((max(24270, 56573267)), 21074)));
    #pragma endscop
}
