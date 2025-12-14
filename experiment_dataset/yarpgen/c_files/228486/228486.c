/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((min((arr_2 [i_0]), 79)) & (arr_3 [i_0] [i_1] [i_0]))) ^ (((((arr_2 [i_0]) == var_12)))));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = ((79 ^ ((8567107020617501816 ? 467992936 : (arr_7 [i_1] [i_1] [i_2] [i_3])))));
                                var_16 = var_7;
                                var_17 = (~2137453788);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_9 [i_0])));
                                var_19 *= (arr_17 [i_2 + 2] [i_5]);
                                var_20 = (((arr_12 [i_0] [i_0] [i_6 - 2] [i_2 - 3] [6]) == -73));
                                var_21 += -59834;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] [i_0] = (!var_1);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_22 = ((((((arr_10 [i_2 + 3] [i_1] [i_2] [i_7]) ? var_3 : (arr_7 [i_0] [i_1] [i_2] [i_7])))) ? (arr_11 [i_0] [i_1] [4] [i_7 + 1] [i_7 + 1] [i_2 - 3]) : 6));
                                arr_25 [i_1] [6] [i_1] [i_1] [i_8] [i_0] [6] = ((!(arr_23 [i_0] [i_7 - 3] [i_8] [7] [i_2 + 1] [i_0])));
                            }
                        }
                    }
                    var_23 = ((!-1430512113) % (var_6 * var_14));
                }
            }
        }
    }
    #pragma endscop
}
