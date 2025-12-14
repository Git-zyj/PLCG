/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [2] [i_0 - 1] [i_0 - 1] [12] = (((arr_1 [i_0 + 1]) != (arr_2 [i_0])));
                    var_16 = ((max(var_4, 9223372036854775791)));
                    var_17 = (((arr_4 [i_0] [i_1] [i_2 + 1]) >= ((((((arr_3 [i_0]) ? var_9 : -1)) >= var_13)))));
                }
            }
        }
    }
    var_18 = (((~var_10) * (min((195916718 <= var_0), 2114441989939952292))));
    #pragma endscop
}
