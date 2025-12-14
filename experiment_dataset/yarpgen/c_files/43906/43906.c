/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (4294967295 < 156);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 &= var_10;
                                arr_15 [i_2 + 2] [i_3] [5] [5] [i_2 - 1] = var_8;
                            }
                        }
                    }
                    var_18 = (arr_10 [i_0] [4] [i_2] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = ((var_0 ? var_2 : var_3));
                                var_20 ^= (((arr_16 [i_6] [6] [i_6 + 2] [14]) > 3));
                            }
                        }
                    }
                    var_21 = ((+(((((arr_4 [i_0] [i_2 - 1]) ? var_2 : (arr_9 [i_2] [i_2]))) - var_6))));
                }
            }
        }
    }
    var_22 = ((-1 / (((((var_2 ? var_5 : var_6))) * var_2))));
    var_23 = (((var_8 / var_14) ? ((3021597670 ? -309191566 : -7421952840595481092)) : var_11));
    #pragma endscop
}
