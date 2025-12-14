/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_2;
    var_19 *= (((((((1 ? var_14 : var_6)) || (((11149 ? var_15 : var_5))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : 0))) ? (min(-5821749373488110659, (arr_1 [i_0 + 2]))) : (((-(arr_1 [i_0 + 2]))))));
        arr_4 [4] &= ((~(((arr_1 [i_0 - 1]) ? var_2 : (arr_1 [i_0 - 2])))));
        arr_5 [i_0] = (((arr_1 [i_0 + 1]) ? (((arr_0 [i_0]) ? 2951519708 : ((((arr_0 [i_0]) / (arr_1 [i_0 - 2])))))) : (((arr_1 [i_0 + 1]) ? (max((arr_1 [i_0]), var_12)) : (((max((arr_1 [i_0]), var_4))))))));
        var_20 = (max(255, 22));
    }
    #pragma endscop
}
