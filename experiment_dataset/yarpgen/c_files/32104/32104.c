/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = var_10;
        var_13 |= (max(1, ((-24 ? 3 : (((arr_0 [i_0]) ? (arr_2 [19]) : -11))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_14 = (max((~-18940), (max((arr_0 [i_1 - 2]), (arr_5 [i_1 - 2] [i_1])))));
        var_15 = (max(((((max(var_2, 1))))), (max(var_2, (max(var_0, 8423337612695942565))))));
        arr_6 [15] [i_1] &= (((arr_2 [10]) ? ((var_4 ? ((32159 >> (((arr_2 [i_1]) + 8334221729090889374)))) : (arr_4 [i_1]))) : ((max(1, (max(var_5, 1)))))));
        var_16 = (((arr_5 [1] [i_1]) && 0));
    }
    var_17 = ((1 ? var_1 : var_6));
    var_18 -= max(((max(10029, ((3 ? 0 : var_6))))), (max((((151 ? 8 : 1))), var_4)));
    #pragma endscop
}
