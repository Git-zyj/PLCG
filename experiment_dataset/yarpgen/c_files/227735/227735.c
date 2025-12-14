/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_8;
    var_13 = (min(var_13, var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 |= ((((((((48907 ? var_0 : var_6))) ? ((((arr_0 [i_1] [i_1]) ? (arr_4 [1] [i_1] [1]) : (arr_4 [15] [15] [i_1])))) : var_4))) ? ((((((0 ? (arr_3 [i_0] [13]) : (arr_1 [5])))) ? (((arr_1 [1]) ? -28866 : 1)) : -40))) : (((arr_0 [i_1 - 1] [i_1 - 1]) ? var_5 : 1))));
            var_15 = (min(var_15, ((((((297460342 ? (arr_0 [i_1 - 1] [i_1 - 1]) : var_10))) ? ((12875206828262361157 ? var_6 : (arr_3 [i_0] [i_1 - 1]))) : ((2617227828353060207 ? (arr_3 [i_0] [i_1 - 1]) : var_2)))))));
        }
        var_16 = (((((((((arr_4 [i_0] [i_0] [16]) ? (arr_1 [i_0]) : var_7))) ? ((16083914087722263751 ? (arr_1 [i_0]) : var_10)) : ((var_7 ? 20 : var_8))))) ? ((((arr_1 [i_0]) ? var_9 : var_10))) : (((((10303242562624535992 ? (arr_3 [i_0] [i_0]) : 18446744073709551615))) ? ((var_7 ? (arr_1 [i_0]) : 2775577243)) : ((16293050901731092069 ? 2903160742 : -29581))))));
    }
    var_17 = ((var_0 ? ((var_3 ? var_4 : (((var_7 ? var_2 : var_8))))) : var_2));
    #pragma endscop
}
