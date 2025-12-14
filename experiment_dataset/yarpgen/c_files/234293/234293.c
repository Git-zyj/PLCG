/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (min(((var_0 * (((2147483646 ? 64 : 85))))), (arr_2 [i_0])));
                var_15 += (((arr_1 [i_0 + 4]) ? (max(4491428028860967344, var_2)) : ((min((arr_1 [i_0 + 4]), 25)))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
