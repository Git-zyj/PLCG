/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (i_0 % 2 == 0) ? (((!((max(((255 % (arr_10 [6] [i_1] [i_0] [i_2]))), ((172 >> (var_11 + 88))))))))) : (((!((max(((255 * (arr_10 [6] [i_1] [i_0] [i_2]))), ((172 >> (var_11 + 88)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (((max(36, (arr_16 [i_0] [i_3])))) ? (max((min((arr_5 [i_0] [i_1] [4]), 3547138132797763458)), (arr_11 [i_4] [i_0] [i_0] [i_0]))) : (((((arr_12 [i_4] [0] [i_2] [i_0] [i_0] [i_0]) && var_1)))));
                                var_19 = (~27668);
                                var_20 = (max(var_6, (max(((-(arr_10 [i_0] [i_1] [i_0] [i_0]))), ((36 ? (arr_0 [i_0]) : var_11))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_4] = ((0 ? var_12 : 1));
                                var_21 = (((arr_17 [i_0] [i_0] [i_0]) ? (min(((262016 >> (var_9 - 18129869984187735993))), (~var_7))) : (((~((min(var_2, (arr_11 [i_0] [i_0] [i_3] [i_4])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_23 [4] [i_0] [i_2] [i_0] [i_0] = (min(65534, 262008));
                                var_22 = (min(var_22, (((((((1 ? 21654 : 65535)) / (((arr_17 [4] [4] [4]) - -831967756)))) + (min((arr_2 [8]), var_16)))))));
                                var_23 &= ((43881 ? -75 : var_13));
                            }
                        }
                    }
                    var_24 = var_10;
                }
            }
        }
    }
    var_25 = (var_2 ? ((min(var_1, ((max(var_15, var_15)))))) : -var_12);
    #pragma endscop
}
