/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_17 = (+(((arr_0 [i_0 - 1]) ? var_4 : (arr_0 [i_0 + 4]))));
        var_18 += (((((!(arr_0 [i_0 - 2])))) <= (53450 || -9223372036854775795)));
        var_19 = ((!(((var_12 ? -0 : (((min(var_4, 33113)))))))));
        arr_2 [i_0] = (max((((((var_15 ? 56 : 5749546628268792084))) ? (max(var_4, (arr_0 [i_0]))) : (((33118 % (arr_1 [19])))))), ((max((var_5 - 3882698325), (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [7] = ((-((-(((((arr_0 [i_1]) + 9223372036854775807)) >> var_13))))));
        arr_6 [i_1] = var_4;
    }
    var_20 = ((21731 ? 1 : (min(((767744023 ? 412268966 : var_3)), (!var_15)))));
    #pragma endscop
}
