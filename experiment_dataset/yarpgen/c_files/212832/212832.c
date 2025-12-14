/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (min((arr_0 [i_0 - 2]), ((41 ? 3834460862 : 460506448))));
                var_15 ^= (arr_3 [i_0]);
            }
        }
    }
    var_16 = 3834460871;
    var_17 += ((((((var_1 >= var_4) || var_1))) != ((var_6 ? ((var_5 ? var_11 : var_13)) : var_11))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = ((-(((arr_6 [i_6]) ? var_8 : (arr_9 [i_2] [i_3 + 2])))));
                                var_19 = (var_2 * (((arr_13 [i_3] [i_3 - 1] [i_3 + 2]) ? (((var_9 ? 252 : var_13))) : (arr_14 [5] [17] [i_3] [6]))));
                                var_20 = ((min(721302566, 4447999503663752794)));
                            }
                        }
                    }
                    arr_18 [i_2] [i_3] [i_4] = ((-(((~var_6) | (var_11 & var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
