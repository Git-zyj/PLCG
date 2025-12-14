/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = 3084798773;
                arr_6 [4] &= (arr_0 [i_1 - 1] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
