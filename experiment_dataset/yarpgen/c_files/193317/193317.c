/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((var_4 / 1) ? (var_6 <= var_1) : var_9)) % ((var_7 ? (min(15823726892110868305, var_4)) : ((min(var_4, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (arr_3 [i_0] [i_1] [i_1]);
                    arr_10 [i_1] [i_2] = ((var_2 ? (arr_8 [i_0 - 2] [i_2] [i_1 + 1] [i_1]) : ((((arr_8 [i_0 - 2] [i_1] [i_1 + 1] [i_0]) >= 255)))));
                    var_13 = (((arr_0 [i_1 + 1]) ? -1099434928 : (arr_0 [i_0 + 2])));
                    var_14 *= (arr_6 [i_1 + 1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (((((((min(var_7, (arr_4 [i_2]))))) < (min(7828241584169364504, 0)))) ? (((((-17237 ? var_6 : (arr_6 [i_1] [i_1] [i_1])))) ? ((((arr_6 [i_1] [i_3] [i_1]) ? (arr_3 [i_0] [i_2] [i_4]) : (arr_11 [i_0] [i_1] [0] [i_3])))) : ((9223372036854775805 ? var_8 : 9)))) : ((((arr_6 [i_0] [i_1] [i_1]) / var_5)))));
                                var_16 = (+((250895280 ? (arr_9 [i_1]) : -10)));
                                var_17 = (arr_16 [i_0 + 1] [i_1] [i_0] [i_0 - 2] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
