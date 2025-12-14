/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] &= ((var_1 ^ (min((max(var_0, var_5)), (var_3 % var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = var_9;
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [1] [i_4] = (((var_7 && var_6) >= var_9));
                            }
                        }
                    }
                    var_11 = (min(var_11, var_9));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] = (max(((min(var_9, var_8))), (min(var_8, var_6))));
                                var_12 = (((max(var_7, var_0)) | (((max(var_8, var_8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, var_7));
    var_14 &= (min((((max(var_6, var_1)) % (var_7 | var_0))), var_7));
    #pragma endscop
}
