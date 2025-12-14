/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 || ((min(var_10, -260078202)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [6] [4] |= ((~(~701605451)));
                var_18 -= (!1471711009);
            }
        }
    }
    #pragma endscop
}
