/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_3);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) ? ((var_11 % (arr_0 [i_0]))) : (arr_0 [i_0])));
        arr_4 [14] [i_0] &= var_10;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [i_2] = (max(((-(arr_10 [i_2] [i_2] [i_2] [i_2]))), (arr_8 [i_1] [i_2] [i_3])));
                    arr_14 [i_2] [i_2] [i_2] = (arr_7 [i_3]);
                    arr_15 [i_1] [i_2] [i_3] = ((((max((arr_11 [i_2]), (arr_11 [i_2])))) << (((arr_6 [i_1] [i_2]) - 66))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [1] [18] [i_2] [1] = (max((((arr_5 [13]) + (arr_17 [i_2] [i_2]))), var_2));
                                var_20 = (max(var_20, (arr_5 [i_2])));
                                arr_22 [i_2] [i_2] [i_3] [i_4] [12] = ((!var_1) >= (arr_10 [i_2] [i_3] [i_3] [6]));
                                var_21 = var_9;
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_1] [i_1] = (((((((((arr_20 [1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? 1 : (arr_5 [i_1])))) ? 130 : (((arr_8 [i_1] [i_1] [20]) ? (arr_12 [19]) : (arr_19 [3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (arr_20 [13] [i_1] [i_1] [i_1] [i_1] [2]) : ((((max((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), var_16))) ? (((arr_18 [i_1] [i_1] [i_1] [i_1]) | (arr_17 [i_1] [1]))) : 153))));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_22 *= var_3;
            arr_26 [i_1] [i_1] [i_1] = (((arr_25 [i_1]) ? ((~(arr_17 [i_1] [i_6]))) : var_9));
        }
        arr_27 [i_1] = var_15;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                {
                    arr_33 [i_8] [i_7] [i_7] = (arr_25 [i_1]);
                    arr_34 [i_8] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
