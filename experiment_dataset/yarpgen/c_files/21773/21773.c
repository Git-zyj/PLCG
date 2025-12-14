/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((((var_11 ? var_9 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (((22048 - 3098) ? ((var_4 + ((0 ? var_1 : var_6)))) : (0 - var_10)));
                var_19 = ((!(((var_7 ? 1219593597290320144 : (!4294967295))))));
            }
        }
    }
    var_20 = (!var_2);
    #pragma endscop
}
