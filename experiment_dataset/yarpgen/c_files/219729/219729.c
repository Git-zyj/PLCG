/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_0) ? ((((!(~2609786060))))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-((125 ? 21 : 70))));
                arr_7 [i_1] = 1888533819;
            }
        }
    }
    var_11 &= ((((var_4 & ((var_7 ? 10249 : 127)))) >= ((-((max(16, var_4)))))));
    var_12 = var_5;
    var_13 = (((max(1888533814, var_2)) & ((1 ? 1888533802 : 1))));
    #pragma endscop
}
