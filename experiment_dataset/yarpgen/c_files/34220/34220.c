/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_1));
                    var_21 = (((((~(arr_1 [i_1] [i_2])))) ? ((min((max((arr_3 [9]), (arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))), var_7))) : ((((~var_13) != -34183)))));
                }
            }
        }
    }
    var_22 = var_7;
    var_23 &= var_16;
    var_24 = var_16;
    #pragma endscop
}
