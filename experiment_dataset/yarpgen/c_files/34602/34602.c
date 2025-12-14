/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(3712783559, (~1))) >> (((~var_12) - 4250712246))));
    var_16 = (max(((3712783554 + (!var_5))), 1029643301));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(1828739649, 1));
                var_17 = (max(var_17, (((!(((+(min((arr_1 [i_1]), var_6))))))))));
            }
        }
    }
    #pragma endscop
}
