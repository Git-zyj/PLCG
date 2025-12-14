/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = 4649238023096450073;
                arr_6 [i_1] [10] [i_0] = ((((((-72 < 4) ? 229 : 0))) && (arr_5 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_12 = (min(var_12, (((16384 ? var_6 : 7)))));
    #pragma endscop
}
