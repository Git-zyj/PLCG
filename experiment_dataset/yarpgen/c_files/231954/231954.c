/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min(var_17, ((min((max(var_14, (max(var_11, var_6)))), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max((max((arr_4 [i_1]), (arr_4 [i_0]))), (max((arr_4 [i_1]), (arr_4 [i_1])))));
                arr_5 [i_0] = (min((max((arr_0 [i_1]), (arr_4 [i_0]))), (max(((max((arr_4 [i_1]), (arr_4 [i_0])))), (arr_0 [i_0])))));
                var_19 &= (arr_4 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_11 [i_3 - 3] [i_3 - 3] [i_3 - 3])));
                                var_21 = (arr_6 [i_2] [i_3 - 1] [i_2]);
                                var_22 *= (arr_16 [i_3] [i_1] [i_1] [i_3] [i_4]);
                            }
                        }
                    }
                }
                var_23 = arr_13 [i_0] [i_1] [i_1] [i_1];
            }
        }
    }
    #pragma endscop
}
