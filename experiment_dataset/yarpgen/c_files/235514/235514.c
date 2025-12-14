/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_3, 11846251808948646532)))) * (!var_10)));
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 = (((0 / 9223372036854775807) / (((-(arr_2 [i_0]))))));
    }
    #pragma endscop
}
