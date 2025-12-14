/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((min(2743553897, (0 + 18446744073709551612)))) ? 0 : 0);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (((arr_0 [i_0 + 1]) ? ((18446744073709551611 ? (arr_0 [i_0 + 1]) : var_7)) : (arr_0 [i_0 + 1])));
    }
    var_17 = (((((1 - (min(var_2, var_10))))) ? var_3 : var_13));
    var_18 |= ((var_13 + ((-(3837381008410371788 + 18446744073709551590)))));
    #pragma endscop
}
