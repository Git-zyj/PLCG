/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(-var_3, (min(var_2, var_7))))) ? ((min(((var_2 ? var_9 : var_16)), ((var_7 ? var_16 : var_12))))) : ((((max(var_5, var_8))) ? (min(var_15, var_2)) : (((var_16 ? var_2 : var_6)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((arr_0 [i_0]) ? (arr_1 [17]) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? ((~(arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [15])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (((((arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]) ? (arr_0 [i_2]) : (arr_9 [i_0] [i_0] [i_0] [i_3]))) / (arr_1 [i_3])));
                        arr_11 [i_0] [2] [i_2] [23] = ((((!(arr_5 [i_0] [i_1] [22] [i_3]))) ? (((arr_3 [i_3] [i_1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_1]))) : (arr_9 [i_0] [i_2] [i_1] [i_0])));
                        arr_12 [i_0] = ((((((arr_6 [i_3] [i_2]) ? (arr_3 [i_3] [i_2]) : (arr_8 [1] [1] [i_1] [i_1] [i_2] [i_3])))) ? (((arr_4 [1]) ? (arr_0 [i_1]) : (arr_3 [i_1] [i_1]))) : (((arr_9 [i_0] [i_1] [i_0] [i_0]) ? (arr_3 [i_0] [i_2]) : (arr_1 [i_1])))));
                        var_21 = ((!(arr_10 [i_0] [i_3] [i_2] [i_3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
