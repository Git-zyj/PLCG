/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_4 | var_8);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, ((((!6289389482001980705) * -var_2)))));
        var_18 = ((var_6 ^ var_5) & (((arr_0 [i_0 - 1]) ? -6289389482001980705 : var_8)));
        arr_2 [i_0] = (var_14 - 15015832272413700518);
    }
    var_19 = var_3;
    #pragma endscop
}
