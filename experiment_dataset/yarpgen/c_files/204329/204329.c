/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((!(((var_7 ? var_4 : var_13)))))))));
    var_15 = 4784;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((((min((arr_3 [i_2 - 1] [i_0 + 1]), 58829))) ? (((min(4783, 60752)))) : (arr_5 [i_0] [i_0 - 1] [i_2 - 1] [i_2])));
                    var_17 = ((-((((arr_1 [i_0 - 1]) >= (~-6507))))));
                    var_18 = ((~(--47614)));
                    var_19 = 44575;
                }
            }
        }
    }
    var_20 = min((((43 ^ var_7) ? var_4 : ((var_2 ? var_6 : var_12)))), 44575);
    #pragma endscop
}
