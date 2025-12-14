/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1 - 1] [i_0] = (min((max((max((arr_5 [i_0] [i_1 - 1]), (arr_1 [i_0] [i_1]))), (-19791 == 65520))), (((var_12 >> (((~var_9) - 1066372531)))))));
                    arr_9 [i_0] [i_1] [i_0] = (((var_17 + 9223372036854775807) >> ((((((max((arr_2 [i_0] [i_0]), 40453))) ? (69 % var_9) : (min(3053632234, (arr_3 [9] [i_1 - 1]))))) - 7))));
                    var_21 *= (arr_0 [i_0] [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
