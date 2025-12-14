/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((max(var_5, var_4))) ? var_9 : ((max(var_3, var_3))))) << var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = -2739863160;
                arr_5 [i_0] [i_1] = (((242 ? (arr_3 [i_1] [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0] [i_1]))));
                arr_6 [i_0 + 1] [i_0] = (max(1, ((~(min((arr_2 [i_0]), 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_13 = 2739863160;
                                var_14 = var_9;
                                var_15 = var_0;
                            }
                        }
                    }
                }
                var_16 ^= (-(min(2739863184, 105)));
                arr_22 [i_2] [i_2] = (max(var_2, (46186 || 242)));
            }
        }
    }
    #pragma endscop
}
