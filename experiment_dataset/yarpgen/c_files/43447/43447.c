/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((131 + (-32767 - 1))), var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(((min((arr_0 [1] [7]), (arr_4 [i_0 - 3] [i_1 - 2])))), (min((arr_0 [i_1 - 2] [i_1 - 2]), (min((arr_6 [i_1] [i_0] [i_1 + 3]), (arr_0 [i_0 + 4] [5])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 -= var_4;
                            arr_13 [5] [1] = ((((min((arr_10 [i_0 - 1] [i_0 - 1]), 131))) ? (arr_10 [i_0] [9]) : ((((arr_6 [i_0] [i_3 - 1] [i_2]) ? var_4 : 5243431223285965314)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (((var_5 ? (arr_18 [i_0] [10] [i_0] [i_0] [i_0 + 1] [7]) : (arr_16 [i_0] [i_1] [i_5 + 1] [i_6]))));
                                var_23 = (max(var_23, ((((arr_8 [i_0] [i_0]) / var_0)))));
                                var_24 = (max((((arr_4 [i_0 + 3] [i_0 + 3]) ? var_6 : var_1)), ((((arr_16 [i_0] [i_1 + 2] [i_1 + 2] [0]) <= var_16)))));
                                var_25 = (((2445037995 || -103) / (((-5243431223285965314 ? 1849929324 : 1849929322)))));
                            }
                        }
                    }
                }
                var_26 = (min((arr_0 [i_0 - 4] [i_1 + 3]), (max(1, 11143219556903406772))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_27 = (arr_22 [i_8 + 1]);
                            var_28 += ((0 ? 0 : (min((((var_10 ? (arr_3 [i_1]) : (arr_8 [i_7] [i_8])))), (((arr_4 [i_1] [i_1]) ? -52 : (arr_19 [i_0 + 2] [10] [i_1 + 3] [10] [i_8])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
