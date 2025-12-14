/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (~var_12)));
                                arr_14 [i_0] [i_2 - 2] [i_0] [i_4] [i_3] = ((!((max(var_3, (arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))));
                                var_22 = (min(((max(var_16, (arr_10 [i_0] [i_0] [i_0] [1] [i_0] [i_0])))), (min((min(var_4, var_19)), ((min(var_1, (arr_5 [i_0] [i_0]))))))));
                                var_23 = (max(var_23, (((max(((min(var_5, var_7))), -var_19))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_7, (!var_13)));
                                var_25 = var_2;
                                arr_22 [1] [11] [i_6] [i_5] [i_0] [i_0] [i_0 + 1] &= (min(var_4, (max((arr_16 [10] [i_5] [i_0]), var_2))));
                                arr_23 [1] [i_7] [i_6] [i_5] [i_1] [i_0] [i_0] = (min(var_16, ((max(var_3, var_12)))));
                                var_26 = (min(var_26, ((((!((min(var_15, var_15)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
