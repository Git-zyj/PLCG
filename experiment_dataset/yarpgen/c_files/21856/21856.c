/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (562828854 ? ((max(((((var_12 + 2147483647) << (var_13 + 28)))), (var_7 | var_18)))) : (((var_8 || var_0) ? ((-562828854 ? var_0 : var_16)) : (max(1, var_10)))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 += (max((((~((var_7 ? 1 : 44404))))), (max(134217727, -4294967281))));
        arr_4 [i_0] [i_0] = (min((((arr_3 [i_0 - 1]) & 18446744073709551615)), ((max((arr_0 [i_0] [i_0]), ((var_17 ? 1 : 7)))))));
    }
    var_21 = (max(var_21, var_5));
    var_22 = (((-var_6 == 1) ? var_15 : 1));
    #pragma endscop
}
