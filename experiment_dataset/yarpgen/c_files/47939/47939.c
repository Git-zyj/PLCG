/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((max(var_8, var_9))) + (min(var_5, (0 - var_5)))));
    var_15 = 442486259;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 *= (((((((min((arr_0 [i_0]), (arr_1 [i_0])))) - (arr_0 [i_0])))) ? 25 : 118));
        arr_2 [i_0] |= arr_1 [i_0];
    }
    var_17 = -var_2;
    #pragma endscop
}
