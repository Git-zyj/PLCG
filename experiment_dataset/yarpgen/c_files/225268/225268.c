/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [15] = (((~var_2) ? ((((11823811931986677593 ? (arr_2 [i_0]) : (arr_1 [i_0]))))) : (max((arr_2 [3]), ((2147483647 + (arr_2 [21])))))));
        var_13 = ((!((min((arr_0 [i_0] [22]), (arr_2 [i_0]))))));
        var_14 = ((((!(arr_0 [i_0] [i_0])))) << (((arr_1 [18]) - 2000000838)));
        arr_4 [12] = ((-(((var_5 % 124) ? (min((arr_1 [i_0]), 2147483647)) : (((((-2147483647 - 1) < -2147483642))))))));
        var_15 -= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [18] = (arr_0 [i_1] [i_1]);
        arr_8 [i_1] = (arr_5 [i_1] [9]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 &= var_0;
        arr_12 [i_2] = 3974593844;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_17 -= ((((arr_18 [i_2] [6] [i_4] [2]) ? (arr_1 [i_4]) : (arr_1 [i_4]))) - ((((arr_18 [i_2] [i_2] [10] [10]) >> (2170415754 - 2170415751)))));
                        var_18 = (((42732 * -2124551549) == ((((113 ? 113 : (arr_6 [i_4] [i_5])))))));
                        arr_21 [i_2] [i_3] [i_4] [i_4] = ((1618092292377548372 < (((2147483617 ? (arr_10 [i_2] [i_2]) : 1520389950)))));
                        var_19 = (min(var_19, ((((arr_0 [i_2] [0]) ? ((min((arr_14 [i_5] [1]), (((arr_16 [0] [i_3] [0] [i_5]) | var_6))))) : (((((648347098 ? (arr_11 [1]) : var_0))) ? (min((arr_9 [i_4] [i_4]), var_3)) : (min((arr_9 [i_2] [i_3]), (arr_0 [i_3] [i_4]))))))))));
                    }
                }
            }
        }
        var_20 ^= (((arr_10 [0] [0]) | (max((max(var_4, (arr_20 [i_2] [2] [i_2] [2] [4]))), (arr_20 [i_2] [4] [8] [i_2] [4])))));
        var_21 = (max(var_21, ((((((arr_19 [i_2] [i_2]) / var_1)) < (((arr_19 [i_2] [i_2]) ? (arr_19 [i_2] [i_2]) : (arr_19 [i_2] [i_2]))))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_22 ^= (((6477627597021491123 ? (arr_6 [i_6] [i_6]) : -var_0)));
        var_23 = ((((((((arr_0 [i_6] [i_6]) <= (arr_5 [0] [i_6]))) ? (arr_1 [i_6]) : (((((arr_5 [i_6] [i_6]) != var_2))))))) ? 11969116476688060477 : (arr_5 [i_6] [i_6])));
        arr_24 [i_6] = (min((((arr_6 [i_6] [16]) % (arr_6 [i_6] [i_6]))), ((((arr_0 [i_6] [i_6]) >= (arr_0 [i_6] [i_6]))))));
    }
    var_24 = (((min(var_4, (max(65535, var_5))))) ? (((((1 ? var_1 : 16448153882585651672))) ? var_10 : ((2726201063151666272 ? (-2147483647 - 1) : var_6)))) : var_10);
    #pragma endscop
}
