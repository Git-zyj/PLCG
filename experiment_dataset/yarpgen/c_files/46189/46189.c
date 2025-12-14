/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((min((var_2 && var_3), (max(var_0, -6))))) >= (((((min(var_11, -21743))) && ((max(var_2, -3)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [13] [i_2] [i_2] [15] = (max(((min((((arr_0 [i_0] [i_0]) - 21743)), ((max(var_9, 21747)))))), (max(((min(var_0, var_10))), (min(1573559852, -21747))))));
                            var_14 = (max(((max((min(var_0, -21743)), (max(var_0, (arr_0 [i_0] [i_0])))))), (max((min(var_12, (arr_1 [8] [i_3]))), ((max((arr_10 [16] [i_3] [i_3] [i_3] [1]), 228)))))));
                        }
                    }
                }
                arr_12 [6] [6] &= ((((max(((max(16, 212))), (max((arr_6 [i_0] [2]), 9575))))) & (max((min(var_10, var_12)), ((min(var_12, (arr_0 [18] [14]))))))));
                var_15 = (min((min((var_10 / var_5), (min(2721407427, -22246)))), (((((max(28, 16)))) + (min((arr_8 [i_0] [i_1] [i_1 - 1] [i_0]), (arr_1 [i_0] [i_1])))))));
                var_16 = ((((max((max(0, 33)), (22658 != 21742)))) & (min((((((arr_3 [6]) + 2147483647)) << (13499 - 13499))), ((min((arr_7 [i_1 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]), var_4)))))));
                arr_13 [1] [i_0] = (max((((max(var_0, var_10)) / (max(665664543, var_11)))), (((((min((arr_3 [i_0]), var_0)) + 2147483647)) << ((((max(30128, -16310))) - 30128))))));
            }
        }
    }
    var_17 = (1798981410 & 28);
    #pragma endscop
}
