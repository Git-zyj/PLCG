/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(3393515280498939063, (arr_2 [i_0] [i_0])));
        var_12 = (min((((var_3 ? (arr_1 [12]) : 1))), (min(-15672, -3393515280498939080))));
        var_13 = var_1;
    }
    var_14 = (min(var_14, ((((((((var_1 ? var_4 : 11))) ? (!8) : -3393515280498939097)) >> (((min(var_7, -3393515280498939064)) + 3393515280498939110)))))));
    #pragma endscop
}
