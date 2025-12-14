/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_0 ? ((((~var_13) ? var_9 : 20))) : (min((13951274589275414024 > var_4), var_7)))))));
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0])));
        arr_3 [2] |= (((max(var_8, var_13)) * (var_0 || var_10)));
        var_19 = ((!(arr_2 [i_0] [i_0])));
        var_20 = (min(var_20, (!6656567695970132465)));
        arr_4 [i_0] = (((var_0 < (var_2 >> 0))) ? ((((1 != (arr_1 [1] [i_0]))) ? (1 <= 1) : (min(var_7, var_14)))) : 13130);
    }
    var_21 = ((((min(var_10, var_2))) || (((((max(var_0, var_4))) ? var_13 : var_5)))));
    #pragma endscop
}
