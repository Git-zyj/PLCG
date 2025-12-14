/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? ((((718528480 ? var_1 : var_0)))) : ((var_5 ? ((max(var_4, 0))) : ((var_5 ? var_7 : 1))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 *= 6251;
        arr_4 [i_0] = ((!((((arr_0 [i_0]) ? (arr_0 [0]) : 1)))));
        var_12 = (((((arr_2 [i_0] [i_0]) / (arr_3 [5])))));
        arr_5 [i_0] [16] = (min(((((~240) ? var_0 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))))), ((((((arr_2 [i_0] [i_0]) ? (arr_3 [11]) : (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : -240))));
        arr_6 [i_0] = (max((((arr_2 [i_0] [i_0]) + ((-(arr_0 [10]))))), (((max(var_4, 1968925839))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_11 [i_1] = ((((!((!(arr_9 [i_1])))))));
        var_13 = ((!((((arr_8 [i_1]) | (min((arr_10 [i_1]), var_8)))))));
        arr_12 [i_1] [i_1] = (((~(arr_8 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_14 = (!(arr_19 [i_4] [i_4] [i_4] [i_5 + 1]));
                        var_15 = (arr_8 [i_2]);
                        arr_22 [i_5 + 1] [i_2] [i_2] [i_2] = (arr_7 [i_2] [i_2]);
                        arr_23 [i_2] = (((arr_21 [i_5 + 1] [i_5 + 1] [i_4]) ? (arr_9 [i_2]) : (arr_17 [i_5 - 1] [i_5 + 1])));
                    }
                }
            }
        }
        var_16 = (((arr_13 [i_2]) >= (arr_13 [i_2])));
        arr_24 [i_2] [i_2] = (((arr_17 [i_2] [i_2]) ? (arr_14 [i_2]) : (arr_17 [i_2] [i_2])));
        var_17 &= (((arr_19 [i_2] [1] [i_2] [i_2]) * (arr_8 [i_2])));
    }
    #pragma endscop
}
