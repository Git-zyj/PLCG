/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 698951766;
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (28672 < var_4);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [6] = ((48193 ? (arr_6 [i_3] [i_1]) : (max((6403582393525006232 && -28680), (max(var_1, 12043161680184545382))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [0] = (99 < 17357);
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = (max((((var_6 ? var_9 : ((((arr_4 [i_0] [i_4]) && -417319022)))))), (min(28675, var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
