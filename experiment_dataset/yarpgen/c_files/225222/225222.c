/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = var_14;
    var_20 = (max(var_20, ((min(var_5, ((-var_1 ? ((207 ? var_5 : 288230376150663168)) : (((var_12 ? -2690190914907412765 : var_15))))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 ^= var_7;
        arr_2 [i_0] = (((min(var_6, ((49 ? 0 : 117)))) <= var_15));
        var_22 = var_0;
        arr_3 [i_0] = (max((((!(arr_1 [i_0])))), (arr_0 [i_0])));
        var_23 -= (arr_0 [11]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_24 -= (((((arr_6 [i_1 - 1]) ^ 1)) >= ((((max(-1287376291, (arr_6 [2])))) ? (min(-28303, -2045405489)) : ((min(var_13, var_6)))))));
        var_25 = (min(var_25, (((1 == (((arr_6 [i_1 - 1]) ^ (arr_4 [i_1] [i_1 + 2]))))))));
        var_26 = (min(var_26, (((var_4 && ((!(arr_4 [i_1 + 1] [i_1 + 1]))))))));
    }
    #pragma endscop
}
