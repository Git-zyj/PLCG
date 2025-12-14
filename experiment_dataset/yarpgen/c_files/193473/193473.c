/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_19);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 = (max(var_21, 52585));
        arr_2 [3] = (max((((max(var_11, (arr_0 [i_0]))))), (((!((min((arr_0 [i_0]), 52585))))))));
        arr_3 [i_0] [i_0] = (((max(((18446744073709551611 - (arr_1 [i_0] [i_0 - 1]))), (0 && 17815)))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((min((arr_1 [i_0 + 1] [i_0 + 2]), (arr_1 [i_0 + 1] [i_0 + 2]))))));
        var_22 = (min((arr_0 [i_0]), var_8));
        var_23 = (min(var_12, (47692 && 11504)));
    }
    var_24 = max((((!18446744073709551611) ? var_9 : var_10)), var_18);
    #pragma endscop
}
