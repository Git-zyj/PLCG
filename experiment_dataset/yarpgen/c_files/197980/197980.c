/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((var_6 < ((min(((((arr_1 [i_1] [6]) ? (arr_1 [i_0] [3]) : (arr_2 [i_1])))), (min((arr_4 [i_0] [i_0]), 2233785415175766016))))))))));
                var_12 = (min(var_12, (!-9115224344134049664)));
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
