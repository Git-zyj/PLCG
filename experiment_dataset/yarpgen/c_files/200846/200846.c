/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((1 & 1) ? var_2 : var_9))) ? ((((max(var_6, var_2))) ? ((var_1 ? var_9 : 71)) : var_7)) : (~1)));
    var_11 *= ((-(min(var_4, ((1 ? 136 : 211))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((((((min(1, (arr_2 [i_0] [i_0])))) > 1))) + ((-(arr_1 [i_0])))));
        var_13 = ((((((((var_0 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))) ? (((arr_2 [i_0] [i_0]) << 1)) : (((arr_1 [i_0]) | (arr_0 [i_0])))))) ? ((min(1, (min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))))) : ((min((!1), 125)))));
        var_14 *= (1 == 1);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((((arr_4 [i_1]) ? (arr_1 [i_1]) : (arr_0 [i_1]))) % (arr_4 [i_1])))) ? ((min((arr_1 [i_1]), (arr_1 [i_1])))) : (arr_1 [i_1])));
        var_15 = ((~((((arr_4 [i_1]) && 1)))));
        arr_6 [i_1] = max((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))), (min((arr_3 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = 1;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_17 &= (((arr_11 [i_2] [i_3]) ? ((min((arr_3 [i_3] [i_3]), ((1 == (arr_0 [i_2])))))) : ((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))))));
            var_18 = (((~0) ? -1 : 1));
        }
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        var_19 = ((0 | (max((~var_4), ((141 ? 1 : 76))))));
        var_20 &= ((((((max(19, 1))) >= (arr_9 [i_4 + 2]))) ? (min((arr_3 [i_4] [i_4]), 13)) : (arr_0 [i_4 - 1])));
    }
    #pragma endscop
}
