/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_3] [i_2] [i_3] = (max(12631903539372545156, 1399717480));
                                var_15 = (var_10 != 1547898638);
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((12631903539372545179 ? -64 : -8262020314159918444));
                            }
                        }
                    }
                }
                var_16 = (min(-8262020314159918426, (~-8262020314159918427)));
                var_17 &= ((var_11 ? (arr_9 [i_0 + 3] [10] [i_1]) : 6576));
            }
        }
    }
    var_18 = var_9;
    var_19 &= (((max(var_13, 63))));
    var_20 = (63 <= 113);
    #pragma endscop
}
