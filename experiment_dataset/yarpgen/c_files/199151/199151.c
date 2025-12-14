/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_4 ? ((var_9 ? var_2 : var_6)) : var_4))), (max(var_2, ((var_7 ? var_5 : var_8))))));
    var_12 = (max(var_12, var_7));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 += var_10;
                        arr_11 [i_3 + 1] [i_1] [i_1] [i_0 - 3] = (min((((((max(var_6, var_6))) ? (max(var_2, var_1)) : var_10))), (min(((var_2 ? var_8 : var_3)), var_0))));
                        arr_12 [i_1] = var_5;
                    }
                }
            }
        }
        arr_13 [i_0] = (max(((((((var_4 ? var_6 : var_7))) ? (((var_4 ? var_9 : var_0))) : ((var_4 ? var_3 : var_4))))), (min((max(var_7, var_9)), (max(var_6, var_8))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_5 + 1] [i_6] = ((var_2 ? var_4 : ((var_3 ? var_7 : var_9))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_14 = (((((var_10 ? var_5 : var_0))) ? var_9 : var_6));
                                arr_32 [i_5 + 1] = var_5;
                                arr_33 [i_4] [i_4] [i_4 + 2] [9] = var_9;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_41 [i_10] [i_10] = ((var_10 ? ((var_7 ? var_8 : var_2)) : (((var_7 ? var_0 : var_6)))));
                    var_15 = var_2;
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_16 = var_8;
                                arr_46 [i_12] [i_10] [i_10] [i_10] [i_4] = var_0;
                                arr_47 [i_4 + 2] [i_4 + 2] [i_10] [i_10] [i_10] [i_11] [i_12] = ((var_1 ? (((var_1 ? var_1 : var_2))) : ((var_7 ? var_8 : var_10))));
                            }
                        }
                    }
                    arr_48 [i_10] [i_9] [i_10] [i_10] = (((((var_10 ? var_8 : var_9))) ? ((var_4 ? var_8 : var_1)) : (((var_3 ? var_1 : var_0)))));
                }
            }
        }
        arr_49 [i_4 - 1] = ((var_10 ? var_4 : var_8));
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((min(((min(var_3, var_9))), (max(var_8, var_6))))) ? (((((var_7 ? var_6 : var_6))) ? (((var_7 ? var_4 : var_3))) : (max(var_5, var_3)))) : var_1)))));
                                arr_63 [i_17] [i_15] [i_15] [i_15] [i_13] = ((((max(var_6, var_1))) ? ((var_10 ? var_6 : ((var_6 ? var_7 : var_9)))) : ((((max(var_8, var_0))) ? ((max(var_4, var_10))) : var_8))));
                            }
                        }
                    }
                    var_18 = ((var_8 ? (max(((max(var_3, var_2))), (max(var_7, var_7)))) : ((max((max(var_6, var_2)), (max(var_6, var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
