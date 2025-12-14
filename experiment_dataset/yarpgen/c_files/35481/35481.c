/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_13 ? var_4 : var_5)))) ? var_7 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((((arr_3 [9]) ? ((var_4 ? (arr_0 [i_3]) : (arr_2 [i_0] [i_3]))) : (arr_5 [i_3] [i_2] [i_1] [i_3])))) ? var_6 : ((((((arr_4 [i_3] [0]) ? (arr_4 [i_3] [4]) : var_12))) ? var_1 : var_12)))))));
                            var_17 = (arr_5 [i_1] [4] [i_1] [i_1]);
                            var_18 = (((arr_6 [4] [i_1] [i_1] [i_2] [1] [6]) ? ((((arr_7 [5] [i_1]) ? var_1 : (arr_1 [i_3] [i_1])))) : (arr_2 [i_0] [i_1])));
                            var_19 *= (((var_9 ? ((((arr_1 [i_0] [i_2]) ? (arr_7 [9] [i_0]) : (arr_6 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])))) : var_13)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 15;i_6 += 1)
                            {
                                arr_16 [i_1] = ((var_1 ? var_9 : (((arr_3 [i_1]) ? var_5 : var_6))));
                                var_20 = (min(var_20, (arr_14 [i_6] [7] [5] [i_4] [i_1] [4] [i_0])));
                                arr_17 [i_1] [i_5] [10] [i_1] [i_1] = var_5;
                                var_21 = (arr_4 [i_1] [14]);
                                var_22 = ((var_11 ? (((arr_15 [i_6] [i_1] [i_4] [i_1] [i_0]) ? ((((arr_9 [i_1] [i_5] [i_1]) ? var_13 : var_1))) : (arr_4 [i_1] [14]))) : (arr_12 [i_6] [i_5] [14] [0])));
                            }
                            var_23 -= ((((((((var_14 ? var_10 : (arr_13 [i_0] [8] [8])))) ? var_11 : var_9))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [1] [i_1] [1])));
                        }
                    }
                }
                arr_18 [i_1] [i_1] [7] = (((((arr_4 [i_1] [i_1]) ? var_4 : (arr_0 [i_1])))) ? (((var_2 ? var_0 : (arr_14 [i_0] [i_1] [9] [3] [i_0] [10] [13])))) : (arr_11 [9] [3]));
                var_24 = (((arr_3 [7]) ? var_12 : (((((var_10 ? var_2 : (arr_9 [10] [i_1] [i_1])))) ? (arr_11 [i_0] [i_1]) : (arr_6 [i_0] [1] [i_1] [4] [i_0] [i_0])))));
                arr_19 [i_0] [i_0] [i_1] = (((arr_8 [i_1] [i_0]) ? (((((var_6 ? var_9 : var_1))) ? (arr_10 [3] [i_1] [8] [10]) : ((var_1 ? (arr_8 [7] [i_1]) : (arr_15 [i_1] [i_1] [5] [i_1] [1]))))) : var_1));
            }
        }
    }
    #pragma endscop
}
