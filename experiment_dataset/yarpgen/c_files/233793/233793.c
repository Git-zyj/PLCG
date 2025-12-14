/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 &= var_17;
    var_20 = (max(var_20, 1533096885));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+(((2761870391 == var_13) ? (min(var_6, var_6)) : 1))));
        arr_4 [i_0 + 1] &= (((((~((var_11 ? 400640200 : var_13))))) ? ((((!11) <= (arr_2 [i_0 + 1])))) : ((min((arr_2 [i_0 + 1]), -115)))));
        var_21 = (min(var_21, var_5));
    }
    var_22 = (35528 - ((-((max(122, 1))))));
    #pragma endscop
}
