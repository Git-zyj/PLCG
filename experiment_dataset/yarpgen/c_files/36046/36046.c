/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((~(~var_9)));
        var_21 |= ((-(((!((max(1073610752, 1073610752))))))));
    }
    var_22 -= var_14;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            {
                var_23 = ((((-(1073610752 / var_13))) * (((((arr_7 [i_1] [i_1]) <= (((-(arr_5 [i_1]))))))))));
                var_24 = (min(var_24, ((min((min(17063, (arr_5 [4]))), ((((arr_4 [i_2 - 2] [i_2 + 1]) != (arr_4 [i_2 - 2] [i_2 + 1])))))))));
                var_25 = (max(var_25, (!-137438953472)));
            }
        }
    }
    #pragma endscop
}
