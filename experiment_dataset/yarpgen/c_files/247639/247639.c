/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (var_3 ? (~4) : 1);
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((4258860303 ? ((-9223372036854775807 ? 0 : 0)) : 4));
        var_12 += (arr_7 [0]);
    }
    var_13 = var_1;
    #pragma endscop
}
