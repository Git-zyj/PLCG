/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_11) - 0));
    var_20 = (min((~var_13), var_15));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [2] [6] [6] [i_2] = (arr_1 [i_0]);
                    var_21 = (min(32, (max((~41), 55260))));
                }
            }
        }
    }
    var_22 = var_2;
    var_23 = var_0;
    #pragma endscop
}
