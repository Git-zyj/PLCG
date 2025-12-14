/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((max(var_0, (arr_0 [i_0 - 2]))) | (((~(arr_2 [i_0]))))));
        var_15 = 511;
    }
    var_16 &= (max(((max((~var_11), var_4))), (max(var_11, (var_9 ^ 16975083697967991384)))));
    #pragma endscop
}
