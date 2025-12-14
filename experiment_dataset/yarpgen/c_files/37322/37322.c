/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((var_11 != ((1 ? var_8 : 1040187392)))) ? ((-1040187409 ? var_10 : (1091854665756339449 && 1091854665756339469))) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 -= (64 == (min(520192, 8622677738310119485)));
                    var_14 = ((((arr_0 [i_0] [i_0]) / (max(5114721398969599227, var_5)))));
                    arr_9 [i_0] [1] [i_1] = (max((((var_0 - (arr_7 [i_2] [i_1] [i_0])))), (((arr_7 [i_0] [i_1] [i_2]) - 1091854665756339428))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [2] [i_1] = (((arr_12 [13] [13] [5] [13] [i_3] [9]) ? (arr_0 [i_4 - 2] [i_3]) : 840822128));
                                arr_16 [i_4 + 3] = ((max((arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [13]), (min(2607602500, (arr_7 [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 ^= 2607602491;
    #pragma endscop
}
