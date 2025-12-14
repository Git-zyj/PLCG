/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (((arr_9 [i_1] [i_0 - 1]) >> (((((arr_7 [i_1] [i_1] [i_0 + 1] [i_2]) ? (arr_7 [i_0] [i_1] [i_0 + 1] [i_0]) : (arr_7 [9] [i_1] [i_0 - 1] [i_2]))) - 3315887505))));
                    var_16 = (max(var_16, ((((((arr_0 [0]) ? (arr_0 [6]) : (arr_10 [i_0] [0] [i_0] [i_0]))) / (!0))))));
                }
            }
        }
    }
    var_17 = (max(var_0, 0));
    var_18 = (min((~var_6), ((var_2 ? var_3 : var_4))));
    #pragma endscop
}
