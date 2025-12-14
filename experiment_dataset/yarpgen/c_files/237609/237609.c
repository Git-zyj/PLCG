/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_4;
    var_19 = var_0;

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_20 = (~56);
        var_21 = (max(var_21, (arr_1 [i_0 + 2])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 - 2]);
        var_22 = var_16;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 -= ((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 = ((5 + (arr_6 [i_1] [i_2] [i_2])));
            arr_8 [i_1] [i_2] |= (arr_7 [i_1] [i_2]);
        }
        arr_9 [i_1] = (((arr_6 [i_1] [i_1] [i_1]) ? (((arr_6 [i_1] [9] [i_1]) ? 5 : (arr_5 [i_1] [i_1]))) : -var_0));
        var_25 |= 65531;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = (arr_11 [i_3] [i_3]);
        arr_14 [i_3] = (arr_7 [4] [i_3]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_26 = (((65524 - (arr_10 [i_4] [i_4]))));
        var_27 = (max(var_27, ((min(var_5, 2)))));
    }
    #pragma endscop
}
