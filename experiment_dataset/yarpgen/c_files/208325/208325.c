/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = var_9;
                var_14 = (max(var_14, var_10));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [11] [i_1] [i_2] [i_0] = (((-((var_4 ? var_11 : (arr_1 [i_0]))))));
                                var_15 = var_0;
                            }
                        }
                    }
                }
                arr_15 [i_0] = (max(var_11, (min((~var_5), 30851))));
            }
        }
    }
    #pragma endscop
}
