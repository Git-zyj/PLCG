/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max((((129 > (arr_1 [i_0])))), ((9244 ? 150 : (arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = ((((((((arr_0 [i_0]) != -112)) ? ((-26769 ? (arr_2 [2]) : (arr_1 [i_0]))) : (arr_0 [i_0])))) ? (min((arr_1 [i_0]), 79)) : -11950));
    }
    var_12 = var_6;
    var_13 = ((169 ? 90 : 177));
    var_14 = ((-128 & ((max((4304 >= var_3), (!925929182053646860))))));
    var_15 = ((max(var_1, -2607581424895508271)));
    #pragma endscop
}
