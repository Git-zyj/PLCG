/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = var_9;
    var_21 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (min((((~(arr_1 [i_0])))), (((arr_0 [i_0] [i_2]) ? (((arr_4 [i_0]) ? -121 : var_12)) : (((~(arr_4 [1]))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] = (arr_1 [i_0]);
                        var_23 += ((~(arr_4 [i_2])));
                        arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] = ((((-12097 | ((34 ? 137438951424 : -125)))) != (arr_3 [i_0])));
                        var_24 *= (arr_3 [2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_25 = (((arr_7 [i_4 - 1]) ? (arr_7 [i_4 - 1]) : (arr_7 [i_4 - 1])));
                        arr_17 [i_0] [7] [i_1] [i_0] [i_0] [i_4] = (arr_14 [i_4] [i_0] [i_4 - 1] [i_4] [i_4] [i_4]);
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [5] [i_0] [i_0] = arr_20 [5];
                        var_26 = (arr_0 [i_2] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_27 = ((~(arr_24 [1] [i_0] [i_1] [i_1] [i_1] [8])));
                        var_28 = (arr_25 [1] [1] [i_1] [i_6] [i_2]);
                        arr_27 [i_0] [1] [i_0] [i_0] [i_0] = (!567915074);
                        arr_28 [i_0] [i_1] [5] [i_6] [i_6] = ((-80 ? 2124931882 : 33));
                    }
                }
            }
        }
    }
    var_29 = (((((var_4 ? 1 : -17932))) ? (((!18446744073709551615) ? var_5 : var_2)) : var_16));
    #pragma endscop
}
