/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = (max(((min((min(1, var_7)), ((min(1, (arr_2 [i_0] [9] [i_0]))))))), ((((min(8, (arr_0 [i_0])))) ? (min((arr_5 [i_0]), var_9)) : (min((arr_6 [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_1] |= (min((min((max(2042834838, 4166435065278090157)), ((min((arr_12 [i_0] [i_0] [i_0] [i_2] [i_0]), var_6))))), (max(((max((arr_0 [i_2]), 8))), (min(8, (arr_5 [i_4])))))));
                                var_11 ^= (max(((((((var_3 ? (arr_3 [i_0] [1] [i_2]) : 1))) ? (min((arr_11 [i_1] [i_0] [i_1] [i_2] [i_1] [i_0] [i_1]), var_8)) : (min(var_3, var_7))))), ((((min(var_2, var_7))) ? (((min((arr_7 [16] [21] [9] [i_1] [i_0]), (arr_9 [i_1] [i_1] [i_3 + 2] [i_4]))))) : (min((arr_8 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0]), -5286556088810734332))))));
                                var_12 = ((((min((arr_4 [i_0] [i_0] [i_3 - 1] [i_3 + 2]), 3681823536413150416))) ? ((var_8 ? var_2 : var_0)) : (min(var_3, 7))));
                                var_13 -= (min(((min(24, var_0))), (min(-9016005928525969630, 4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min((min(((1378336795 ? var_3 : var_7)), ((min(-117, var_7))))), ((min((min(var_8, var_5)), (min(var_1, var_2)))))));
    #pragma endscop
}
