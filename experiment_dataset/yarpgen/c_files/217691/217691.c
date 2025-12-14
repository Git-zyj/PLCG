/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((max(170, 8642265213843423686)), 170)) >> (min((140 % 81), ((var_0 ? 57344 : var_11))))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = ((((var_11 && (arr_9 [i_0] [i_0])))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = 81;
                        arr_13 [i_0] [i_1 - 2] [i_0] [i_3] = ((((100 ? 0 : 115)) % 81));
                    }
                }
            }
        }
        arr_14 [i_0] = ((((min(var_4, -120)))) ^ 130);
        arr_15 [13] [i_0] = (173 ^ 90);
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((((-2147483647 - 1) ? (arr_10 [i_4 - 2] [i_4]) : 20048)));
        arr_20 [i_4] = 163;
        arr_21 [i_4] = ((((-8477169809911820425 && (arr_8 [i_4] [i_4] [i_4]))) ? ((((arr_6 [i_4]) ? 16279 : (arr_3 [i_4 + 2])))) : 163));
        arr_22 [i_4] = (((arr_7 [12]) == (max((arr_0 [i_4]), (((arr_2 [i_4] [i_4]) | 8606697284294285867))))));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] = ((176 ? -15892 : 94));
        arr_27 [i_5] [i_5] = (((93 && 0) | (arr_17 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_38 [3] [1] [i_7] = arr_5 [i_6 - 1];
                                arr_39 [i_5] [14] [14] [i_5 - 1] [14] = var_6;
                                arr_40 [i_6] [i_7] [i_8] = (((12950221481929226424 && 2147483647) ? 66 : (64853 || 24757)));
                                arr_41 [i_5] = ((var_5 < ((((1746544763 == (arr_30 [12] [i_6])))))));
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_45 [i_5] [12] [12] [i_7] [i_10] = (arr_44 [i_5 + 3] [i_10 - 1]);
                        arr_46 [i_5 + 4] [i_6] [i_7] [i_6] = 3877248262636260836;
                        arr_47 [i_10 + 1] [i_7] [i_5] [i_5] = (arr_24 [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_51 [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5] = (((arr_30 [i_5 - 1] [0]) ? (arr_30 [i_5 - 4] [i_5]) : (arr_30 [i_5 - 4] [12])));
                        arr_52 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_5] [i_5 - 2] = -1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
