/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [8] |= (min((~var_8), (max(var_4, var_12))));
                arr_5 [i_0] [i_0] = (min((min((!var_4), var_12)), ((min(20015, -625896555)))));
                arr_6 [i_0] [i_0] = var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 = ((!((min((max(var_2, var_12)), var_6)))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 -= (max((!var_12), (min(var_4, ((min(var_11, var_11)))))));
                                arr_20 [i_2] [i_3] [i_2] [i_2] [i_6] = ((!((min(168, 4294967295)))));
                                arr_21 [i_6] [i_5] [12] [i_3] [i_2] [i_6] = (max(var_12, ((min(var_2, var_3)))));
                                var_16 = (min(((min(var_2, var_11))), (max(((max(var_7, var_0))), (max(var_4, var_11))))));
                            }
                        }
                    }
                }
                var_17 = (min((min(var_3, var_12)), 16));
                arr_22 [i_2] [i_2 + 4] [i_3] = (min(((min(var_2, (((var_11 ? 1527323754 : -1441588744)))))), (max(-var_9, (min(var_8, var_1))))));
            }
        }
    }
    var_18 = ((var_11 ? (max(var_3, (min(var_8, var_11)))) : (((-var_8 ? (max(var_7, var_5)) : -var_11)))));
    var_19 = var_0;
    #pragma endscop
}
