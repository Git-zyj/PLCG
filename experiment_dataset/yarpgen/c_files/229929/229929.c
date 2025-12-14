/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 233;
    var_12 = (((1 ? var_1 : (~1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (arr_0 [i_0]);
                arr_5 [7] [i_0] [i_1] = 20357;
            }
        }
    }
    #pragma endscop
}
