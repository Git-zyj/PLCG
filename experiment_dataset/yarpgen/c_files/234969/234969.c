/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = ((((((((arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [i_3]) && 65535)) ? (!var_19) : (32760 | var_18)))) & (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]) ? (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]) ? var_2 : (arr_2 [22]))) : 1))));
                                var_21 -= 0;
                                arr_12 [6] [i_1] [i_2] [i_3] [i_4] |= (min(((-((var_3 * (arr_7 [i_0] [i_1] [i_2] [1] [i_4] [14]))))), (((((1 % (arr_5 [1] [i_2] [i_2]))) != 8)))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] = (max(((-(1 & var_19))), ((max(var_1, (!21))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_2] [i_2] [i_5] [i_5] = 5;
                                var_22 -= (max(var_9, var_4));
                                var_23 = (arr_4 [i_1] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 = ((~(arr_9 [i_0] [i_0] [i_2] [i_2] [i_8])));
                                var_25 = (arr_18 [i_7] [10] [i_0] [i_7] [i_0]);
                                arr_25 [i_1] [i_1] [i_2] [i_7] [i_0] [i_2] [i_1] = ((-((max(255, (arr_7 [i_0] [i_1] [i_0] [i_2] [i_1] [1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_31 [i_2] [i_9] [i_2] [i_0] [i_9] [i_2] = ((var_3 / (65535 && var_1)));
                                var_26 = (arr_2 [i_10]);
                                var_27 = (!(arr_23 [i_0] [i_1] [i_2] [i_9] [i_10]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_0;
    var_29 = (~var_1);
    var_30 = (max(((min(1, 65518))), ((-(var_14 + 32773)))));
    #pragma endscop
}
