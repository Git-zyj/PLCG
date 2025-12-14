/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0]);
                var_13 -= ((-var_12 ? (((arr_0 [i_0]) ? (min((arr_0 [5]), var_5)) : (((min(-13056, 250)))))) : var_5));
            }
        }
    }
    var_14 = ((~(var_7 / var_1)));
    #pragma endscop
}
