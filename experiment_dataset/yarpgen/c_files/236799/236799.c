/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((((var_2 * ((max(126, 131)))))) && ((min((max(26, var_0)), (!129))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_15 ^= (((var_11 + 153) ? (arr_0 [i_0 - 2]) : var_2));
        arr_2 [i_0] [19] = (arr_0 [i_0 - 2]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_9 [i_3] [i_2] [i_1] [1] = (((arr_5 [i_3] [i_2]) > var_6));
                    var_16 += ((var_6 > (arr_6 [i_2])));

                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        arr_12 [i_4] [i_4 - 2] [i_3] [1] [i_1] = ((((arr_7 [i_1]) / (arr_5 [i_1] [i_1]))));
                        var_17 += ((!(((var_11 ? var_0 : (arr_0 [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_18 = (arr_8 [i_5] [i_2] [i_1]);
                        arr_15 [i_5] [i_3] [i_2] [i_2] [i_2] [i_1] = arr_11 [i_5] [i_3] [i_3] [i_1] [i_1];
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_19 = (((!19830) * ((var_13 ? -19824 : var_7))));
                        var_20 ^= (746843483 >= 300963430);
                        var_21 -= ((82 % (arr_8 [i_2] [i_3] [i_2])));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_22 = (1 < ((var_6 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_16 [i_7] [i_7] [i_7] [i_3] [i_2] [i_1]))));
                        var_23 = (-1 % 19819);
                    }
                }
            }
        }
        arr_21 [12] [12] = (129 || var_12);
    }
    #pragma endscop
}
