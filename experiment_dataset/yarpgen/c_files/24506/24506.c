/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((arr_6 [i_1] [i_1]) << (((min((min(var_5, var_6)), ((8388607 ? var_11 : var_10)))) - 11105198265106092568))));
                arr_7 [i_1] [3] = ((((var_4 ? ((1 ? var_6 : 42234)) : var_11))) || (((-8388623 ? (arr_1 [i_0 - 1] [i_1 + 1]) : var_7))));
                var_14 = var_10;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_4] [i_5] [i_6] = (((max(var_1, (arr_18 [i_2] [i_3] [i_2] [i_4] [i_5] [i_5])))));
                                var_15 = 8388607;
                            }
                        }
                    }
                    var_16 -= 1;
                    var_17 &= (min(1610612736, 1));
                    arr_21 [i_2] [i_2] [i_2] [4] = ((~(max(21792, (((var_10 ? (arr_0 [i_2] [i_2]) : (arr_11 [1] [6] [1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
