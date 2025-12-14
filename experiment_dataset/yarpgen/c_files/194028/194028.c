/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (75 && 32767);
        var_15 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = var_7;
                    arr_6 [i_0] [i_1] = -var_4;
                }
            }
        }
        arr_7 [i_0] = (arr_2 [i_0]);
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [1] = (!var_7);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_6] [i_5] [i_6] [i_5] = ((var_10 ? (((((var_3 ? (arr_3 [13] [i_4] [i_4]) : var_1))) ? (arr_13 [1] [i_6]) : (arr_19 [i_3] [i_4] [i_6]))) : ((((!(arr_10 [i_4] [i_6]))) ? (max(181, var_10)) : (((-32767 - 1) | var_12))))));
                        var_17 = (max((((83 ? 1 : 2147483647))), (max(var_13, ((max(var_10, var_7)))))));
                    }
                }
            }
        }
    }
    var_18 = ((((((((max(4, 16747)))) - var_10))) ? ((((!(!var_1))))) : var_10));
    var_19 = var_11;
    #pragma endscop
}
