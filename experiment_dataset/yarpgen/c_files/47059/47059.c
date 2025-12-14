/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= -1;
    var_21 = (max(((var_15 ? 830106606 : (-127 - 1))), ((max(-6, (-8 == 3464860689))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_22 = var_8;
        var_23 -= ((!((min((min(var_16, -843271616)), (min((arr_1 [i_0]), var_16)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((((var_8 == ((max(40, var_7)))))) << (((((arr_5 [i_1]) ? var_18 : var_11)) - 93)));
        arr_7 [i_1] [i_1] = ((-106 == ((((arr_3 [i_1] [i_1]) > (max(var_0, var_14)))))));
    }
    #pragma endscop
}
