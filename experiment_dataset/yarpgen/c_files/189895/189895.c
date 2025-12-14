/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 |= (!1);
                            var_12 = min(((min(-7, ((65535 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))))), (((65535 / 44312) ? (arr_11 [i_3] [i_1]) : (min(var_8, (arr_13 [i_1] [i_1] [i_0]))))));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_13 = (min(var_13, ((min((arr_14 [i_4 + 1] [i_3 + 1] [i_2] [i_3] [i_4]), (arr_14 [i_0] [i_1] [i_4 + 1] [i_1] [i_4 - 1]))))));
                                var_14 = (max(var_14, (((-(min(((((arr_3 [i_0]) ? var_6 : (arr_15 [10] [i_0])))), (arr_16 [i_0] [i_1] [i_2] [i_3] [1] [i_1] [i_0]))))))));
                            }
                            arr_17 [i_0] [i_3] [i_0] [i_0] = (min(var_8, (arr_13 [i_0] [i_0] [i_0])));
                            arr_18 [i_0] [1] [1] [i_3] = ((((max(var_1, (arr_3 [i_3 + 1])))) ? (((arr_13 [5] [5] [i_3]) / var_4)) : (max(((min(21213, var_6))), (((arr_9 [13] [i_1] [13]) ? (arr_4 [i_0] [7] [i_0]) : (arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] [0] [i_1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_15 = ((arr_24 [i_0] [i_6] [i_6] [i_6] [i_6] [i_0]) <= var_9);
                                arr_28 [11] [i_1] [i_6] = ((((((((var_4 ? (arr_19 [i_1] [i_1] [i_1]) : (arr_13 [i_0] [12] [i_0])))) ? var_0 : (arr_8 [i_0] [i_0] [14])))) ? 6447784219328979507 : (((((!44312) != 23257))))));
                            }
                        }
                    }
                }
                arr_29 [i_0] [i_0] = ((((((-(arr_4 [4] [i_1] [i_1])))) && (!var_0))) ? ((((arr_3 [i_0]) ? 182 : var_6))) : ((((min(var_6, var_7))) | var_9)));
                arr_30 [i_0] [i_0] = 1;
            }
        }
    }

    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        arr_34 [i_8] = ((-((min(12536, 18262)))));
        var_16 = (max(var_16, (arr_33 [22] [18])));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_37 [i_8] [i_8] [i_8] = 18262;
            arr_38 [i_8] = (((0 ^ (arr_35 [i_8] [i_8]))) - 2141);
        }
    }
    #pragma endscop
}
