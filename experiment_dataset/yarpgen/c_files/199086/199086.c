/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8391856344416127107;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((((min(10054887729293424508, 32764))) ? (arr_2 [i_0 - 1] [i_1] [i_2]) : (arr_0 [i_1])));
                    arr_8 [i_2] |= -32764;
                }
            }
        }
    }
    #pragma endscop
}
