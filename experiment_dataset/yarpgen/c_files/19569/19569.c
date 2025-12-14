/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 2950641796));
                var_13 = var_1;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (-4883202181797217454 || 2950641796)));
                                var_15 = var_2;
                                var_16 = min(((((((arr_13 [i_0 - 1] [i_1] [12] [i_3] [i_4]) ? (arr_6 [i_1] [i_1] [i_1]) : -2147483646))) ? (min((arr_5 [i_1]), (arr_16 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_2 - 1]))) : (var_4 + var_1))), (((~(arr_4 [i_1 + 2] [i_1 - 2])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_17 = ((235 ? (((arr_13 [i_0] [i_0] [8] [i_0] [i_0]) * (var_4 * var_8))) : 239));
                            arr_24 [i_6] [20] [i_1 + 1] [i_0] = (max(((2950641804 ? (arr_8 [i_0 - 1] [i_0 - 1] [i_6]) : (arr_1 [i_0] [i_5]))), (arr_8 [i_0 - 1] [i_1 + 1] [i_5])));
                            var_18 -= -5077689883064200811;
                        }
                    }
                }
                arr_25 [0] [0] [i_1] = ((2950641796 < ((max((arr_2 [i_0]), ((-(arr_20 [i_1 - 2]))))))));
            }
        }
    }
    var_19 = var_10;

    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_20 = (arr_6 [i_7 - 1] [i_7] [i_7 - 1]);
        var_21 = (arr_15 [1] [i_7 - 1] [13] [1] [i_7]);
    }
    #pragma endscop
}
