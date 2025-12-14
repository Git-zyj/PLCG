/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = (-26644 >= -26644);

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_21 = (max(var_21, 26644));
                                var_22 ^= ((~((1254713759 ? (arr_11 [i_3] [i_4 + 1] [i_4] [i_4 - 1] [i_3]) : -1265323464))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = ((var_7 ? (max(1361556850, 0)) : var_16));
                arr_14 [i_0] [i_0] = (max((min((arr_4 [7] [i_0] [7] [i_0]), (arr_2 [i_0]))), 26643));
            }
        }
    }
    var_23 = (min(var_23, ((max(var_8, (((var_5 - var_9) | ((var_12 ? 1 : var_0)))))))));
    #pragma endscop
}
