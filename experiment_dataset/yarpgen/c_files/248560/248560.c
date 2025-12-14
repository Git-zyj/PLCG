/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_4] [i_1] [i_4] = 331682386;
                                var_13 ^= 54002;
                                var_14 = (arr_5 [i_0]);
                                var_15 = 10;
                                arr_16 [i_0] [i_0] [i_1] [i_2 - 3] [i_0] [13] [i_1] = var_4;
                            }
                        }
                    }
                    var_16 = (arr_5 [i_2 - 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_17 = (arr_18 [1] [i_6]);
                arr_21 [i_5] [i_6] = -var_1;
            }
        }
    }
    #pragma endscop
}
