/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_3;
    var_13 = (max(var_13, var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 -= (arr_2 [i_0]);
        arr_4 [1] [i_0] = ((var_6 ? ((((max(-1855911875, 1))) ? var_6 : ((var_0 | (arr_3 [i_0] [1]))))) : ((((29182 | 15554) >> (((arr_1 [i_0]) - 50992)))))));
        var_15 = var_6;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (arr_3 [i_1] [i_1]);

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = (arr_0 [i_2 + 2] [i_1]);
            var_17 = (min((~var_8), -1770272774117337754));
            arr_11 [i_1] [i_2 + 2] = (((arr_5 [i_2 + 2] [i_2 - 1]) != 1));
            var_18 = (arr_0 [i_1] [i_1]);
            var_19 = (min(var_19, (((1 ^ (((arr_6 [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2 + 2] [i_2 + 1]) : (arr_6 [i_2 + 1] [i_2 + 2]))))))));
        }
    }
    #pragma endscop
}
