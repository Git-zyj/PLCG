/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 * ((((!((min(var_7, var_4)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((max((arr_7 [i_1 - 1]), (max(15872, 1)))))));
                    var_19 = (max(((((arr_7 [i_0]) && var_9))), (min(((((arr_8 [i_0]) ? (arr_0 [8] [8]) : var_5))), (min(var_9, 18446744073709551602))))));
                    var_20 = (max(var_20, ((max(1, (max(((((arr_3 [14] [14] [12]) || var_12))), var_10)))))));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_3 + 3] [1] = (arr_5 [i_1] [i_2]);
                        arr_13 [i_0] [i_1] [i_3] = (min((min((1 ^ 1), -4070224475459450256)), (((-(arr_6 [i_0] [1] [i_0]))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((min(((var_4 - (arr_17 [i_1 + 2] [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 4]))), ((((arr_1 [i_0]) ? var_12 : (max(var_1, var_3))))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_0] = (((arr_14 [i_0] [i_1] [9] [i_1] [0] [i_0]) ? (min((max((arr_10 [i_0] [i_0] [i_0] [i_0]), var_9)), (arr_10 [2] [i_1 - 2] [i_1 - 2] [i_1]))) : ((min(var_0, var_0)))));
                        arr_19 [i_0] [i_1] [i_1 + 1] [i_1] [i_2] [i_4] = (((max(var_12, (arr_17 [6] [i_1] [i_2] [i_4] [i_0] [i_1 + 1]))) / 14));
                    }
                }
            }
        }
    }
    #pragma endscop
}
