/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((min(var_4, (arr_1 [i_0 - 1] [i_0 + 1])))) ? (min(((var_4 ? 250 : (arr_0 [i_0 + 1]))), var_10)) : (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0]) : (arr_0 [i_0 + 1])))));
        var_16 = ((((((arr_2 [i_0 + 1] [i_0 - 1]) ? var_0 : (arr_3 [i_0 - 1] [i_0 + 1])))) ? (((arr_2 [i_0 + 1] [i_0 - 1]) ? var_0 : (arr_2 [i_0 + 1] [i_0]))) : ((((!(arr_2 [i_0 + 1] [i_0 - 1])))))));
    }
    var_17 = var_1;
    var_18 = -6685392490554882839;
    var_19 = var_4;
    #pragma endscop
}
