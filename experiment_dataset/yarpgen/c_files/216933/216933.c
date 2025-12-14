/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [7] [i_0] = ((!(((var_6 ? -var_5 : (min(var_14, (arr_1 [i_0]))))))));
        arr_4 [i_0] = var_4;
    }
    var_16 = (max(var_8, ((1148480504 >> (562949953421312 - 562949953421305)))));
    var_17 = (min(var_7, var_0));
    var_18 = (min(var_18, var_10));
    var_19 = ((var_14 != (min(((max(var_1, 238))), 123225941))));
    #pragma endscop
}
