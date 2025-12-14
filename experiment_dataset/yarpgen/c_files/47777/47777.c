/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~45);
    var_13 ^= -var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(((~(!16063))), (arr_9 [i_0 + 1] [i_1] [i_2])));
                    arr_10 [i_2] = (--1590226842);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 ^= ((-((-(arr_3 [i_0 + 1] [i_0 - 1])))));
                                arr_18 [i_0] [i_0] [i_3] [i_0 + 1] [i_0] [i_0] [i_0 - 1] |= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
