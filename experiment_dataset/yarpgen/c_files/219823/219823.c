/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((8 ? (var_9 >= var_1) : -23818)), var_1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_0 [i_0]) ? var_8 : -41722)))));
        var_12 = (((((max((arr_1 [i_0]), var_5)) % var_5)) >= (arr_0 [i_0])));
    }
    #pragma endscop
}
