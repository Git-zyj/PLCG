/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_0, var_14)) ? ((min(var_18, var_9))) : (min(var_0, var_16))))));
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((-((-(arr_2 [i_0] [i_1]))))))));
                arr_6 [0] = (arr_3 [i_0]);
                arr_7 [i_1] [i_0] = ((var_0 <= (!0)));
                var_22 = var_3;
            }
        }
    }
    #pragma endscop
}
