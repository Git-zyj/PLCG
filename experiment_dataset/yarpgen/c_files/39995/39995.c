/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((23221 && 23221) >> ((((-(arr_0 [i_0]))) + 45))));
        var_21 = (max(var_21, (((~(arr_1 [i_0]))))));
        arr_3 [i_0] = ((-25581 != (((42314 / 9223372036854775807) ? -962670723598330992 : -9223372036854775807))));
        arr_4 [i_0] = (((((var_16 * (min(0, -9223372036854775794))))) ? (max((arr_0 [i_0]), (var_13 >= var_3))) : ((((((9223372036854775807 & (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? var_13 : var_6)) : (((((arr_0 [i_0]) <= (arr_1 [i_0]))))))))));
        var_22 = 1571352296562373755;
    }
    var_23 &= (!0);
    var_24 += var_19;
    #pragma endscop
}
