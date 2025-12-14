/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((!var_12) >= (((arr_0 [i_0] [10]) + var_8))))), (arr_0 [i_0] [1])));
        arr_3 [i_0] = var_14;
        arr_4 [3] = ((+(((arr_1 [4]) ? ((var_8 ? 2917897436 : (arr_1 [i_0]))) : (((min(var_15, var_7))))))));
        arr_5 [i_0] = ((max((var_6 & var_8), (arr_0 [i_0] [i_0]))));
        var_16 = 405690019;
    }
    var_17 = ((!((((((var_7 ? var_11 : var_13))) ? var_7 : -3576611351)))));
    var_18 = -var_2;
    var_19 = (((!3462737115878655904) ? (max((((var_4 ? var_14 : var_15))), ((-3462737115878655919 ? 2550757240 : var_13)))) : 1));
    #pragma endscop
}
