/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 ? (max(-var_16, (~var_3))) : var_4));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(((((((arr_0 [i_0 + 3] [i_0 + 3]) ? (arr_1 [i_0]) : var_6))) ? (min((-9223372036854775807 - 1), (-9223372036854775807 - 1))) : var_1)), (((var_0 + 9223372036854775807) >> (var_2 + 1403190659)))));
        var_20 = ((((((var_12 ? (arr_2 [i_0]) : var_11)))) ? (((~(arr_1 [i_0 - 1])))) : ((-(arr_0 [i_0 + 2] [i_0 + 2])))));
        var_21 = (!var_0);
    }
    #pragma endscop
}
