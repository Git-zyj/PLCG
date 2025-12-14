/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_15);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(45653 / 10));
        var_19 = (((((-(arr_0 [19])))) ? var_6 : (-1319125762 > 1)));
        var_20 = 92;
        var_21 += 30;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (arr_0 [i_1]);
        var_23 = 2047;
        var_24 = ((15 ? 1835008 : var_1));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2] = var_0;
        var_25 = var_13;
        var_26 = (min(var_26, (((16 ? var_0 : (arr_6 [i_2]))))));
        arr_8 [i_2] = var_13;
    }
    var_27 = -0;
    #pragma endscop
}
