/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_15 = (((max(3, (arr_0 [i_0 - 3]))) << (((max((max((arr_0 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0 + 1]))) - 8153177409938993385))));
        var_16 = -64;
        arr_2 [i_0] [i_0 - 1] = (~-1770471090);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_17 = (((arr_1 [i_1 + 1]) < ((min((arr_5 [i_1 + 1]), (arr_0 [i_1]))))));
        var_18 = 3477;
        var_19 = 0;
    }
    var_20 = ((~(min(var_12, (min(0, 80))))));
    var_21 = (((1770471090 > var_2) ? -var_11 : (min(6336203460915880627, -32752))));
    var_22 |= var_14;
    #pragma endscop
}
