/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((((arr_0 [i_0] [i_0]) || var_17)))));
        var_20 = ((var_7 & (arr_2 [i_0 - 1])));
        arr_4 [i_0] = (((arr_0 [i_0 + 3] [0]) | (arr_2 [3])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [0] [17] &= ((!(((var_16 % (arr_1 [11]))))));
            var_21 *= ((-(arr_5 [i_0 - 1] [i_0 - 2] [i_0 + 3])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
            var_22 += ((arr_0 [i_0 + 1] [i_0]) >> (((arr_0 [i_0 - 2] [i_0]) - 16593140035732776417)));
        }
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_23 = (max(var_23, ((max(((~(max((arr_15 [i_3]), var_9)))), (arr_14 [18]))))));
        arr_16 [i_3] [i_3] = (max((~var_15), (!19218)));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_24 = (min(-var_14, (arr_14 [20])));
        var_25 = ((~(((~(arr_6 [i_4 + 2]))))));
        var_26 = (~var_13);
        arr_20 [i_4] = ((max((arr_9 [i_4] [i_4 + 1]), (arr_9 [i_4] [i_4 - 1]))));
    }
    var_27 = (min(var_27, (var_4 && var_16)));
    #pragma endscop
}
