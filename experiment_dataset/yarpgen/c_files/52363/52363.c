/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((var_7 < var_0) ? (((9223372036854775807 + 2147483647) << (!-25))) : ((var_8 * (var_3 / 22854)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, ((((!(arr_2 [i_0 - 1])))))));
        arr_4 [i_0] = (((((var_9 ? 115 : -45)) ? ((min(var_5, -33))) : (var_2 >= -64))));
        var_12 = (((((max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2]))))) != (((((min(var_5, 28)))) + ((-32 ? (arr_2 [i_0]) : var_5))))));
    }
    #pragma endscop
}
