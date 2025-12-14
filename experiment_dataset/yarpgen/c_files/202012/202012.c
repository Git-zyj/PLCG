/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [14] = min((max((arr_0 [5]), (max(var_1, var_0)))), (arr_3 [i_0]));
        arr_5 [0] [i_0] = (arr_3 [9]);
        arr_6 [i_0] &= var_0;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_10 [i_1] = (arr_8 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_17 &= ((((min(2147467264, 562915593682944))) ? (max((min((arr_16 [i_1] [i_2] [i_3] [0]), (arr_7 [i_1]))), var_8)) : (arr_14 [i_1] [i_1] [i_1] [i_1])));
                        var_18 = (max(var_14, ((min(((max((arr_15 [i_4] [i_4] [i_4]), (arr_9 [i_4])))), (max((arr_13 [i_1] [i_1]), (arr_13 [9] [9]))))))));
                        arr_19 [i_1] [i_1] [i_3] [10] = (min(((((max((arr_13 [i_1] [i_4]), (arr_17 [i_4] [i_3] [i_1] [i_1])))) ? (min(var_12, (arr_16 [i_1] [i_1] [i_1] [1]))) : ((max(var_8, (arr_13 [3] [i_4])))))), (arr_11 [i_1] [i_1] [0])));
                        arr_20 [i_1] [i_3] [i_1] [i_1] = arr_12 [19] [i_1] [i_1];
                        var_19 = (max(((min((arr_17 [i_1] [i_2] [i_1] [i_4]), (arr_18 [i_3] [i_3] [i_3] [i_3])))), (min((arr_12 [i_4] [i_1] [i_1]), var_2))));
                    }
                }
            }
        }
        arr_21 [i_1] = (max((max(((max((arr_9 [8]), var_7))), (max((arr_8 [i_1]), (arr_16 [i_1] [i_1] [12] [i_1]))))), ((min(var_2, (max((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_1]))))))));
        arr_22 [i_1] [i_1] = var_6;
        var_20 = (min(var_20, ((min(var_2, (min((arr_14 [i_1] [i_1] [7] [12]), (max(var_5, var_8)))))))));
    }
    var_21 = (max(var_21, var_11));
    #pragma endscop
}
