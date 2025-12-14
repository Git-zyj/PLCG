/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [1]) : (arr_2 [i_1] [i_0])))) ? ((((!(arr_2 [i_0] [i_1]))))) : (min((min(1, var_6)), var_9))));
                arr_4 [i_0] [i_0] = ((((!(arr_3 [i_0] [i_1] [i_1]))) ? var_1 : 1));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (min((((-310342255 ? 1959240020 : var_11))), var_4));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 *= (arr_1 [i_2]);
                        var_16 = (((arr_9 [i_0] [i_1] [i_0] [i_1]) ? 1 : 34264));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 += ((1 ? ((((arr_9 [i_2] [i_1] [i_2] [i_4]) ? 1959240034 : 29075))) : (max(var_13, ((-(arr_3 [i_0] [i_2] [i_2])))))));
                        arr_14 [i_0] [i_0] = (arr_6 [1] [i_1] [i_2]);
                        var_18 *= (((max((max((arr_1 [i_1]), 1)), (arr_0 [i_2] [i_2])))) & (min((~-89), var_8)));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [9] [i_0] [i_5] [i_5] [11] = (min((arr_2 [i_0] [i_1]), 10804099670762547563));
                        var_19 = (min(var_19, ((min(1, (min((arr_16 [i_0]), (arr_0 [i_2] [i_2]))))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_20 = (arr_9 [i_0] [i_1] [i_2] [i_6]);
                        var_21 = (min(var_21, ((min((((arr_0 [i_1] [i_2]) ^ (min(6500324310626362687, 40)))), (((22359 ? 1279 : 22356))))))));
                        var_22 = (min(var_22, ((((arr_9 [i_2] [10] [8] [i_6]) / (max((arr_0 [i_0] [i_2]), (arr_0 [i_0] [i_2]))))))));
                    }
                    var_23 = (max(var_23, ((((((((min(var_3, var_10))) ? (arr_13 [i_0] [i_0] [i_0] [i_1]) : var_1))) ? ((max((arr_6 [5] [i_1] [0]), (arr_16 [4])))) : (((arr_19 [i_2] [i_1] [i_2] [i_2]) ? var_12 : (arr_5 [i_2] [i_1] [i_1] [i_1]))))))));
                    arr_20 [i_0] [3] [i_1] [i_0] = 1959240043;
                    var_24 = (min(var_24, (((((arr_3 [i_0] [10] [7]) + 1)) > (arr_13 [i_0] [i_1] [i_0] [i_2])))));
                }
            }
        }
    }
    var_25 += (max(var_9, var_10));
    #pragma endscop
}
