/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= arr_3 [i_0] [i_0 - 2];
                arr_7 [i_0] [i_1] = (((1 ? var_5 : ((-2147483637 ? 0 : var_4)))));
            }
        }
    }
    var_16 = (min(var_16, ((max((~32767), ((-((max(var_13, var_11))))))))));
    #pragma endscop
}
