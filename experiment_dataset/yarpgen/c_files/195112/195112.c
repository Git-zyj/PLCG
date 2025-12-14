/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_1] [i_3] [i_3] = ((!(arr_3 [i_0] [i_2] [i_3])));
                        arr_10 [i_0] [i_1] [i_2] [1] &= var_4;
                        arr_11 [i_0] [i_3] [i_2] [i_3] = (arr_7 [i_3]);
                        arr_12 [4] = (arr_7 [0]);
                        arr_13 [i_0] [12] [i_2] |= (((arr_1 [i_3] [i_2]) ? var_9 : (arr_1 [i_0] [i_2])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = 924685170;
                                arr_21 [i_5] [i_4] [i_2] [i_1] [i_0] = ((((max(var_11, ((-(arr_7 [i_4])))))) ? ((((arr_7 [i_4]) == 20204))) : (arr_5 [i_1])));
                            }
                        }
                    }
                    arr_22 [i_1] [i_0] = (max((min(((14661397495487037563 ? 250395262294076630 : (arr_15 [i_0]))), (((arr_3 [i_2] [i_1] [i_0]) ? var_15 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((!(arr_3 [i_0] [i_2] [i_2]))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_26 [i_0] [i_0] [16] [i_2] = (arr_0 [i_1]);
                        arr_27 [i_6] [i_1] [i_2] [i_6] [i_0] = ((((~(arr_15 [i_0]))) == (arr_3 [i_0] [i_1] [i_2])));
                        arr_28 [i_1] [i_1] [i_0] [i_6] [i_2] [i_0] = (20204 ? 1 : (arr_14 [i_6] [i_2] [i_1] [i_0]));
                        arr_29 [i_0] [i_0] [i_1] [i_6] [i_2] [i_6] = 7;
                    }
                }
            }
        }
    }
    var_17 = ((((var_11 ? var_8 : var_11)) % var_15));
    #pragma endscop
}
