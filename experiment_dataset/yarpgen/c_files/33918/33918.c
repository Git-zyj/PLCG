/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((0 ? ((120 ? var_1 : var_6)) : -28303)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [0] [i_3] = (((65518 & var_7) | (var_4 ^ 896)));
                            arr_10 [i_3] [i_1] [i_2] = (min(((((((var_9 ? 18 : var_7))) ? ((max(var_3, var_0))) : 0))), (((((max(var_4, (arr_7 [7] [i_1] [i_2] [i_3]))))) ^ (max((arr_8 [i_3] [15] [i_1] [i_0]), var_3))))));
                            arr_11 [i_3] [i_1] [i_2] [i_3] = var_8;
                        }
                    }
                }
                var_12 -= (((((((var_9 >= (arr_4 [i_0])))) <= var_7)) ? (((max(28315, (arr_4 [i_0]))))) : (((arr_2 [i_0]) ? ((65415 ? (arr_4 [9]) : var_2)) : (max((arr_3 [0] [i_1]), var_2))))));
            }
        }
    }
    var_13 = var_9;
    var_14 = 0;
    var_15 = (max(var_9, ((~((-1 ? var_7 : var_0))))));
    #pragma endscop
}
