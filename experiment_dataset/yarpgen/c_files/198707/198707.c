/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 65527;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (var_9 ? 1706686786257760593 : (min(var_2, var_6)));
                var_12 = (max(var_12, (((((max(1436507599, 31129))) <= ((-((min(21881, 8))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (((var_3 ^ var_0) | 30));
                                var_14 = var_1;
                                arr_13 [8] [i_1] [5] [i_1] [i_2] = 22725;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-0 ? var_3 : (+-96)));
    #pragma endscop
}
