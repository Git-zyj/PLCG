/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2490995654473593869;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max((arr_0 [i_0]), (((arr_1 [i_0]) - (arr_1 [i_0])))));
        var_12 *= (arr_0 [12]);
        var_13 = (max((~22), 2490995654473593869));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(var_14, (((-(((arr_2 [i_1] [i_1]) % 94)))))));
        var_15 = (arr_2 [12] [i_1]);
        arr_6 [i_1] = (arr_3 [i_1]);
    }
    #pragma endscop
}
