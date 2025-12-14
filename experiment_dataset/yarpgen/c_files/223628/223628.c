/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 115784783;
    var_19 &= max((((min(var_11, 0)) ^ (((1 ? 1 : -1))))), var_16);
    var_20 = ((min((var_1 ^ var_3), var_1)) ^ ((((!(!var_15))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_21 = (min(var_21, ((((var_8 / (min(var_12, (arr_1 [i_0] [i_0])))))))));
        var_22 ^= (var_17 || var_16);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 = ((((-(arr_4 [i_1]))) & var_10));
        var_24 = ((((max(var_13, -1))) ^ ((((arr_3 [i_1] [i_1 - 1]) >= (((arr_3 [i_1] [i_1]) % (arr_4 [i_1]))))))));
    }
    #pragma endscop
}
