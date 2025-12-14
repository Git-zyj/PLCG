/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 162;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (!31731);
                    arr_9 [i_2] = (((((!(!11504077489455108926)))) != var_5));
                }
            }
        }
        var_20 = (max(var_20, (arr_7 [13])));
        arr_10 [i_0] = ((+(max((var_16 ^ var_9), ((max((arr_0 [i_0] [i_0]), 1)))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_15 [8] = ((((((var_13 ? (arr_5 [i_3]) : var_8)) - 162))) + ((max(var_10, (arr_6 [2])))));
        arr_16 [i_3] [i_3] = var_8;
        arr_17 [i_3] = (((((41931 ? 12397948584932727544 : 1))) ? 1 : 634443212));
        var_21 = (min(var_21, (((((max((arr_0 [i_3] [i_3]), var_1))) ? (min((arr_8 [i_3]), (arr_0 [i_3] [i_3]))) : (((max(128, (arr_0 [i_3] [i_3]))))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_22 = 1985974482;
        var_23 *= (((arr_18 [i_4]) ? var_12 : var_12));
    }
    var_24 = (((var_11 == (var_1 && var_15))));
    var_25 = var_11;
    #pragma endscop
}
