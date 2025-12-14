/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((((max(var_10, var_7))) * (~var_10)))));
    var_14 *= var_5;
    var_15 = (max(var_12, ((var_11 ? 1325411496272523584 : (((var_0 ? var_12 : var_11)))))));
    var_16 = (((((var_1 ? ((var_7 ? var_6 : 1325411496272523584)) : (((var_0 ? 0 : var_12)))))) || ((((((var_2 ? var_7 : var_5))) ? (-127 - 1) : (~var_3))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (var_7 <= 65532);
        var_17 = (-var_5 ? (arr_0 [i_0]) : (arr_2 [6] [i_0 + 1]));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 = ((((((var_6 ? (arr_5 [i_1]) : var_6)))) ? (((arr_5 [i_1 + 1]) ? var_12 : (arr_5 [i_1 + 2]))) : (((+((((arr_4 [9]) < (arr_6 [i_1 + 2] [i_1])))))))));
        var_19 = -1325411496272523600;
    }
    #pragma endscop
}
