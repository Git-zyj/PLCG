/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 14449772005987431289;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_12 [i_0] [i_3] [i_2 - 2] [i_2 - 2] [i_0] [i_2 - 2] [7] = 1587366407;
                                var_12 = (max(-1587366407, (((((2707600888 | (arr_11 [i_0] [i_0] [i_3] [2] [2] [i_3] [i_4])))) ? 1587366407 : var_4))));
                                var_13 = (min(var_13, ((((arr_9 [i_0] [i_0 - 1] [i_0 - 1]) ? var_6 : var_9)))));
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_1] = (((((arr_11 [i_0] [i_0 + 1] [i_3] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2]) ? 17972 : var_9)) <= ((max((arr_9 [i_0] [i_1] [i_2 + 1]), ((2707600889 ? -512 : (arr_3 [i_1] [i_3] [i_4]))))))));
                            }
                            arr_14 [i_3] [i_1] [i_1] [i_3] = (((((((arr_9 [i_2] [i_2] [i_2 - 2]) || (arr_2 [i_2]))))) ? 9141860397178644984 : var_4));
                            var_14 = (arr_1 [i_2] [i_3]);
                            var_15 = var_3;
                            var_16 = (~9304883676530906629);
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (var_9 ? ((((min(26068, var_6))))) : (max(7940484335541863875, -512)));
                arr_16 [i_0 - 1] [i_1] = (max(((var_5 ? (arr_11 [i_0] [i_0] [6] [i_0] [i_1] [6] [i_0]) : (arr_11 [2] [i_1] [2] [i_1] [2] [i_0 - 1] [i_0]))), -18758));
            }
        }
    }
    #pragma endscop
}
