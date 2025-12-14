/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (~var_9);
    var_18 = ((((((var_5 | var_8) & (9073126194125903036 == -669787334)))) ? ((249547258 ? 1 : (var_6 / 1))) : ((max(-669787334, ((13783 ? 1 : 669787334)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((min(((8572010462952746955 * (arr_1 [i_0]))), (var_12 <= 1))));
        var_19 |= (8572010462952746955 != ((((var_8 == 128) >= -7422739240102701174))));
        arr_5 [i_0] [i_0] = (!var_2);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_20 = var_16;
        var_21 -= (arr_7 [i_1]);
    }
    #pragma endscop
}
