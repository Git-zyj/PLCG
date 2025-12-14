/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 -= (!20);
                    var_15 = (arr_1 [i_0] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            {
                var_16 = (max(var_16, ((((0 & -596863408) >> 0)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_17 = (-4420194915965048534 || ((min(((((arr_14 [i_3] [i_5] [i_6] [i_6]) ? 1 : var_13))), ((var_9 ? var_10 : var_10))))));
                                arr_18 [i_3] [i_3] [i_7] = 255;
                                arr_19 [i_3] = (min(((max(-var_1, (~0)))), 18446744073709551615));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((var_8 && (((var_2 ? var_9 : var_12))))) ? (max(((128 ? var_8 : var_4)), (max(var_3, var_12)))) : var_7));
    #pragma endscop
}
