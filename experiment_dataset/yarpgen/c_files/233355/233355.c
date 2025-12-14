/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (max(2751127461665908110, (((var_9 ? (var_9 < var_13) : (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((((((~4516) ? (((var_4 & (arr_1 [i_0])))) : (161877316 & -63)))) ? (((((var_17 ? (arr_0 [i_0] [i_0]) : 63)) <= ((((arr_2 [i_0]) || -164605558)))))) : (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = (max(-5173, var_9));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = var_7;
        var_20 = (min((arr_0 [i_1] [i_1]), ((!(((1 ? var_8 : 1)))))));
        var_21 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_22 = ((+((255 ? (arr_5 [i_2] [i_2]) : var_17))));
        var_23 = (min(var_23, (((var_9 ? (arr_7 [1] [i_2 + 1]) : (arr_7 [i_2] [i_2 - 1]))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_11 [14] = (!var_7);
        var_24 = (arr_0 [i_3] [i_3]);
        var_25 = (!4294967283);
        arr_12 [i_3] = (-9223372036854775807 - 1);
    }
    var_26 = (max(var_26, var_17));
    var_27 = var_12;
    var_28 = (max((max(-1430819290, var_16)), (((1 * var_5) / var_10))));
    #pragma endscop
}
