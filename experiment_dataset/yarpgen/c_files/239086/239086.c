/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 = (max((~var_11), (var_1 * var_5)));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 &= ((!(((((var_10 && (arr_1 [i_0 + 2]))) ? (arr_1 [i_0 - 3]) : (min((arr_3 [i_0] [i_0 + 3]), (arr_1 [i_0]))))))));
        var_15 = (((arr_0 [i_0 - 2] [i_0 - 2]) - (max((arr_0 [i_0 + 2] [i_0 - 1]), 18446744073709551607))));
        var_16 += 2;
    }
    var_17 &= (min(var_1, -var_1));
    #pragma endscop
}
