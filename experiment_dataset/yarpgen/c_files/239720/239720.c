/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_0 - (((-((max(1, var_1)))))));
    var_14 = -56;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (7676398035839547775 ? (((2072913492 / (arr_0 [i_0])))) : (min(0, (max(var_6, var_4)))));
        var_15 -= ((!((((arr_0 [14]) * (-3 / 161))))));
    }
    var_16 = ((((((32767 >= var_5) ^ 68))) ? (((((-58 ? var_5 : var_3))) ? (7261182837221239631 + var_2) : ((2191562635041687457 ? 2222053818 : -47379096019804228)))) : (!-3791129501132053875)));
    #pragma endscop
}
