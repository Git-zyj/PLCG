/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 | ((max((var_5 && var_1), -var_10)))));
    var_13 = ((var_0 ? (((min(var_8, (min(96, var_7)))))) : ((((max(2183134446, var_4))) ? var_4 : var_5))));
    var_14 = 28;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 ^= ((+((+(((arr_1 [i_0]) + (arr_0 [i_0])))))));
        var_16 += (max((max((arr_1 [i_0]), 162)), (((134217727 ? -27628 : 9150212860311789131)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 &= (((max((2548086521668441133 | 255), (max(8, 14001560631066987095)))) == ((max(((max(var_7, var_9))), (~var_11))))));
        var_18 += (arr_2 [i_1] [i_1]);
    }
    #pragma endscop
}
