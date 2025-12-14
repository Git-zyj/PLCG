/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));
    var_15 = ((4193792 / (max(var_0, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = max((((arr_4 [i_0] [i_1] [i_1]) ? var_11 : (!var_7))), ((152 ? -55 : 26)));
                var_16 = (min(var_16, (((max((54 <= var_4), (min(108, -1089317712))))))));
                arr_7 [12] [i_0] [i_1] &= max(229, (((!-42) / ((var_7 ? -1089317712 : var_11)))));
            }
        }
    }
    #pragma endscop
}
