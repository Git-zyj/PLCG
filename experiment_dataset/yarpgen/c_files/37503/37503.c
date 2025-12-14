/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 -= (min(59593, -93));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (((((min((var_10 / var_0), var_0)) + 2147483647)) >> ((((var_5 << (((var_0 + 635) - 4)))) - 241172474))));
                                arr_15 [i_0] = var_11;
                                var_18 = var_10;
                                var_19 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((var_8 << (var_12 + 7486858040493514811))) >> (((var_11 | var_14) + 3218)))) * (var_10 <= var_4)));
    #pragma endscop
}
