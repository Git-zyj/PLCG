/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((((14471 ? (arr_6 [i_1 - 2]) : 4050071943)) * (((((min(14471, var_10))) / -24920)))));
                var_16 = (((!var_14) ? var_9 : (((!((max(24919, (arr_3 [i_0] [i_1 + 3])))))))));
                var_17 = ((var_1 >> ((-24923 ? 0 : (((var_11 ? var_9 : var_4)))))));
            }
        }
    }
    var_18 = (max(var_18, var_12));
    var_19 = var_12;
    var_20 ^= ((1 << ((((14468 && 14471) <= ((var_13 ? var_12 : var_5)))))));
    #pragma endscop
}
