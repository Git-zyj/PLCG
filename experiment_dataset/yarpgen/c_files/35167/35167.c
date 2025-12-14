/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((-((var_3 ? 14956219101026068965 : var_7)))) == (max(((max(3378930491, 916036804))), (min(24582, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_11 *= (((arr_3 [i_0 - 1]) & ((~(arr_3 [i_0 - 1])))));
                var_12 &= (max((arr_5 [i_0 + 4] [i_0]), ((~(arr_5 [i_0 - 2] [i_1])))));
            }
        }
    }
    #pragma endscop
}
