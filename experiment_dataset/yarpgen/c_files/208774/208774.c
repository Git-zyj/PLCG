/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~var_0) ? var_5 : (var_7 || var_8)))) ? ((8188 ? 39719 : 13377)) : var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [19] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((((!(arr_3 [i_0] [i_0])))));
        var_13 = ((((((arr_2 [i_0]) ? (!var_2) : (((arr_2 [18]) << (var_8 - 7246918928997100313)))))) ? ((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : ((~(arr_3 [i_0] [i_0])))))) : (((~var_9) * (!2052349634098439868)))));
        var_14 = (((((arr_1 [i_0] [i_0]) ? -var_5 : (((arr_0 [i_0] [i_0]) ? (arr_1 [3] [3]) : (arr_1 [i_0] [i_0]))))) & var_0));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 ^= ((var_6 << (((((arr_6 [i_1]) * (arr_8 [i_1] [i_1]))) - 16300761563555375123))));
        arr_10 [i_1] = ((((((arr_9 [i_1]) / (arr_9 [i_1])))) ? (arr_9 [i_1]) : (min((max((arr_7 [i_1] [i_1]), (arr_8 [i_1] [i_1]))), (((arr_7 [17] [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))))));
        var_16 = (arr_7 [i_1] [i_1]);
        arr_11 [i_1] [i_1] = ((~(((((var_2 / (arr_7 [i_1] [i_1])))) ? var_6 : ((((arr_8 [i_1] [i_1]) > (arr_7 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
