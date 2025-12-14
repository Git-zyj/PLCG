/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (94574829 ? 94574812 : 4200392438);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_1] [i_3] [i_4] [i_4] = ((32744 ? 1 : -30655));
                                var_18 = (arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]);
                                var_19 = ((arr_2 [i_0] [i_1]) ? (max((arr_2 [i_2] [i_1]), (arr_2 [i_3] [i_1]))) : (max((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_1]))));
                                var_20 += 4200392467;
                                var_21 += (arr_3 [i_0]);
                            }
                        }
                    }
                    var_22 = ((1 ? 12 : 32744));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = ((((max((arr_9 [i_0] [i_1] [i_2] [i_0] [i_6]), var_0))) ? (((!((min(94574817, var_7)))))) : ((1 ? 1 : ((min(1, 1)))))));
                                var_24 = ((((((max(var_11, (arr_17 [i_6] [i_2] [i_1] [0])))) - 32743)) + (((((arr_12 [1] [4] [i_5]) + 32767))))));
                                var_25 += 65535;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 1;
    #pragma endscop
}
