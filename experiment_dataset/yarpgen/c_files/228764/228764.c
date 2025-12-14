/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((3339252952 ^ 43910) ? 50262 : (max(1984, (((9004644922259027684 ? 0 : var_5)))))));
        arr_2 [i_0] = (((((var_3 & (arr_1 [i_0])))) & (min(var_2, (arr_1 [i_0])))));
    }
    var_13 = var_9;
    var_14 = 31;
    var_15 = (((((var_2 & 18446744073709551611) == var_1)) ? ((((((var_10 ? var_1 : 17965)) < (var_4 <= var_9))))) : ((var_2 ? (var_7 - var_9) : (var_3 + var_2)))));
    #pragma endscop
}
