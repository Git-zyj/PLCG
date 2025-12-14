/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 = -var_3;
                            var_12 *= 16282151955087326070;

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_13 = (min(var_13, (((~16282151955087326068) ^ 9137403100440973010))));
                                arr_13 [i_4] [i_3] [10] [i_1] [i_0] [i_0] [i_0] = ((7854135829590732628 > (~-var_3)));
                                arr_14 [i_1] [i_4] = (18 / 16282151955087326086);
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (4037559726837711266 ? ((9780009692887164613 ? (arr_8 [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2]) : (arr_2 [i_3 + 1]))) : (+-16282151955087326069));
                                var_14 = (min((((!(arr_10 [i_0] [i_1] [i_2] [i_1])))), (4842450063311267240 / 18446744073709551607)));
                                var_15 = 18446744073709551599;
                                var_16 = 7056269395525513708;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_17 = (2940172661062305689 ? 4382268898324224425 : 979416537807078274);
                                arr_22 [i_6] [1] [5] = (~12631350463362024236);
                            }
                            var_18 = ((!(((-((17 ? 13913342176536945503 : var_4)))))));
                            var_19 = (3 | 12507164412189729692);
                        }
                    }
                }
                arr_23 [9] [i_1] = (262462016575896277 % ((~(min(18184282057133655346, 10480343793500020340)))));
            }
        }
    }
    var_20 *= ((-var_8 ? (~var_9) : 2940172661062305681));
    var_21 = 20;
    #pragma endscop
}
