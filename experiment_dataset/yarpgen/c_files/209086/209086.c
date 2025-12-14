/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, 32));
                                var_11 = (min(var_11, ((((~(arr_9 [i_0] [1] [i_0] [i_0] [17] [i_0])))))));
                                var_12 = (min(var_12, (((~(~var_1))))));
                                arr_14 [i_4] [1] [i_4] [i_1 + 1] [1] = (min((((((1 ? 12739 : -5113))) ? (arr_4 [i_1] [i_1 + 2] [14]) : (~12739))), ((min(0, var_1)))));
                            }
                        }
                    }
                    var_13 = (((~-12739) - (arr_13 [i_1 - 1] [i_1 - 1] [5] [i_1 + 2] [i_1 + 2] [i_0])));
                }
            }
        }
    }
    var_14 = ((!((((var_3 < var_8) * ((var_2 ? var_8 : var_9)))))));
    #pragma endscop
}
