/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = var_6;
    var_18 -= ((var_0 * ((var_7 ? var_1 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = (arr_0 [i_0]);
                            arr_11 [13] [i_0] [19] [12] = (min((((!(var_5 == 700633141)))), (((min(245, 0))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_20 += var_10;
                            var_21 += ((2147483647 && (arr_15 [i_5] [i_0] [i_4 - 1] [i_5 - 2])));

                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_4] [i_5] [i_0] [i_6] = ((((((((arr_17 [i_4] [i_6] [i_4] [i_5] [i_5] [i_0] [i_5]) > (arr_2 [11])))) - (28867 && var_10))) & ((var_6 << ((((min((arr_6 [20]), (arr_9 [i_5 - 3] [i_5] [i_4] [i_5] [i_6] [i_4])))) - 21))))));
                                arr_20 [i_0] [16] [i_4] [i_5] [i_6] = (((((((65535 ? (arr_17 [i_6] [i_0] [i_5] [i_4] [i_1] [i_0] [i_0]) : var_2))) ? (arr_12 [i_6] [i_1] [i_0]) : (~700633141)))) ? (((241 >= ((~(-2147483647 - 1)))))) : ((max((arr_17 [i_0] [i_1] [i_4] [i_5] [i_6] [i_0] [14]), (arr_0 [i_0])))));
                                arr_21 [i_0] [i_1] [i_1] [i_4 - 1] [i_0] [i_5] [9] = (arr_7 [i_0] [i_1] [i_4] [i_5]);
                            }
                            var_22 = ((~((max(74, var_2)))));
                        }
                    }
                }
                arr_22 [i_0] [i_1] [i_0] = ((((((arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) - (arr_8 [i_0] [i_0] [i_0] [i_1])))) ? ((((((arr_7 [i_0] [14] [i_1] [i_0]) ? (arr_18 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [10]) : var_11))) ? (arr_15 [i_0] [i_1] [i_1] [i_1]) : (!var_3))) : var_14));
                arr_23 [i_0] = ((arr_18 [i_0] [6] [i_0] [i_0] [i_0] [i_1] [i_1]) ^ (min(((var_1 * (arr_1 [i_0] [i_1]))), (arr_12 [i_1] [i_1] [i_0]))));
            }
        }
    }
    var_23 |= var_13;
    #pragma endscop
}
