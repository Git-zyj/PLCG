/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((var_10 + 130) ? 66 : ((min(32748, (!var_5))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [9] [9] = (((((~var_0) ? (((arr_2 [i_0]) / var_3)) : ((8508072061632892314 ? (arr_2 [i_0]) : var_6)))) * (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = (((((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 2]))) | (((((3665787336 ? 93896878937484269 : var_3))) ? (max((arr_0 [i_0 + 1]), (arr_1 [i_0]))) : ((193 ? (arr_2 [i_0]) : (arr_1 [i_0])))))));
        var_12 = (((((51 && 1) ? (max((arr_2 [i_0]), 1)) : (0 / var_2))) << (((!(((0 ? (arr_0 [i_0]) : -120))))))));
        var_13 = 1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_14 ^= (((arr_8 [i_1 + 1] [i_1]) + (arr_7 [i_1 + 2])));
        var_15 = (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 + 2]) : 1));
    }
    var_16 = 12422;
    #pragma endscop
}
