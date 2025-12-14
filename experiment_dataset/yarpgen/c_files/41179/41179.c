/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -1543539318));
    var_16 = ((((var_4 || (1543539297 % -1543539296)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (((-(arr_0 [i_0]))));
        var_18 = (arr_2 [i_0] [13]);
        var_19 = (max(var_19, (1543539333 ^ var_11)));
        var_20 = (max(var_20, 1));
        arr_3 [i_0] [13] = ((var_13 && (-1543539331 + 1543539316)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = ((arr_1 [i_1]) ? var_0 : ((((var_9 | var_6) ? (~var_5) : -1543539318))));
        var_22 = var_5;
        var_23 = 1543539319;
        var_24 = (max(var_24, -1543539306));
        var_25 -= ((((max(18446744073709551614, var_7))) ? (max((arr_2 [i_1] [i_1]), -1543539325)) : -1543539335));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_26 = ((((max((!1543539334), (-610330586747995160 - 18446744073709551614)))) && var_14));
        var_27 = ((((-23608 ? (arr_9 [i_2 + 2]) : 1))) ? ((var_5 ? var_11 : 1)) : 1941);
        var_28 = (max(var_28, (((~((~(var_0 | var_7))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] = (~-1543539338);
        arr_17 [i_3] = (((((-1543539351 ? (arr_12 [i_3]) : -1543539334))) ? (!var_2) : ((1543539343 ? 1543539331 : 8188))));
        var_29 = ((var_0 ? (arr_7 [i_3 + 1] [i_3 - 1]) : -1543539318));
    }
    #pragma endscop
}
