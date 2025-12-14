/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (max(var_16, (((var_7 ? var_3 : (max(-1762748886, var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (((((min(var_5, (arr_13 [i_0] [i_0]))))) / ((((min((arr_3 [i_0]), (arr_11 [i_0] [i_0])))) * 8503896146572959530))));
                                var_18 = (max(var_18, ((min(((var_3 ? var_10 : (arr_3 [i_4]))), ((min(102, var_9))))))));
                            }
                        }
                    }
                }
                var_19 = (min(117, (min((max(var_10, var_7)), (((0 + (arr_1 [i_0]))))))));
                arr_18 [i_1] [i_1] [i_0] = ((var_5 - (((~(~var_14))))));
            }
        }
    }
    #pragma endscop
}
