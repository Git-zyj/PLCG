/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_13;
    var_16 = (max(var_16, (((0 ? var_5 : (((var_9 ? 36430 : ((max(26, 229)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [0] [i_1] [0] = (((((arr_1 [3] [3]) <= ((782437356 ? 0 : 2096996815)))) ? (255 * 132) : ((var_10 ? var_3 : var_13))));
                var_17 = (max(var_17, ((((((var_0 + var_1) ? (((5982007139954155237 ? 75 : 6942))) : ((3715421790 ? -10097 : 5982007139954155237)))) - var_8)))));
                arr_5 [6] |= (var_1 % var_12);
                arr_6 [i_1] [i_1] = ((2264193484 * ((max(0, var_2)))));
            }
        }
    }
    #pragma endscop
}
