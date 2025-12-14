/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [3] = 5002692085468844222;
        var_19 = ((~(arr_1 [i_0])));
        var_20 = arr_1 [i_0];
        var_21 = (~((5677381695505297881 ? (arr_2 [i_0]) : 13444051988240707410)));
    }
    var_22 = (min(var_13, (var_8 && var_9)));
    var_23 = (min(var_23, var_9));
    #pragma endscop
}
