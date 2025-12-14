/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_13 ? var_2 : (arr_1 [i_0 - 1])));
        var_17 = (arr_0 [i_0 + 3] [i_0 + 2]);
        var_18 = 8378;
        var_19 = var_12;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((-(~var_6))));
        var_20 = ((((min((var_12 >= 17), ((var_15 ? var_1 : var_14))))) ? (~var_6) : -1444182257));
        var_21 = (arr_1 [i_1]);
        var_22 = ((((~(((arr_0 [i_1] [i_1 + 3]) ? -1450200500955621747 : var_7)))) < (!var_14)));
    }
    var_23 = ((-1 ? (((1 && 1) / -9007011800987783373)) : (0 ^ 9007011800987783373)));
    #pragma endscop
}
