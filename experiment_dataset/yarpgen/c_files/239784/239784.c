/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (((!9201205586823019997) <= (min(-9201205586823019997, -623473206))));
                arr_6 [i_0] [i_1] [i_0] = (((((-(arr_0 [i_1])))) ? (!var_3) : ((var_0 / (arr_0 [i_0])))));
                arr_7 [i_1] = var_16;
            }
        }
    }
    var_19 = (-var_0 / var_9);
    #pragma endscop
}
