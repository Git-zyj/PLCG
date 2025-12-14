/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((max(var_1, var_13)))));
    var_20 = ((20 ? (((var_12 ? -1073217536 : (33554368 & var_12)))) : (((((224 ? 0 : 18446744073709551615))) ? var_3 : ((var_8 ? 17146314752 : var_4))))));
    var_21 = ((-((((var_13 ? var_12 : var_6))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max((arr_0 [i_0]), (((arr_0 [i_0 + 1]) || var_1)))) ? (!var_13) : (0 >= -7)));
        var_22 = var_10;
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) > 16769024));
        var_23 = (((((1897572557 ? 1 : 0))) ? ((var_14 ? var_7 : var_4)) : 36028247263150080));
    }
    var_24 = (-8798342382811594818 & var_13);
    #pragma endscop
}
