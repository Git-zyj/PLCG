/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = (((((((((arr_1 [18] [i_1]) ? var_7 : var_8))) ? var_9 : ((65535 ? 255 : var_3))))) || var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((!(arr_1 [i_1 - 2] [i_3])))) <= (((arr_1 [i_1 - 2] [i_2]) ? var_9 : (arr_1 [i_1 - 2] [i_4])))))));
                                arr_10 [i_0] [i_1] [0] [i_4] [0] [i_1] [i_3] = ((!((((((255 ? (arr_0 [2]) : var_3))) ? (-2872 > 4) : (arr_0 [i_1 + 1]))))));
                                var_12 = (max(var_12, ((((((max((arr_4 [i_1 - 1] [i_1 - 2] [i_4 - 1] [i_4 - 1]), 37583)))) <= (min((arr_6 [i_0] [i_1 - 1] [i_4 + 3]), 8)))))));
                                var_13 ^= var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_14 -= ((-4 ? ((max((min((arr_12 [i_0] [i_1 + 1] [i_2] [i_1]), 4294967291)), (((8 ? 0 : var_2)))))) : (((arr_5 [i_1 + 1] [i_1] [i_2]) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : 18446744073709551607))));
                                arr_16 [i_6] [i_2] [i_5] [i_6] = (-(var_1 / var_0));
                                var_15 = (max(var_15, ((((((((max(18446744073709551601, (arr_9 [i_0] [i_0] [i_2] [i_5] [i_6])))) ? (((min(var_9, (arr_14 [i_1] [i_5] [0]))))) : (arr_13 [i_6] [i_5] [i_1])))) ? ((((arr_7 [i_1 - 2] [i_2] [i_6] [i_6] [i_6 + 1] [i_6 + 1]) < var_2))) : var_7)))));
                                arr_17 [i_0] [4] [i_0] [i_6] [i_5] [i_6 + 1] [i_6 + 1] = (((~var_9) ? (arr_0 [i_5]) : 4));
                                var_16 = (min(8, (max((var_5 || var_0), (var_5 - var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_8 ? ((-6682094574445384763 ? -6682094574445384763 : 7)) : (((min((var_7 || var_4), var_7)))));
    var_18 = var_3;
    #pragma endscop
}
