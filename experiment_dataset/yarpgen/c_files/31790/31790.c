/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((((min(var_15, (-1 >= var_5)))) ? (var_11 != -13969118901567028353) : (!-2342903450)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = ((((-(max(var_12, var_11)))) >= ((max(((var_0 ? (arr_5 [1] [4] [i_4]) : (arr_3 [i_3]))), (var_16 || var_9))))));
                                var_20 = var_15;
                                var_21 = ((var_12 ? ((((var_2 & 0) ? (arr_1 [i_2] [i_2 + 2]) : ((116 ? var_15 : 27273))))) : (max(((min(var_15, var_14))), (-541110322 | 11330270084634861570)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
