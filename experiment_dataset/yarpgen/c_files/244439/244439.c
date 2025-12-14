/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= -21206;
    var_13 = ((((min((min(var_7, 21192)), var_7))) ? (var_5 >= 21188) : (((((var_7 ? var_7 : var_9))) ? (3148313421348445160 && 15298430652361106456) : -var_3))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(var_11, ((((arr_1 [i_0 - 1] [i_0 - 1]) ? 426367047 : 0)))))) && 21188));
        var_14 &= (-((min((arr_1 [i_0 - 2] [i_0]), 1616045695787534787))));
        arr_4 [i_0] = (((((arr_0 [i_0 + 1] [i_0 - 1]) != (((arr_2 [i_0]) ? var_8 : -426367048))))) >> ((((54830 ? 54830 : (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))))) - 54821)));
        var_15 = 1;
    }
    #pragma endscop
}
