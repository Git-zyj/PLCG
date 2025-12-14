/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 += (arr_12 [4] [i_2] [1] [i_4]);
                                var_16 ^= 22;
                                var_17 = (max(var_17, var_12));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [9] [13] = (((-(arr_2 [i_1] [i_1 - 2]))) << (((min((arr_9 [15] [i_0 - 2] [i_2] [i_1 - 2]), (arr_9 [10] [i_0 - 1] [i_2] [i_1 - 2]))) - 52006343)));
                            }
                        }
                    }
                }
                arr_16 [i_1] = (min(((max((((arr_10 [i_0]) ? var_11 : 247)), (arr_9 [i_0] [14] [i_1 - 3] [i_1 + 1])))), var_8));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_10 [1])));
                            var_19 = (min(var_19, (((min(var_13, var_11))))));
                            arr_23 [i_0] [i_1] = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
