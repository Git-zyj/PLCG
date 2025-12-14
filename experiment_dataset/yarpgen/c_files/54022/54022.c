/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = var_3;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 1280467811;
        var_21 = ((((((arr_0 [i_0]) * ((((arr_1 [i_0 - 2] [i_0 - 2]) || -32760)))))) ? ((var_8 * ((((((arr_0 [i_0]) + 2147483647)) >> (var_6 + 126)))))) : ((max(((max(32757, -32756))), (arr_0 [i_0]))))));
        var_22 = (min(((((min((arr_1 [i_0 - 1] [i_0]), var_4)) == (((!(arr_1 [1] [i_0]))))))), (arr_0 [i_0])));
        var_23 = 2147483647;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_24 ^= (min((min(var_17, ((max(var_2, (arr_3 [i_1])))))), ((max(((min((arr_3 [i_1 - 1]), 2099748100))), var_8)))));
        arr_6 [i_1] = (arr_5 [0]);
    }
    #pragma endscop
}
