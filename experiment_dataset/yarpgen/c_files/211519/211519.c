/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_10 = (min(var_10, (((~((var_5 ? var_4 : var_5)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 2] [i_1] [0] [i_3] [i_4] = (max(((-var_8 ? var_0 : (max(var_8, var_6)))), (((!((max(var_3, var_1))))))));
                                arr_14 [i_1] = ((~((var_3 ? var_0 : (!var_9)))));
                                var_11 = var_0;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [i_5] = ((-((var_9 ? var_8 : var_4))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7 - 1] [i_1] [i_7] [6] [i_5] = (~28147);
                                arr_24 [i_0 + 1] [i_1] [i_1] [i_1] [i_7 - 1] [i_1] = ((var_8 ? (((4602678819172646912 ? 2 : 4294963200))) : ((var_5 ? var_6 : var_1))));
                                arr_25 [i_0] [i_0] [i_5] [i_5] [i_1] [i_1] = ((var_6 ? var_2 : var_8));
                                arr_26 [i_0 + 1] [i_1] [i_5] [i_0 + 1] [i_5] &= ((-var_4 ? (((var_9 ? var_6 : var_9))) : ((var_9 ? var_3 : var_0))));
                            }
                        }
                    }
                    var_12 &= ((-((18446744073709551604 ? 18446744073709551599 : -5834))));
                }
                arr_27 [i_1] [i_1] = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                var_13 &= (((!var_5) ? (max(((var_6 ? var_8 : var_1)), (((var_5 ? var_3 : var_4))))) : (max(((var_0 ? var_8 : var_0)), (!var_7)))));
                arr_32 [i_9] [i_9] = ((+(max((~var_4), var_3))));
                var_14 = (min(var_14, ((~((var_4 ? (~var_0) : var_6))))));
                arr_33 [i_8] [i_8] [i_9] = (((~var_0) ? (~var_5) : (((~var_6) ? (~var_8) : var_9))));
            }
        }
    }
    var_15 = var_3;
    var_16 = (min((((~((min(var_6, var_5)))))), (min(var_3, var_3))));
    #pragma endscop
}
