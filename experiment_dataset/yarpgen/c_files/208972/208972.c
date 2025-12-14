/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(!var_8)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_13 = var_0;
        var_14 = var_0;
        var_15 = (((((arr_2 [i_0] [i_0]) ? (~33399) : ((max(15, -1992))))) - (min(((var_11 ? var_2 : (arr_1 [i_0 - 3]))), (arr_2 [i_0] [i_0])))));
    }
    var_16 = var_7;
    #pragma endscop
}
