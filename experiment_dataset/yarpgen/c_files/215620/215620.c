/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_4 & var_16) ? (((min(-5813, var_12)))) : (var_10 - var_1))), var_9));
    var_18 = (max(var_10, var_13));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = var_3;
        arr_2 [i_0] = (!(((-(arr_0 [i_0])))));
        var_20 = ((!(((var_0 * (arr_0 [i_0]))))));
        var_21 = (((((min(50, (arr_1 [i_0] [i_0]))))) & -5818));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_22 |= ((-(((max(-5813, var_0))))));
            var_23 &= (((var_8 / 1) + (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 1]) : var_0))));
        }
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_24 = -5818;
        var_25 = 21819;
    }
    var_26 = ((((max(((min(var_8, var_5))), (~var_3)))) ? var_9 : ((var_9 ? (var_5 & var_0) : var_6))));
    var_27 = (max((!var_15), ((((var_7 ? -6 : var_11)) & (var_6 < var_8)))));
    #pragma endscop
}
