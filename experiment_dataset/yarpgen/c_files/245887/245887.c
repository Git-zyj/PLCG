/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = -777123287;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (-((var_5 ? (arr_7 [i_0] [i_1] [i_2] [7]) : (arr_2 [i_0] [11]))));
                        arr_9 [i_0 - 2] [i_1] [i_2] [i_3] = (((arr_2 [i_2] [i_2]) ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 + 2] [i_0 + 2])));
                        var_21 = (!var_12);
                        var_22 = (((arr_3 [i_3] [i_0]) ? ((18446744073709551615 ? var_14 : var_6)) : ((((arr_4 [i_1] [i_2] [i_3]) ? (arr_4 [i_3] [10] [10]) : var_14)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_23 = (((((arr_11 [i_4 + 1]) * (arr_10 [i_4]))) - (arr_11 [i_4])));
        var_24 = ((((!(arr_10 [i_4])))));
        var_25 = (min(var_25, (arr_10 [i_4])));
        var_26 = ((((-777123287 - (arr_11 [i_4]))) * (arr_11 [i_4])));
    }
    var_27 = (max(110, (((((var_1 ? var_5 : 37))) ? (max(-777123287, var_8)) : var_12))));
    #pragma endscop
}
