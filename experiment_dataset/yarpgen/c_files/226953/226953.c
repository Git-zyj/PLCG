/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = ((-((var_9 ? var_11 : (arr_8 [i_1] [i_1] [i_1] [i_1 - 2])))));
                            var_12 = (min(var_12, ((((((arr_8 [i_0] [i_1 + 1] [i_2] [i_3 - 1]) * (arr_2 [i_3] [i_1]))) % (arr_4 [i_1] [6] [i_3]))))));
                            var_13 = (min(var_13, var_5));
                        }
                    }
                }
                arr_11 [i_1] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_5] = (arr_13 [i_4] [i_5]);
                var_14 = ((-2018641619 * (((var_1 ? var_3 : (((var_1 == (arr_14 [i_5] [i_4])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    arr_24 [20] [20] [i_8] [i_6] = (min(((-(((arr_17 [i_6] [i_7]) * -19102)))), -var_11));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_30 [0] [i_7] [i_8] [i_6] [i_8] = (((((arr_25 [i_7] [i_8] [i_7] [i_7 + 2] [i_10 + 1]) ? 10802 : (arr_25 [10] [i_8] [i_6] [i_7 - 3] [i_10 + 1]))) | (arr_21 [i_7 + 2] [i_7 + 3] [i_8])));
                                var_15 = ((var_7 << (((min(3390758015866066852, ((((arr_21 [i_6] [i_7 + 1] [i_10]) + (arr_20 [i_10 - 1] [15] [i_8])))))) - 3390758015866066811))));
                                arr_31 [20] [i_9] [i_8] [i_6] [i_6] = ((((((12544 || var_3) ? (arr_21 [i_7] [7] [i_7]) : (arr_23 [i_10 - 1] [i_7] [10])))) ? var_7 : var_8));
                                var_16 = (min(var_16, (arr_17 [i_6] [i_7 + 4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_17 = ((!(arr_21 [i_6] [12] [i_6])));
                                var_18 = (min((!45823), var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
