/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 + 1] = ((7168 ^ (arr_2 [i_0 + 1])));
        var_18 = (min(var_18, ((((arr_2 [i_0]) ? ((var_8 ? (arr_1 [i_0] [i_0]) : (var_10 >= var_4))) : (((arr_0 [i_0] [i_0 - 2]) * (arr_0 [11] [i_0 + 1]))))))));
        arr_4 [i_0 - 2] = (~var_10);
    }
    var_19 = (min(var_19, ((min(var_7, (!var_11))))));
    #pragma endscop
}
