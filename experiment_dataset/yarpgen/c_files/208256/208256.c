/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= ((((((arr_2 [i_0] [i_0]) + var_12))) ? (arr_3 [i_0]) : var_0));
                var_16 = (min(var_16, (((83 ? 1761288442 : 178)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_9 [i_2] [2] [i_2] = var_7;
                        var_17 ^= (((((-33 ? (arr_0 [i_3 - 1]) : 2533678854))) ? ((((!(arr_2 [i_0] [i_1]))))) : (arr_5 [i_0])));
                        var_18 = (-((1582540632 ? 18446744073709551597 : 1761288436)));
                        arr_10 [i_0] [10] [i_2] &= ((0 && (((var_11 ? (arr_7 [i_0] [i_1 - 1] [i_0] [i_3]) : (arr_4 [i_0] [i_1] [i_2] [i_0]))))));
                    }

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_19 = (min(var_19, (((!((((arr_0 [1]) / 2533678863))))))));
                        var_20 = ((246 ? 252 : 63));
                        var_21 ^= var_4;
                    }
                    var_22 = var_9;
                    var_23 = var_7;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_24 += (arr_3 [i_5 + 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_6] [1] [i_6] [i_6] [i_7] [6] = (arr_17 [4] [i_1 - 1] [i_1 - 1] [i_1]);
                                var_25 = 4269469715;
                                var_26 = (max(var_26, ((((arr_4 [i_1 - 1] [i_1 - 1] [i_5] [i_0]) * (arr_13 [i_1 - 1] [i_6] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
