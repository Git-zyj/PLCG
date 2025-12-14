/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [19] = (((((((max(var_7, 36549))) ^ ((max(var_8, var_8)))))) != (min(2367691063656233793, 308333623))));
        arr_4 [i_0] = (max((((var_16 || 308333617) ? 3880063228042939682 : ((min(var_14, -1846268209))))), (((58661 - (!-308333614))))));
        arr_5 [i_0] [i_0] = (min((((58661 != var_6) / ((~(-2147483647 - 1))))), 1));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = ((var_10 == (((var_8 || var_2) ? 496 : (min(18015190362878881423, var_4))))));
        var_19 &= ((659174258 ? (((1 | -93) | (max(var_1, var_1)))) : var_6));
    }
    var_20 = 16079053010053317816;
    var_21 = (max((max((1 / 65512), (-2147483647 - 1))), -var_0));
    #pragma endscop
}
