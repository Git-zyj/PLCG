/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 -= var_9;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2 + 1] = (arr_6 [8]);
                                arr_14 [i_0] [i_4] = (~2147483647);
                                var_21 = (max(var_21, ((((-(arr_7 [i_0] [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 1])))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (max(((((~var_11) ? (arr_1 [i_0]) : var_8))), (max(4294967295, (arr_7 [i_0] [i_1] [i_1] [i_0] [i_0])))));
            }
        }
    }
    var_22 += var_19;
    #pragma endscop
}
