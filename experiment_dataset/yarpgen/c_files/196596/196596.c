/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, var_16));
        arr_2 [i_0] = (((var_14 ? var_17 : var_8)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_8;
        arr_7 [i_1] [i_1] = ((!((min((119 & 1), (arr_5 [i_1]))))));
    }
    var_19 = ((min(var_15, var_6)));
    var_20 = ((((min(var_15, var_2))) ? var_5 : ((min(var_8, (min(var_2, var_14)))))));
    var_21 = var_4;
    var_22 = (max(var_22, var_15));
    #pragma endscop
}
