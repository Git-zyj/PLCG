/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = max(-24912, ((4104966700462197997 ? (arr_0 [i_1]) : (!-24909))));
                var_16 = ((arr_0 [i_0]) + 262143);
                var_17 = (min(var_17, (!0)));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (arr_2 [i_0] [i_1] [i_2]);
                    var_19 &= (max((max((max((arr_0 [i_2]), (arr_7 [i_2]))), (!15))), (max(((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_2] [i_1] [i_0])))), (max(-729401990, var_7))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_20 = (((arr_3 [i_4]) ? (arr_16 [i_5] [i_0] [i_3] [i_1] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_21 = ((!(arr_11 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] = 8545210308110527922;
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
