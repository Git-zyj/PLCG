/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((-((2272 ? 76 : 80))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = arr_0 [i_0];
                var_14 = 43797;
                var_15 *= ((!(((-(arr_0 [i_0 + 1]))))));
            }
        }
    }
    var_16 = ((var_3 ^ (((!-22900) + ((var_5 ? -24402 : 57))))));
    #pragma endscop
}
