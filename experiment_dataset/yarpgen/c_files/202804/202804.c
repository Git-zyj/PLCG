/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (arr_1 [i_1] [i_0]);
                var_11 = ((!((var_1 != (arr_3 [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
