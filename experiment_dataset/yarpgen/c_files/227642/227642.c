/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-291513514402056894 & (~7915950342409726989)));
    var_18 |= ((((min(291513514402056914, var_2)) + (min(var_2, 704456177365913874)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 = (!-291513514402056915);
        var_20 = (min(var_20, 114));
        var_21 = ((-(min(((max(-32739, 1))), 2286908056))));
        arr_2 [i_0] [i_0] &= ((((max(-7191968258507955178, 3))) ^ (((((max(var_16, 9223372036854775792)) > (max(291513514402056930, var_16))))))));
    }
    #pragma endscop
}
