/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_10));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((-(((!((!(-127 - 1))))))));
        var_13 = ((+(((-127 - 1) ? ((((!(arr_1 [i_0]))))) : (((arr_0 [i_0]) ? var_7 : (arr_1 [i_0])))))));
    }
    #pragma endscop
}
