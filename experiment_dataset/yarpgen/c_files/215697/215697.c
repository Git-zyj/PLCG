/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (((-7318 * var_0) | var_7));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = min((((arr_0 [0]) ? (((-32767 - 1) ? 32750 : 31285)) : ((max((arr_1 [i_0]), var_4))))), (max(((max((arr_3 [19] [i_0 - 1]), (arr_3 [i_0] [i_0])))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        var_18 = (max(var_18, (((7319 ? 21367 : -22622)))));
        var_19 = ((((min(var_8, (arr_0 [i_0 - 1])))) ? (max(1048575, 32760)) : -var_3));
    }
    #pragma endscop
}
