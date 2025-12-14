/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, 89));
        var_17 = var_14;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(var_18, ((((-286754002 % (((arr_4 [i_1]) ? -286754018 : -286754018))))))));
        var_19 = (max(var_19, (arr_3 [i_1])));
    }
    var_20 &= var_2;
    #pragma endscop
}
