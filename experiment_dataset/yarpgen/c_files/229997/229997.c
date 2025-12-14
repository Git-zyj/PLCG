/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((1 > -549857266) ? var_2 : 25150))) ? 0 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (arr_3 [i_0 - 1]);
                var_16 = (arr_3 [i_1]);
                var_17 = (min(var_17, var_13));
            }
        }
    }
    #pragma endscop
}
