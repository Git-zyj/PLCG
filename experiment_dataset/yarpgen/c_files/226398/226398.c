/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((4072894994 - ((((24779 >= (((max(21, 60))))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (var_6 + var_1)))) ? ((var_2 * (((1716156765 ? (arr_1 [i_0]) : -106))))) : -21381));
        var_13 = (max(var_13, (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
