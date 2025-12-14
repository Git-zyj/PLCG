/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((8687095326851318666 >> (var_0 - 947)));
    var_18 = 1962895423;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_19 = var_9;
            var_20 = (arr_5 [0] [i_1]);
            arr_6 [5] [i_0] = (((2688656926565351081 ? var_5 : 252)));
            var_21 = var_3;
            var_22 = (min(var_22, (arr_3 [i_1 + 1])));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_23 = var_14;
            var_24 -= -4534711020502059566;
        }
        arr_11 [i_0] [i_0] = ((!4095) || var_11);
        var_25 = (arr_4 [i_0]);
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_26 = ((!((min(var_5, 0)))));
        arr_14 [0] [14] &= (((~8581779564092956096) ? 1125899906842620 : -21744));
    }
    #pragma endscop
}
