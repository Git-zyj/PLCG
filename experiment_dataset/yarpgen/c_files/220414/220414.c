/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((var_7 ? 15316 : var_2)) <= 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [1] [2] [i_0] &= ((!(((arr_5 [i_0] [1]) > (arr_3 [i_1 + 1] [4] [i_1 + 1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_12 = ((((-(arr_4 [7] [0]))) - (arr_3 [i_2] [i_0] [i_2])));
                    var_13 = -1010846622;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_14 = -16202;
                        var_15 = ((!(arr_5 [i_4 - 1] [i_1])));
                    }
                    var_16 = (((arr_9 [i_0] [6]) ? ((var_5 ? 15316 : 1)) : var_6));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_15 [11] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_17 = var_10;
                                var_18 = var_0;
                                arr_21 [i_0] [i_5] [i_5] = 15;
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_5] = ((28 ? 1 : (arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3])));
                }
                var_19 = ((max(var_1, (max(-127, 1)))));
                var_20 = var_9;
            }
        }
    }
    var_21 = ((((((max(63488, var_5))) ^ ((max(4064, 117))))) % var_9));
    var_22 = var_6;
    #pragma endscop
}
