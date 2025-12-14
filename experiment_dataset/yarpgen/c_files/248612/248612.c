/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((max(42753, (arr_1 [i_0])))) | (((arr_0 [i_0]) ? var_11 : var_4)))), ((((min((arr_1 [i_0]), (arr_1 [6])))) ? -var_1 : (arr_0 [i_0])))));
        var_17 = (max(var_17, ((((((min(var_7, (arr_0 [i_0]))))) != (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((~((var_4 ? 117 : -23))));
        var_19 = (arr_4 [i_1] [i_1]);
    }
    var_20 = var_1;
    var_21 = ((var_12 ? var_6 : var_16));
    var_22 = var_2;
    var_23 = (max(var_23, var_13));
    #pragma endscop
}
