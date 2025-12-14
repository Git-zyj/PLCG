/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min(-var_6, ((var_2 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 2])))));
                arr_6 [i_1 + 1] = ((((min(1175944821, -20))) - (var_14 << 0)));
            }
        }
    }
    var_17 = var_3;
    var_18 = (((((20 ? -269352389 : -123))) == (((var_6 ? var_14 : 13)))));
    #pragma endscop
}
