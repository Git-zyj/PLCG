/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [1] [i_0] = ((-(min(((var_11 + (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_7));
                            var_16 = (max(var_16, (arr_9 [i_0] [i_3 - 4] [i_3 - 1] [i_3])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_4] = (((var_4 ? (arr_3 [i_0] [i_4]) : (max((arr_11 [i_0]), var_10)))));

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_17 = var_6;
                            arr_22 [i_0] [i_1] [i_4] [i_5] [i_0] = ((((31744 > ((-31729 ? -317321720 : -8)))) ? (~var_11) : (arr_9 [i_0] [i_4] [i_5 + 2] [i_6])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_18 = (max(var_18, var_9));
                            var_19 = (min(var_19, var_13));
                            var_20 = var_4;
                        }
                        var_21 = (((((arr_19 [i_0] [i_1] [i_0] [i_5 + 1] [i_0]) * (((arr_6 [i_4] [i_4] [i_0]) + (arr_12 [i_0] [i_1] [i_4] [i_5 - 1]))))) >> (((min((min(var_11, (arr_16 [i_0] [i_1] [i_5 + 1]))), (arr_19 [i_0] [i_5 + 2] [i_4] [i_1] [i_0]))) + 5232672968944128615))));
                    }

                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_0] [2] [i_4] [i_8 + 3] [i_8] [i_0] = (arr_2 [1] [i_1]);
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_22 = (min((arr_5 [i_10 + 1] [i_10 - 2] [i_10 + 3]), var_14));
                            var_23 = ((((var_3 ? var_1 : (!var_13)))) ? (arr_17 [i_0]) : 13);
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_24 = (arr_23 [i_11] [i_11] [i_11] [i_11] [4] [i_11] [i_11]);
        var_25 -= ((-(min((arr_23 [i_11] [i_11] [i_11] [i_11] [6] [i_11] [i_11]), (arr_23 [i_11] [i_11] [i_11] [i_11] [12] [i_11] [i_11])))));
    }
    #pragma endscop
}
