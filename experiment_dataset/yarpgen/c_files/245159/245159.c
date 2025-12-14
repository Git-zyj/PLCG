/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 5575227252307798835;
        arr_4 [i_0] = (!var_4);
        var_16 = 5575227252307798861;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = var_5;
        var_17 *= (!(arr_7 [i_1]));
        arr_9 [7] = 5575227252307798835;
    }
    var_18 = var_5;
    var_19 = (min(var_19, var_11));
    #pragma endscop
}
