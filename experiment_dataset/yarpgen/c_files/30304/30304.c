/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_18 = -28510;
                    var_19 ^= var_7;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [17] = (((arr_4 [i_0]) - 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_4] [i_5] = 0;
                                arr_15 [i_0] = ((arr_1 [i_1] [i_5]) % (arr_6 [i_1] [i_1] [0]));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = (max(1, var_4));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] = 2083157253291809329;
                                arr_24 [i_0] [i_1] [0] [i_6] [i_0] = (arr_1 [i_0] [i_1]);
                            }
                        }
                    }
                }
                arr_25 [4] [i_1] [18] &= (var_6 != ((-var_16 ? (1 / var_16) : (min(-5868313333878653850, var_12)))));
                var_20 -= (arr_11 [i_0] [1]);
                var_21 ^= var_2;
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
