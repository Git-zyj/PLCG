/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~(~var_12))))));
    var_18 = (min((-var_16 * var_9), var_0));
    var_19 = var_9;
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = (((((((var_3 ? var_0 : var_8)) ^ var_5))) ? (var_11 | var_9) : (min((~var_9), (~var_13)))));
                    arr_8 [i_0 - 1] [i_0 + 1] [i_2] = min((((var_16 && var_10) ? (var_11 ^ var_7) : -var_12)), (~var_1));
                }
            }
        }
    }
    #pragma endscop
}
