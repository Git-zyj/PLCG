/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-92, 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((-14448 > (arr_1 [i_0 - 1]))) ? var_6 : -333932935));
                arr_6 [i_0 + 1] [i_1] = (arr_1 [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}
