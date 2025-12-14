/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_13);

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = (((((((var_12 ? var_6 : var_10))) ? (var_5 ^ var_13) : (var_2 | var_12))) & ((-(var_5 * var_2)))));
        var_16 = (!(-127 - 1));
        arr_2 [i_0] = (var_8 > 111);
        var_17 = (((((var_10 & var_3) ? (var_1 | var_3) : (var_5 & var_5))) & (((-((1 ? 1 : -109)))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((var_8 & (((var_7 > var_10) * ((var_3 ? var_5 : var_12))))));
        arr_6 [i_1] = var_8;
        arr_7 [i_1] = var_9;
        var_18 = (!var_6);
        var_19 = ((!(((((var_11 ? var_1 : var_2))) > var_5))));
    }
    var_20 = (((~(~var_9))) ^ var_12);
    var_21 = var_4;
    var_22 = (((var_10 / (((var_9 ? var_8 : var_13))))) * (((var_8 ? var_4 : var_6))));
    #pragma endscop
}
