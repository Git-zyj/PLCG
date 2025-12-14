/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_1));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((((((var_12 ? var_5 : var_14))) ? ((var_11 ? var_10 : var_14)) : (arr_0 [i_0 + 1])))) ? (((var_10 ? var_5 : var_7))) : var_14));
        var_19 = (((((((((arr_0 [i_0]) ? var_15 : (arr_1 [i_0 + 1])))) ? ((var_13 ? var_6 : var_3)) : ((((arr_0 [i_0 + 1]) ? var_13 : (arr_0 [i_0]))))))) ? (((-var_11 ? ((var_0 ? (arr_0 [i_0 + 1]) : var_12)) : var_9))) : (((((var_8 ? var_13 : var_7))) ? var_1 : (((var_13 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((var_10 ? ((var_7 ? (arr_2 [i_1] [i_1]) : (arr_3 [11]))) : (!var_1)));
        var_20 = (arr_5 [i_1]);
        arr_7 [i_1] = var_7;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_21 = var_13;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = (max(var_22, var_2));
                    var_23 = (min(var_23, ((((((var_11 ? var_0 : ((var_10 ? (arr_2 [i_2] [i_3]) : var_16))))) ? (arr_5 [i_3]) : (((((var_15 ? var_6 : (arr_12 [i_4] [i_3] [i_2])))) ? (((var_11 ? var_7 : var_2))) : ((var_1 ? var_8 : var_11)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 = var_8;
                                var_25 = ((((((arr_3 [i_6]) ? (((var_8 ? var_4 : (arr_3 [i_4])))) : ((var_9 ? (arr_5 [i_2 - 1]) : var_15))))) ? ((var_5 ? -var_8 : var_15)) : var_9));
                                arr_22 [i_6] [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = var_13;
                            }
                        }
                    }
                    var_26 = (min(var_26, (((var_16 ? ((~(arr_18 [i_2] [i_3] [i_2]))) : var_6)))));
                    var_27 = (((((((var_6 ? var_10 : var_5))) ? (((arr_2 [i_2] [i_2]) ? var_3 : var_12)) : var_16))) ? ((9124571418671115592 ? -27498 : 0)) : var_3);
                }
            }
        }
    }
    #pragma endscop
}
