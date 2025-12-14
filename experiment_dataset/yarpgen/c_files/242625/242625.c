/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 18446744073709551605;
    var_16 = ((!(((~(!var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((-(max(1, ((165 ? -23 : 1))))));
                var_17 = ((+(((max((arr_1 [i_0]), var_12)) * (((-(arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((18446744073709551615 && var_3) & (((max((arr_3 [i_0 + 1]), (arr_2 [i_0]))) | 146))))));
                                var_19 = 3367955625;
                                arr_16 [i_1] [i_1] [i_4] &= (((arr_15 [i_2 + 2] [i_0 + 1]) ? (max((arr_3 [i_0 + 1]), 19)) : (arr_12 [i_2 - 2] [i_2 - 2] [i_4] [i_4] [i_4] [i_2 - 2] [i_3])));
                                arr_17 [i_3] [i_3] [i_2 + 1] [i_2] [i_4] |= (+(((arr_7 [i_2 + 2] [i_2 - 1]) ? 13302471052654053279 : 121)));
                                var_20 |= (min(((max((((-(arr_14 [i_0] [i_0])))), -2664270429366346642))), ((((var_5 ? 4294967288 : 72057594037911552)) | (arr_8 [i_2])))));
                            }
                        }
                    }
                }
                var_21 += ((!((((!-3) ? (max((arr_12 [i_0 + 3] [i_0 - 1] [i_1] [i_1] [i_1] [i_0 + 3] [i_0 + 3]), (arr_9 [i_1] [i_1] [i_1] [i_1]))) : (((arr_0 [i_0 + 3]) ? (arr_1 [i_1]) : var_13)))))));
            }
        }
    }
    #pragma endscop
}
