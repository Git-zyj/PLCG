/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((((var_0 ? (min((arr_0 [i_0]), (arr_3 [i_0]))) : ((var_3 ? 694504144949812012 : 150901375339995578))))) ? (((max((max((arr_2 [i_0] [i_0]), (arr_0 [i_0]))), (arr_2 [i_0] [i_0]))))) : (((((var_9 >> (var_0 + 5716729853616098801)))) ? var_9 : (min((arr_3 [i_0]), var_9))))));
        var_12 += ((~((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_9))) ^ (max(var_1, var_2))))));
    }
    var_13 = (max(var_13, (~4)));
    var_14 ^= var_1;
    #pragma endscop
}
