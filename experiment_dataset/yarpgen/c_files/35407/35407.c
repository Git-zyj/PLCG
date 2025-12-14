/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = (min(18446744073709551615, 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [2] [i_0 - 1] [i_1] [i_2] = (3616380080917146948 + -87);
                    arr_7 [4] [i_0 + 1] [7] [i_2] = 1;
                    arr_8 [i_2] = (((arr_1 [i_0 + 2]) - (arr_1 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = -20138;
                                var_19 = (arr_2 [i_0 + 2] [i_0 + 1]);
                                arr_14 [i_0] [i_1] [i_2] [i_1] [7] = var_7;
                            }
                        }
                    }
                }
                arr_15 [i_0 + 1] [4] = ((((arr_0 [i_0 + 2]) < ((0 ? (arr_10 [i_0] [i_1] [1] [10] [i_1] [i_0 - 1]) : (arr_2 [i_0] [6]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = (arr_20 [i_5] [i_5]);
                arr_21 [i_6] [i_6] [11] = ((((min(var_13, (arr_18 [i_5] [i_6] [i_6])))) | ((min(32767, 0)))));
                var_21 = ((~(min(var_7, var_1))));
                arr_22 [i_6] [0] = (((((((arr_16 [12]) < (arr_16 [12]))))) ? (((arr_19 [i_5] [i_6] [i_6]) ? (arr_19 [i_6] [i_6] [4]) : -var_4)) : (((((((arr_18 [8] [i_6] [i_6]) ? (arr_20 [3] [9]) : (arr_16 [i_5]))) > ((min(-33320821, (arr_17 [1]))))))))));
                arr_23 [i_5] [i_6] = (((((!(arr_20 [i_5] [i_6])))) + (-112105389 < 1)));
            }
        }
    }
    var_22 = (((((((min(var_2, var_12))) ? (((1 ? 201326592 : var_3))) : (max(var_4, var_14))))) ? (min(var_6, var_5)) : var_7));
    #pragma endscop
}
