/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2149765721;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 = (max((arr_2 [i_0 - 1]), 7466));
        arr_3 [11] [4] = (((((arr_2 [i_0 - 1]) < (arr_1 [i_0 - 1]))) ? ((min((((arr_2 [i_0 + 1]) ? 50259 : var_4)), (arr_0 [i_0])))) : (arr_1 [i_0])));
    }
    var_17 = (min(var_17, (((((max(-28751, -6449752885724383226)) < var_6))))));
    #pragma endscop
}
