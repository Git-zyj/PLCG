/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((14340170664253577256 ? 1 : ((-((11 ? var_7 : var_6))))));
    var_21 = ((((!var_2) | (var_10 <= -1052662434))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (+(((var_0 != var_18) ? (arr_1 [i_0] [i_0]) : (min((arr_1 [i_0] [i_0]), 58163)))));
        arr_4 [i_0] = ((-(-55 >= 8192)));
    }
    #pragma endscop
}
