/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((min(var_2, 872906873)) > (min(13213, var_0)))))) > var_8));
    var_12 = ((4294967295 != (!var_3)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        var_13 = 1;
    }
    var_14 = var_9;
    #pragma endscop
}
