/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (!var_10);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((!-106) ? -var_3 : (arr_0 [i_1] [i_2])));
                    arr_8 [i_0] [i_0] [i_0] [9] = ((((arr_6 [i_0] [i_1] [i_1]) ? -13443 : var_5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = ((var_1 ? (arr_5 [i_0]) : (arr_5 [i_0])));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] &= 0;
                                arr_15 [i_2] [i_0] = (((((var_10 ? (arr_6 [i_0] [i_1] [i_0]) : var_0))) ? var_9 : (var_4 < var_5)));
                                var_14 = ((-(1405737928 - 43233)));
                            }
                        }
                    }
                    var_15 |= ((var_5 || var_1) && 1420496133);
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_16 = (max(var_8, var_1));
        var_17 = (max(var_17, (((((max(-25883, (!var_6)))) << (((min(((var_9 ? (arr_17 [i_5]) : var_5)), -117)) - 1758617609)))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_18 = -38;
                arr_23 [i_6] = (((var_2 + var_10) ? (!1052283759) : ((-(arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] [i_6])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_19 = (arr_12 [i_6] [i_6] [i_7] [i_7] [i_8] [i_8] [i_6]);
                            var_20 = (min(var_20, ((((var_0 | (arr_7 [i_7] [i_8] [14])))))));
                            arr_29 [i_6] [i_6] [i_8] = var_2;
                            arr_30 [i_6] [i_7] [i_8] [i_8] [6] [i_8] &= var_7;
                        }
                    }
                }
            }
        }
    }
    var_21 += var_4;
    #pragma endscop
}
