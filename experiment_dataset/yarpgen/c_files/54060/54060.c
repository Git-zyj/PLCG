/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((112 ^ (95 >> 22)));
                var_14 = (max((min((max(8278173130151388526, -98)), var_0)), ((max(58113, (arr_5 [i_0]))))));
            }
        }
    }
    var_15 = (((1 ? var_11 : 2772843146)));
    #pragma endscop
}
