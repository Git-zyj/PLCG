/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((((min(65535, (((arr_2 [i_0]) ^ 4169488167))))) ? (arr_1 [i_0] [i_0]) : 30303));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_12 = (max(var_12, ((((((66981102 & (((arr_4 [i_0 - 2] [i_2]) & (arr_8 [i_0 - 1] [i_0 + 1])))))) ? (((((arr_2 [i_2]) ? 30303 : (arr_3 [i_0 - 1] [i_1] [i_2 + 1]))) ^ 30309)) : (min(1, (((arr_4 [i_1] [i_2]) + var_7)))))))));
                    var_13 = 108;
                    var_14 = (((((-(arr_8 [i_1 - 3] [i_2 - 1])))) && (((319770963 || var_5) == var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max((min(-109, (arr_3 [i_0] [i_1 + 1] [i_3 + 2]))), ((((arr_5 [i_2 - 2] [i_4]) <= (arr_3 [i_0 + 1] [i_1 - 3] [i_3 + 2]))))));
                                var_16 = ((((((arr_13 [i_0] [i_0 - 1]) <= (arr_13 [i_0] [i_0 - 1])))) + (((arr_13 [i_0] [i_0 - 1]) ? (arr_13 [i_0] [i_0 - 2]) : (arr_13 [i_0] [i_0 + 1])))));
                                var_17 = (min(-var_0, ((max(57022, var_1)))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_18 = (min(((((((arr_14 [i_0 - 1] [i_0 + 1] [4] [i_1] [i_5] [i_6] [i_6]) ? (arr_7 [i_0] [i_1] [i_1]) : 697747889))) ? 3597219407 : var_5)), (arr_2 [i_0])));
                        var_19 -= ((!(((arr_6 [i_0] [4] [i_1 - 3] [i_6]) == 41891))));
                    }
                    var_20 += (min((var_3 + -99), 108));
                }
                var_21 = (min((((arr_13 [i_0] [i_1 - 3]) ? (arr_11 [i_0] [i_0 + 1] [i_1 - 3] [i_1]) : var_2)), (((arr_11 [i_0] [i_0 - 2] [i_1 - 2] [i_1 - 3]) ? (arr_11 [i_0] [i_0 - 2] [i_1 - 1] [i_1]) : (arr_11 [9] [i_0 - 1] [i_1 + 1] [9])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_22 = (min((((min((arr_23 [i_7] [i_7] [i_7]), var_6)))), (arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 2])));
                    var_23 = ((((((((var_7 >= (arr_25 [i_7])))) - (arr_22 [10])))) ? var_10 : (arr_25 [i_9])));
                    var_24 = (arr_21 [i_9]);
                }
            }
        }
    }
    var_25 -= (((((~((var_8 ? var_9 : var_3))))) ? (((var_8 > ((var_6 ? var_1 : var_10))))) : var_4));
    var_26 = var_3;
    #pragma endscop
}
