/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(-var_9, ((var_18 + (arr_3 [3] [i_1])))));
                arr_4 [3] [i_1] = (max(((max((!var_7), var_0))), (max((~var_3), (((arr_0 [i_0]) & 2229001949))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = (arr_8 [i_0] [i_0] [i_3]);
                            var_23 = (arr_7 [i_0] [i_1] [i_3] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_17, var_8));
    #pragma endscop
}
