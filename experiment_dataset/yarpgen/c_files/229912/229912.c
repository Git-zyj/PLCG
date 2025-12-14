/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max((((((4199225270 ? 0 : var_8))) ? ((max(29756, var_6))) : ((min(var_8, var_4))))), ((((65522 ? var_6 : 65535))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, (((((var_6 && ((min(1496846992, 3519658286))))) ? 125829120 : var_0)))));
                            var_12 &= (arr_6 [i_0] [i_0]);
                        }
                    }
                }
                var_13 = (((((((arr_0 [i_0]) ? 686192603 : (arr_0 [i_0]))))) ? (((var_5 ? var_2 : 65535))) : ((65533 ? (max(var_9, (arr_8 [i_0] [i_1] [i_0] [1]))) : (arr_9 [i_0] [i_0] [i_0 + 3] [10] [i_1] [i_1])))));
                var_14 ^= var_7;
                var_15 = (((((arr_1 [i_0 - 4]) != (arr_6 [i_0] [i_1]))) ? -0 : var_1));
            }
        }
    }
    #pragma endscop
}
