/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = var_9;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_16 = var_9;
                        var_17 &= ((!(arr_1 [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_18 = (2199022206976 ? 18446744073709551615 : 13174150379245599493);
                        var_19 &= 2305843009213693951;
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_2] [i_2] [i_1] [i_2] = (((17150205027313929774 ? 10890283827635440116 : (!1992267699031466354))) + (min(var_4, (max(var_11, (arr_3 [i_5] [i_2] [i_0]))))));
                        var_20 = max((((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))), ((~(arr_14 [i_1]))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                arr_21 [i_6] = (-(var_10 & 16454476374678085261));
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_29 [i_10] [8] [8] [i_6] &= arr_26 [i_6] [i_7] [i_10] [i_9] [i_10] [i_10];
                                var_21 = ((!((!(((var_14 ? (arr_26 [i_6] [i_7] [i_8] [i_9] [i_10] [i_8]) : var_5)))))));
                                arr_30 [i_6] [i_7] [i_10] [i_9] [i_10] = (((!var_0) || -5299570326661329159));
                                var_22 = ((arr_27 [i_6] [i_7] [i_8] [i_9] [i_10]) & ((((max(12456791471591909628, (arr_23 [i_6] [i_6])))) ? ((((!(arr_20 [i_6] [i_6]))))) : (var_13 ^ 8354487831379824517))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
