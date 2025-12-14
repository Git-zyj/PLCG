/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (139 == var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= -65532;
                arr_6 [i_0] [i_0] [i_1] = ((((((-2084392508 ? var_8 : (arr_1 [i_0] [i_1])))) > (min(var_9, var_8)))));
            }
        }
    }
    #pragma endscop
}
