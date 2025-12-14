/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(65520, ((min(633894274, var_2)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    var_16 = (((((((var_6 ? 633894274 : var_3))))) < var_0));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] [i_1] = ((1246903368 << ((((((arr_3 [i_1] [i_1]) || 3661073021))) * (!var_3)))));
        arr_7 [i_1] = ((var_4 ^ (((var_2 << (-79 + 108))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [3] = var_6;
            arr_13 [i_1] = (((arr_3 [i_1] [i_2]) ? 633894274 : var_12));
            var_17 = var_2;
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            arr_16 [12] [i_3 - 1] [i_3] = ((max(((max(27566, var_2))), (~9852754478150049916))));
            arr_17 [i_1] [i_3] = ((((arr_3 [i_1] [i_3 - 2]) + (arr_3 [i_3] [i_3 + 1]))));
            arr_18 [i_3] = var_12;
            arr_19 [i_1] [i_1] [i_1] = (min((((arr_10 [i_3 - 2]) ? (((arr_3 [i_1] [i_3 - 1]) * var_13)) : var_7)), (arr_4 [i_1])));
            var_18 = (((31 >= var_13) + ((((((((arr_4 [i_1]) ? var_1 : (arr_4 [i_3]))) + 2147483647)) >> (((max((arr_10 [i_1]), var_0)) - 581138574)))))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_19 = (((arr_21 [i_4 + 1] [i_4]) ? var_12 : (((var_12 | var_7) ? var_10 : var_3))));
            var_20 = (arr_21 [i_1] [i_4]);
            arr_22 [i_4] = (arr_10 [i_4]);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_27 [i_5] [i_5] = (arr_25 [16]);
        arr_28 [i_5] [18] = var_9;
        arr_29 [i_5] [i_5] = var_6;
    }
    #pragma endscop
}
