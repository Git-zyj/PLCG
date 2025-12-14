/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = 1892470550;
                var_13 = 3655585647;
            }
        }
    }
    var_14 = -10743364585266311677;
    #pragma endscop
}
