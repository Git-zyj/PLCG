/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 ^= ((!var_10) ? ((((min(var_1, var_0)) >= (min((arr_0 [i_0] [i_0]), var_8))))) : (((min(15112417650297794386, var_12)))));
        var_15 = (max(var_15, var_6));
        var_16 = min(((max(var_5, var_5))), (min(17391305066277857019, 18967)));
    }
    var_17 = var_10;
    var_18 = (min(((((min(18446744073709551615, var_5))) ? var_5 : (!945684824))), var_4));
    #pragma endscop
}
