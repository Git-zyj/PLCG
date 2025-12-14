/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] [i_1] = var_18;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (((((-(arr_2 [i_1] [i_3])))) ? var_6 : ((var_10 ? (arr_2 [i_1] [i_1]) : var_7))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [12] [i_3] [i_4] &= ((32764 ? (-32767 - 1) : 11680587660438615301));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [1] [1] [i_2 + 1] = (arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]);
                                arr_16 [3] [i_0 - 1] [i_2] [i_2] [i_4] [3] [i_3] = ((arr_8 [i_0] [i_1] [i_3] [8] [i_4]) - (arr_8 [i_0] [i_0] [i_3] [i_3] [i_4]));
                            }
                            var_20 = ((~(((arr_1 [i_0 - 1] [i_2 + 1]) & -60))));
                        }
                    }
                }
                arr_17 [i_0] [i_0 - 1] [i_1] = ((32764 ? 1 : 1));
            }
        }
    }
    var_21 = 14033830176335189005;
    var_22 = ((((((min(var_16, 1))))) ? ((3531700785820099380 ? 1 : (~var_3))) : 1));
    var_23 = var_11;
    #pragma endscop
}
