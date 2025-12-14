/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = (max((((((var_6 ? 65535 : var_13))) ? 10 : ((max(var_3, 10))))), ((var_1 << ((((10 ? 213 : var_5)) - 210))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [11]) ? var_3 : (((arr_1 [i_0] [i_0]) ? var_18 : var_0))));
        var_22 = (max(var_22, 22638));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = (((((-(arr_4 [i_1])))) || (((arr_4 [i_1]) <= var_3))));
        var_24 ^= 14154170165940974310;
        var_25 = var_0;
    }
    var_26 = (~var_14);
    #pragma endscop
}
