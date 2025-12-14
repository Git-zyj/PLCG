/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = var_14;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (-(arr_0 [i_2 + 2]));
                        arr_12 [i_1] [i_1] = 1;
                        var_21 = (((arr_5 [i_2 - 1] [i_2 + 3] [i_2 + 2]) ? (arr_5 [i_2 - 1] [i_2 + 3] [i_2 + 2]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_22 = (max(var_22, (~var_10)));
                            arr_17 [i_1] [i_2 - 1] [12] [i_1] = (arr_16 [i_4 - 2] [i_4 - 2] [i_1] [i_1] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_20 [i_1] [i_3] [1] [i_1] [i_1] = (arr_5 [i_2 + 2] [i_2 + 3] [i_2 + 1]);
                            var_23 = (min(var_23, (((~(2147483647 - 669227727))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (min(var_24, (((var_6 ? ((((var_11 <= (arr_3 [i_3]))))) : (arr_15 [i_3]))))));
                            arr_23 [i_1] [1] [i_1] = (((~46) && (((var_17 ? (arr_13 [i_2] [i_1]) : (arr_18 [i_6] [i_3] [i_2] [i_0]))))));
                            var_25 = (min(var_25, ((184 ? 2870238651 : 1))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_26 [i_0] [i_0] [i_0] = (~0);
            var_26 += ((((-(arr_1 [i_0]))) & var_15));
        }
        var_27 = (min(var_27, (arr_2 [i_0] [i_0])));
    }
    var_28 = ((max(var_10, ((var_13 ? var_4 : var_2)))));
    var_29 = (max(-var_18, (max(var_8, 0))));
    var_30 = var_14;
    #pragma endscop
}
