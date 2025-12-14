/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (~var_2);
        var_13 = (min(var_13, (((!((((arr_0 [i_0 + 3] [i_0]) ? var_1 : (arr_1 [i_0])))))))));
        var_14 = (max(var_14, (arr_1 [i_0 + 2])));
    }
    var_15 = (max(((((max(var_3, var_9))) ? ((var_8 ? var_5 : 8167855104959514421)) : var_4)), (((~(((var_9 + 2147483647) << (((var_9 + 1826255694) - 13)))))))));
    #pragma endscop
}
