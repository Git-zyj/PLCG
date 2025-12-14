/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? (((-60 ? 100 : ((min(var_4, var_3)))))) : (--2132966201933035955)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (arr_11 [2] [i_1 - 1] [i_2] [i_2] [i_3] [1] [i_4 - 2]);
                                arr_13 [i_0 - 1] [2] [i_2] [i_4] [i_4 + 1] [7] [i_4 - 2] = ((var_0 ? ((~(min(-2048, (arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]))))) : (~13301)));
                                var_14 = (max(((((min(17284, (-127 - 1)))) ? (26638 && -5571401125251462561) : ((min(26638, 0))))), (((arr_6 [i_0] [i_1] [i_2]) ? (var_9 == var_5) : (var_10 | 2052904461)))));
                                var_15 = (((max(0, (34 * 34))) / 65054));
                            }
                        }
                    }
                    var_16 = (((((~((~(arr_6 [i_0] [i_0] [i_0 - 2])))))) >= ((~(~var_0)))));
                    var_17 *= -35;
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
