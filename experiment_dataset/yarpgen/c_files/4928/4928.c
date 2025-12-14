/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 ^= (min((1 + 14), ((((((var_6 > (arr_0 [i_0]))))) | ((-(arr_0 [i_1])))))));
                var_17 -= ((((min(16405391205019853561, 24))) ^ (((min(var_5, var_15))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_3] [i_2] [i_4] [i_3 - 1] [i_2] [11] = (min((max((arr_11 [i_2] [i_3]), (arr_11 [i_2] [i_3]))), (-32767 - 1)));
                            var_18 = ((min((arr_12 [i_2] [9] [i_3 + 1] [i_2]), (arr_12 [i_2] [16] [i_3 + 1] [i_5]))));
                            arr_20 [i_3] [i_3] [1] [i_5] = ((var_5 & (max((!var_9), (arr_10 [11] [14] [i_2])))));
                            var_19 = (max((arr_9 [i_3 + 1] [i_3] [i_3 + 1]), (max(((max(1671403588, (arr_11 [i_3 - 1] [i_3])))), (arr_7 [i_4])))));
                            var_20 = (arr_9 [i_2] [i_3] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_25 [i_2] [i_3] [i_6 - 2] [i_2] [i_3] [8] = (max(0, (arr_7 [i_2])));
                            var_21 = (max((arr_12 [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_3 + 1]), ((max(-7, -1673479624)))));
                        }
                    }
                }
                arr_26 [i_3] = 0;
            }
        }
    }
    #pragma endscop
}
