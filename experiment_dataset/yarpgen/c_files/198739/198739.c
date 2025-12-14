/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_1] [i_1] [21] [i_3] = ((var_5 ? ((min(52127, 65535))) : ((((min(var_4, (arr_3 [i_2])))) ? (13409 + -282388993) : (max(13409, -10))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_15 = (max(var_15, ((min(((var_10 ? -31831 : (arr_1 [22]))), ((-1536314643 ? (arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_4]) : (arr_1 [i_0 - 1]))))))));
                            var_16 *= (min((arr_0 [i_0 - 1]), (((288281204 ? 1 : 13415)))));
                            var_17 ^= (((((max(var_6, 4113247982)))) ? (min(((max(52127, 1))), var_5)) : ((min(-10, 0)))));
                            var_18 = (max(var_18, (arr_7 [i_3] [i_2] [i_1])));
                            var_19 *= (min((arr_5 [i_0 - 1]), (((arr_3 [i_2]) << (((arr_3 [i_1]) - 5723033015867108566))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 ^= (10084982081618841894 ^ 13409);
                            var_21 = ((((min((var_9 | 593204989), ((~(arr_0 [i_1])))))) ? (((((var_9 ? var_11 : var_3))) ? (arr_2 [i_0 + 1] [i_1]) : (((max(var_8, 0)))))) : ((min(var_14, (1 / 1))))));
                        }
                        var_22 = (max(var_22, (max(52125, 2640428148))));
                    }
                }
            }
        }
        var_23 = ((((-30 ? -7767857566741363928 : 174)) + (((-1319654267 ? 1 : 539)))));
    }
    var_24 = var_9;
    #pragma endscop
}
