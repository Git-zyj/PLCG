/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!(((var_5 ? var_4 : 128)))))), (((~var_9) ? var_6 : 27921))));
    var_15 += var_1;
    var_16 = (max(var_16, (((~(max((-27921 - var_12), var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = 9007199254740991;
                var_18 = -1;
            }
        }
    }
    #pragma endscop
}
