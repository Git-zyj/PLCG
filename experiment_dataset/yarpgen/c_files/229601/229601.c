/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = ((max((min(-3431632109132649608, var_2)), (max(1851870081399838935, 9223372036854775807)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = -1;
                var_13 -= 1;
            }
        }
    }
    var_14 = 0;
    #pragma endscop
}
