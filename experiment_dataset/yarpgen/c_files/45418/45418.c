/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((!((min(var_10, (~4255845691))))))));
    var_21 = (!-1635179459);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = ((((arr_4 [i_0] [i_1] [4]) ? ((max(2147483631, 2147483641))) : (max(-2147483632, var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [1] [1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] = ((max((max((arr_2 [i_1]), (arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))), (arr_3 [11]))));
                                arr_14 [7] [i_1] [9] [6] [i_0] [i_2 - 1] = (max((arr_2 [i_1]), (min((arr_3 [16]), (arr_1 [i_0 + 1])))));
                                var_23 = var_5;
                                var_24 = (max(var_24, ((min((((((arr_4 [10] [8] [1]) - var_18)))), (((((2147483631 ? var_16 : -2147483632))) ? (arr_10 [i_0] [i_0] [6] [i_3] [i_4]) : (arr_11 [12] [8] [14] [0]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_25 = (((!(!1))));
                            var_26 = (arr_7 [i_6] [i_6] [3] [i_6]);
                            arr_21 [i_0] [i_0] [i_0 - 1] [i_1] = ((((((-(arr_5 [i_0] [i_1] [i_1] [5]))) >= (-15 / 1))) ? (((((arr_0 [i_5 - 4] [i_1 - 3]) || (((var_6 ? var_19 : (arr_1 [i_5])))))))) : (((((-2672054570874508116 ? var_6 : 1))) ? var_18 : (-32247 + 0)))));
                            arr_22 [i_1] [i_6] [i_5] [i_1 - 3] [i_1] = ((var_17 >= (arr_5 [5] [i_1] [i_1] [i_5])));
                            var_27 = (var_14 % 2147483631);
                        }
                    }
                }
                var_28 = ((-(!var_8)));
            }
        }
    }
    var_29 = (((var_14 == var_1) ? (122 & var_8) : ((1 ? 1 : (1 && -32247)))));
    #pragma endscop
}
