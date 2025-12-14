/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((arr_0 [i_0]), (~-18494)));
        arr_3 [i_0] = (((((((33 ? 254 : 1)) & 26478))) ? ((max(1, -200613875))) : (max(var_9, (!0)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = (241 & 1);
        var_14 = (max(var_14, 67076096));
    }
    var_15 = var_0;

    /* vectorizable */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_16 = 245;
        var_17 = (((((var_12 ? 18446744073642475520 : -846016009))) ? (((-200613887 && (arr_7 [i_2])))) : 26289));
        arr_8 [i_2] [i_2] = (!(arr_6 [i_2 - 1]));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_18 = (+(max((arr_6 [i_3 + 2]), (arr_6 [i_3 + 2]))));
        var_19 = min((min(1, ((227 ? (arr_9 [15]) : 1)))), (arr_1 [i_3]));
    }
    #pragma endscop
}
