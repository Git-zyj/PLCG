/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(~var_14)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, 6780228928023925035));
        var_17 *= (((!137) ? ((max((arr_3 [i_0]), (arr_3 [i_0])))) : 0));
        var_18 = (min(var_18, (arr_3 [i_0])));
    }
    var_19 = var_10;
    var_20 = var_7;
    var_21 = (((~(max(var_3, var_1)))));
    #pragma endscop
}
