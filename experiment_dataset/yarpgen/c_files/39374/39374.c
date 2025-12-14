/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [8] [i_0] = (min((((arr_1 [11] [11]) ? (arr_1 [i_0] [i_0]) : var_11)), (arr_1 [i_0] [11])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = var_10;
                                arr_16 [i_0] [10] [i_2] [i_3] [i_4] [i_0] = ((~((-(((arr_9 [i_0] [i_1] [i_2]) ? var_6 : var_0))))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] = (!1951);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 += (arr_6 [i_1] [0] [1]);
                                var_19 = (min(((max(1951, -24478))), 1));
                            }
                        }
                    }
                    var_20 = (((((arr_13 [i_1 - 1] [i_0] [5] [5] [i_1] [i_1] [5]) >= 252)) ? (((arr_15 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1]) / (arr_20 [i_1] [i_1] [7] [i_1 + 1] [i_2]))) : ((max((!19), var_8)))));
                }
            }
        }
        var_21 &= (((19 != 0) ? (((arr_12 [i_0] [i_0] [i_0] [0]) >> (((arr_12 [i_0] [i_0] [i_0] [10]) - 9785)))) : ((max((arr_12 [i_0] [1] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
        arr_22 [i_0] = (((arr_18 [i_0] [i_0] [8] [i_0]) ? (((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 3 : var_14))) ? ((min(var_16, (arr_8 [i_0] [4] [i_0])))) : (11225 / -11228)))) : (((arr_12 [i_0] [i_0] [i_0] [i_0]) / var_10))));
    }
    var_22 = (max((var_3 != 253), (max((min(2147483647, 4294967274)), var_11))));
    #pragma endscop
}
