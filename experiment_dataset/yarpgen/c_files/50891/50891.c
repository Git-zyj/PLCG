/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_4;
        arr_2 [i_0] = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), -10));
        var_13 = (max(var_13, (((((var_3 || (var_2 && 47119))) ? (6512340852981276507 && -953554154095643665) : (min(((((arr_1 [12]) && var_3))), (min(var_6, 977257817)))))))));
    }
    var_14 ^= var_9;
    var_15 = (max(((-((-628651864 ? 3558 : 77)))), ((((((var_0 ? -92 : var_3))) > (min(var_7, var_0)))))));
    #pragma endscop
}
