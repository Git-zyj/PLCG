/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? ((((var_18 % var_5) << (var_11 - 8376)))) : ((-(max(var_16, var_9))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= max(-var_17, ((((max(541801691, var_17))) ? (((~(arr_1 [18] [18])))) : (((arr_1 [3] [i_0 + 2]) ? var_15 : var_1)))));
        arr_3 [i_0 + 3] |= ((min((!1), (arr_1 [i_0 + 1] [i_0]))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 3] = (((((max((!1), 0)))) >= var_1));

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_9 [11] = var_16;
            arr_10 [i_1 + 3] |= (((((max((arr_4 [i_1] [i_1]), (arr_4 [i_1 + 1] [3]))))) >= (3495637697 >= var_18)));
        }
        var_20 = min(((~(var_15 & var_16))), -var_0);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [14] &= (min((max((arr_13 [1]), 63)), var_3));
        var_21 = (max(var_21, (arr_11 [18])));
        arr_15 [4] [4] |= (((min(var_9, var_8)) == (min((arr_13 [24]), ((1 - (arr_12 [6])))))));
    }

    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] = ((!((min(((var_17 ? (arr_12 [12]) : var_6)), (min(var_9, -552416411)))))));
        arr_19 [i_4] &= ((var_2 << (var_3 - 9304189648711179612)));
        arr_20 [i_4 - 1] [i_4] &= (~var_1);
    }
    #pragma endscop
}
