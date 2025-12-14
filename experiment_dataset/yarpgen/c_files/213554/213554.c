/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    arr_8 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_0 + 1] = (arr_4 [i_1]);
                    var_11 = (((((((var_9 ? var_7 : (arr_7 [i_0])))) ? (((arr_7 [i_0]) ? (arr_2 [i_0] [i_2]) : var_4)) : (arr_2 [i_2] [i_2]))) < (((max(0, var_0))))));
                    arr_9 [i_0] [4] [i_0] [i_0] = (arr_5 [i_0] [i_0 + 1] [i_0 + 1] [i_2 + 3]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_12 = (max(var_12, (arr_5 [i_1 + 3] [i_1 - 3] [i_1 - 3] [i_1 + 4])));
                                arr_17 [7] [7] [i_3] [i_4] [i_1] [i_1] = (((arr_5 [i_0 - 2] [i_1 + 3] [i_3] [i_5]) ? (arr_0 [i_0 - 2]) : 9013367228568858160));
                            }
                        }
                    }
                    var_13 = (arr_13 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]);
                    var_14 -= (((((16981 ? 77 : 1))) ? (arr_10 [7] [i_1 - 2]) : (((arr_5 [i_0] [i_0] [i_0] [i_0 - 1]) - var_0))));
                    arr_18 [i_0 - 1] [i_0] [i_0] [i_0] = (((arr_12 [6] [i_1 + 4] [i_1] [i_1] [i_1] [i_1 + 1]) < (((-27374 > (arr_5 [4] [3] [3] [i_0]))))));
                    var_15 = ((0 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1]) : (arr_6 [10] [i_0])));
                }
                arr_19 [i_0] [i_1] [1] = (((arr_11 [i_0 + 2] [i_0 + 2]) % (arr_11 [i_0 + 1] [i_0])));
            }
        }
    }
    var_16 = (max(var_16, var_7));
    #pragma endscop
}
