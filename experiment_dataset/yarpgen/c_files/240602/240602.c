/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 <= ((min(var_4, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 ^= ((~((-(arr_9 [i_0] [i_0] [i_0] [8] [i_0] [i_0])))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [6] = (((~(max(-35, var_8)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (((var_1 && 0) && ((max(1, (arr_5 [i_0] [i_1] [i_0]))))));
            }
        }
    }
    var_12 = var_5;
    #pragma endscop
}
