/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -21175;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max((((var_7 ? (arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_4 [i_3 + 2] [i_3 - 1] [2])))), (((arr_0 [i_3 - 1]) ? var_1 : 0)))))));
                                var_16 = var_12;
                            }
                        }
                    }
                    var_17 = (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (arr_7 [i_1] [i_1] [8] [i_2])))) ? ((min(var_4, var_13))) : (((((var_8 ? var_5 : var_9))) & ((var_13 ? 18446744073709551615 : var_1)))));
                }
            }
        }
    }
    var_18 = ((-(min((min(var_2, var_7)), ((8 ? var_7 : var_8))))));
    #pragma endscop
}
