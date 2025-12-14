/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= (arr_1 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((-(((min(327778872, 57433))))));
                                var_17 = (max(var_17, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_1])));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((((!(arr_4 [i_0 - 3] [i_1] [i_4]))))) % ((((max(60, var_1))) ? (((58485544 ? 65520 : 57427))) : (max(var_6, (arr_13 [i_0] [6])))))));
                                var_18 = (arr_7 [i_0] [i_1] [1] [i_3]);
                            }
                        }
                    }
                }
                arr_18 [i_0 - 3] [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_25 [i_0 - 1] [i_1] [i_5] [i_6 + 2] = ((var_14 | (arr_4 [i_6] [i_5] [i_1])));

                            for (int i_7 = 1; i_7 < 12;i_7 += 1)
                            {
                                arr_28 [i_0] [i_1] [i_5] [i_5] = (arr_8 [i_0] [i_1] [i_6]);
                                arr_29 [i_0] [i_0] [i_5 - 1] [i_5] [i_6] [i_7] = var_0;
                            }

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_34 [i_6] [i_6] [i_5] [i_6] [i_6] = (((arr_20 [i_0 - 3] [i_5] [i_5 + 2] [i_6 + 2]) ? var_5 : 8103));
                                var_19 = (min((8117 * 480), ((var_7 ? (arr_2 [i_0 + 1]) : var_0))));
                                var_20 = (((((arr_8 [i_0] [i_1] [i_6]) & var_8))));
                            }
                            for (int i_9 = 0; i_9 < 14;i_9 += 1)
                            {
                                var_21 = (((((-31155 ? var_9 : (arr_20 [i_0] [i_5] [i_5] [i_6 + 1])))) ? (((!((max((arr_22 [i_5] [i_5 + 1] [5] [i_9]), (arr_8 [i_9] [i_1] [i_0]))))))) : var_11));
                                arr_37 [i_0] [i_1] [i_5] [i_1] = ((((+((57413 ? (arr_35 [i_5] [i_6 + 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 - 1]) : -7420645560977297161)))) * ((((!(arr_11 [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_10, var_8));
    var_23 = 7420645560977297165;
    #pragma endscop
}
