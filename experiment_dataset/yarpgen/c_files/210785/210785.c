/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [10] [i_0] [8] [i_0] = (arr_6 [i_0] [7] [i_0]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_1] [i_0] [i_2] [i_3] = ((arr_9 [i_2]) ? (((arr_4 [i_0]) ? (arr_9 [i_0]) : var_1)) : (1338222118 + 649931026));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_0] = -46;
                            arr_15 [i_0] [11] [i_0] [i_1] [11] [11] [i_4] = (((arr_13 [i_2] [i_2] [i_2] [i_4 - 2] [i_4]) >= (arr_12 [8] [i_1] [8] [i_4 - 2] [8] [i_0] [i_1])));
                            arr_16 [i_0] [5] [i_1] [i_0] = (((!-6152) ? var_11 : var_7));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] = ((-72 ? (((arr_4 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_2] [4] [i_0] [1]) : -29)) : (((-116 + 2147483647) >> (((arr_17 [i_0] [i_0] [3] [i_3] [i_5]) + 96))))));
                            arr_20 [i_0] [i_1] [i_2] = ((~(((-13663 && (arr_10 [i_0] [i_1] [i_2] [0]))))));
                            var_17 = (arr_13 [i_0] [i_1] [i_2] [6] [i_5]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = -41;
                        var_18 &= (var_7 ^ (arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_19 = (var_14 != -1);
                        var_20 += (((-(arr_13 [i_0 + 1] [i_1] [4] [i_7] [i_7]))));
                        var_21 &= (((((-23304 ? var_12 : (arr_13 [i_0] [i_1] [5] [i_0] [10])))) ? 32757 : (649931011 > var_12)));
                        var_22 = (max(var_22, (((1530328775 <= (-1204810380 != -503960703))))));
                    }
                }
                arr_27 [i_0] = (arr_4 [i_0]);
                var_23 = (max(var_23, (((((min((((arr_4 [10]) | (arr_18 [9] [i_1] [9] [i_1] [9]))), (max(-1, -1))))) && -9)))));
            }
        }
    }
    var_24 = (!790803168);
    var_25 = (((min(((min(var_1, var_9))), -790803142))) ? 30644 : 78);
    #pragma endscop
}
