/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((-581 <= 581) ? (var_8 * -581) : (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0 - 2])))));
        var_11 = ((var_8 ? (((~15946331670215585387) * (min(var_3, (arr_2 [i_0]))))) : ((-564 ? (((var_8 ? 580 : var_4))) : ((var_3 ? 15946331670215585372 : 10))))));
        arr_4 [18] &= (((!var_0) < (((((622426675 ? 9223372036854775807 : var_2))) ? ((15946331670215585381 ? var_10 : (arr_0 [i_0]))) : 3672540615))));
        var_12 += (18446744073709551605 * 119);
        var_13 = (((((min((arr_0 [i_0 + 1]), var_5))) ? (arr_2 [i_0]) : (max((arr_2 [i_0]), -165255638454226021)))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = (min(var_14, (((18446744073709551609 ? (((((55927 ? 160 : 2623260330600007479))) ? (arr_6 [i_1 + 1]) : var_1)) : (((var_7 ? 6113 : -12565))))))));
        arr_8 [i_1] = ((~(((((3 ? 6471336559069675327 : 15946331670215585383))) ? 18446744073709551610 : (arr_7 [i_1 + 1])))));
        var_15 = ((-948531745 ? (max(3, 65532)) : (((-1876579457 ? -1876579460 : 73)))));
    }
    var_16 = (max(((((var_2 | var_5) <= ((-23321 ? var_5 : 16128))))), var_3));
    #pragma endscop
}
