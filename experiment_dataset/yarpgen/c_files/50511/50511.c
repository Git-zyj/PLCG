/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_5 / var_2) ? var_2 : 98));
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((((((arr_1 [i_0] [i_0]) << ((((((-1 + (arr_0 [i_0]))) + 1769996471)) - 5))))) || ((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 2131000912)))))))) : (((((((arr_1 [i_0] [i_0]) << ((((((-1 + (arr_0 [i_0]))) + 1769996471)) - 5))))) || ((((arr_1 [i_0] [i_0]) << (((((((arr_1 [i_0] [i_0]) - 2131000912)) + 2050614534)) - 12))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-((((max((arr_5 [i_1]), 4294967295))) ? ((((arr_4 [i_1]) || (arr_3 [i_1])))) : ((-(arr_4 [i_1])))))));
        arr_8 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = (0 & (arr_9 [i_2] [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 = ((((((min(var_8, (arr_12 [i_4] [i_3] [i_2])))) << (17795987377054187540 - 17795987377054187525))) << ((min((arr_12 [i_2] [i_3] [i_4]), (arr_15 [i_2] [i_2] [i_4] [i_3]))))));
                    var_15 = (max(var_15, ((!(arr_12 [i_2] [i_2] [i_2])))));
                    arr_17 [i_3] [i_2] = (15296 / 267911168);
                    arr_18 [i_4] [i_2] [i_3] [i_2] = var_2;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = (((--1577568382188128493) / (arr_4 [i_5])));
        arr_22 [i_5] = (arr_19 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_5] = var_10;
                        arr_32 [i_5] [i_7] [i_8 - 1] [i_7] = (arr_27 [i_8 + 4] [i_8] [i_8] [i_8 + 1]);
                        var_16 = (((arr_16 [i_8] [i_8 + 1]) * (((min(var_6, -89)) ^ (arr_16 [i_6] [i_8])))));
                        arr_33 [i_8 - 1] [i_7] [i_6] [i_6] [i_5] = (arr_23 [i_6] [i_8]);
                    }
                }
            }
        }
    }
    var_17 = ((-1 ? ((((var_4 || (1 & -3697))))) : var_4));
    #pragma endscop
}
