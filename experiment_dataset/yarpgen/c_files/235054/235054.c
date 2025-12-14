/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 61004;
        var_19 = ((!((min((arr_0 [i_0] [i_0]), -28509)))));
        var_20 = (((arr_0 [i_0] [i_0]) ? (1 < 250) : (((arr_0 [i_0] [i_0]) ? var_12 : (!0)))));
        arr_4 [0] [i_0] = (var_9 ? (((7316141539969548059 && (((~(arr_1 [i_0]))))))) : 43842);
    }
    var_21 = 549293730;
    #pragma endscop
}
