/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = 30036;
            var_17 = (max(var_17, 5));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_18 = (63 <= 1);
            var_19 = (arr_4 [i_0] [i_2 + 2] [i_2]);
            var_20 = (((~var_0) ? (arr_4 [i_2] [i_2 + 3] [i_0]) : (((var_14 ? 216851258 : (arr_9 [i_0] [i_0]))))));
            var_21 = (((arr_0 [i_2 + 2] [i_2]) ? ((-4741692488495683529 ? var_0 : var_11)) : var_0));
            arr_10 [i_0] [11] = ((1 ? (((1 ? 1 : 127))) : ((var_13 ? 1 : 4679231806322313147))));
        }
        var_22 += (((!var_0) * (((arr_2 [1] [i_0]) * (arr_2 [i_0] [i_0])))));
    }
    var_23 = var_5;
    #pragma endscop
}
