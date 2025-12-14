/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(((max(var_3, 4))), (min((~var_10), var_0))));
        var_12 = (max(var_12, 18446744073709551607));
        var_13 += (min((var_8 > 18446744073709551611), ((-(arr_2 [i_0 + 4])))));
        var_14 = (min(var_14, (arr_1 [23])));
    }
    var_15 = var_1;
    #pragma endscop
}
