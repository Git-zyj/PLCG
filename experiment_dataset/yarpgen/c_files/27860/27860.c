/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_13 ? (-2147483647 - 1) : (-2147483647 - 1)))) ? var_7 : var_3))) ? (max(((20097 ? 3145728 : var_8)), (((var_17 ? var_15 : var_5))))) : ((((9 ? var_17 : 679576564)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((-((-26561 ? -1880256137 : (arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 + 3] [i_0 + 3] [i_2] [i_3] = -71;
                            arr_10 [i_3] = ((+(((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? 534493656 : var_0))));
                            var_20 += (--1);
                            arr_11 [i_0] = var_13;
                        }
                    }
                }
                var_21 = (min(var_21, ((max(((((((var_1 ? 3615390732 : 1))) ? (((max(0, var_7)))) : (arr_1 [i_1 - 2])))), (min((((var_9 ? 679576559 : (arr_6 [i_0 + 1] [i_0 + 1] [i_1] [8])))), (((arr_2 [i_0] [i_1] [i_1]) ? (arr_2 [i_0] [i_0] [i_1 + 1]) : (arr_5 [i_1] [i_0]))))))))));
            }
        }
    }
    var_22 |= ((var_8 % (((var_14 != ((var_13 ? 577460427 : 2245871388)))))));
    var_23 = var_16;
    #pragma endscop
}
