/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_6 ? var_7 : var_8)) < var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_1 [i_0 + 4] [i_0]) ? (((arr_1 [i_0 + 2] [i_0]) - (arr_1 [i_0 + 4] [i_0]))) : ((min(var_8, var_8)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [1] = var_5;
                            var_13 |= ((var_8 ^ (((arr_8 [i_3] [i_3] [i_3] [9]) ? 1046528 : (-32767 - 1)))));
                        }
                    }
                }
            }
        }
    }
    var_14 = 0;
    #pragma endscop
}
