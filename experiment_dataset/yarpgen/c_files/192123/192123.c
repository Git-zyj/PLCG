/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] = var_16;
                                var_19 = (arr_2 [i_2]);
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] = (((((0 ? (arr_0 [i_3]) : (arr_0 [i_0])))) ? (((arr_0 [i_0]) * (arr_0 [i_3]))) : ((1 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                                var_20 &= var_9;
                            }
                        }
                    }
                }
                var_21 = ((((max((!-18198), (arr_2 [i_0])))) ? var_0 : var_6));
                var_22 = ((-6385 ? -55 : -7979));
                arr_14 [i_1] [i_1] = (((arr_10 [1] [1] [12] [i_0]) ? ((max((arr_10 [i_0] [i_0] [i_0] [i_0]), var_1))) : (((arr_10 [i_0] [i_0] [i_0] [i_1]) ? (arr_10 [i_0] [i_1] [1] [i_1]) : (arr_10 [i_0] [i_1] [9] [i_1])))));
            }
        }
    }
    var_23 *= ((((((max(0, var_3))) ? 1 : var_2)) ^ var_18));
    var_24 = (max((((!1) ? 1 : var_10)), ((min(var_2, (1 || var_6))))));
    #pragma endscop
}
