/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [9] = (arr_0 [i_0] [i_0]);
        var_19 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((~((((arr_1 [i_0]) == (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        arr_5 [2] = (((arr_0 [i_0] [1]) == (arr_1 [5])));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 -= (((((!(arr_7 [i_1])))) != ((~(arr_1 [i_1 + 3])))));
        var_21 = (((arr_7 [i_1 + 1]) / ((min((-32767 - 1), -32761)))));
        arr_8 [i_1] = (min((max(64575, (((arr_1 [i_1 + 1]) - 64558)))), ((2830483035 ? (((arr_6 [i_1] [3]) / (arr_6 [i_1] [i_1]))) : ((((arr_1 [i_1 - 2]) && (arr_6 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 = (max(var_22, ((((arr_10 [i_2] [i_2]) ? ((((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))) ? ((min((arr_11 [i_2] [i_2]), (arr_11 [15] [i_2])))) : (arr_10 [i_2] [i_2]))) : (((((-(arr_11 [1] [1])))) ? (!2830483035) : ((1464484250 ? 1 : (-127 - 1))))))))));
        var_23 = (((((~(~-32767)))) ? (min((~255), (min((arr_11 [i_2] [16]), 3858270629840845683)))) : (((((4288391231535208819 ? 64561 : -97)) & (~61))))));
    }
    var_24 = (max(var_24, (((((((((var_16 ? 32745 : 7))) ? (min(-4288391231535208816, var_11)) : -var_15))) ? (min(((0 ? var_6 : var_15)), var_8)) : (!var_13))))));
    var_25 = var_13;
    var_26 = (min(var_26, -4288391231535208819));
    #pragma endscop
}
