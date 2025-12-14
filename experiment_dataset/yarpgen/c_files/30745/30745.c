/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_0 > ((((var_2 ? var_0 : 1683611332)) / var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((((((arr_3 [i_0]) ^ (arr_1 [i_3] [i_1])))) ^ (min(((((arr_8 [i_3] [i_1] [i_0]) ? var_0 : var_9))), ((var_0 ? (arr_1 [i_3] [i_0]) : var_5)))))))));
                        arr_14 [i_2] [4] [i_3] [i_1] = (max(64152, 49421));
                        var_14 += ((!(((((54 || (arr_3 [5]))) ? (134217727 >> var_2) : ((min(var_1, var_9))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (!((((((-134217733 ? -134217727 : (arr_12 [i_0])))) ? (((min((arr_8 [i_0] [i_1] [i_0]), 16784)))) : (arr_13 [i_3] [3] [7] [10] [3] [i_0])))));
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] = ((202 ? (arr_1 [0] [i_2]) : (((!((((arr_2 [i_0]) ? var_1 : var_5))))))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_15 = var_4;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_16 += (((arr_7 [12]) == 16784));
                            arr_22 [i_0] [i_0] [4] [i_4] [i_5] [i_1] = (1384 - 1683611332);
                        }
                        arr_23 [i_4] [i_1] [i_4] [i_4] = (((arr_4 [8] [i_1]) / (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_24 [i_1] [0] [i_2] [i_4] [i_4] = 54;
                    }
                    arr_25 [i_1] [i_1] = -1683611333;
                }
            }
        }
    }
    #pragma endscop
}
