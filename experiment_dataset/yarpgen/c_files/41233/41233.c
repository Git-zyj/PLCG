/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((~((max((arr_2 [i_0] [i_0]), (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 = (((~var_18) >> (var_9 + 4512277590876691286)));
            var_21 += (((arr_1 [i_1]) ? ((12710 ? var_13 : 52830)) : 52825));
            var_22 &= ((var_1 || ((((arr_2 [4] [i_0]) ? (arr_1 [21]) : var_6)))));
        }
        arr_6 [i_0] = (arr_4 [11]);
    }
    var_23 = var_14;
    var_24 = var_7;
    var_25 = (((var_15 ? (!var_14) : (~var_13))));
    #pragma endscop
}
