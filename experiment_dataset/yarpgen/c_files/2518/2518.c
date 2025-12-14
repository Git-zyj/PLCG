/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-113 ? (min(((max(7029, 116))), ((-7013 ? 19929 : 0)))) : -71));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 *= (((((((1954215282441704551 ? 1878431158057459049 : 0))) ? (1 | 2598920433) : (6389333650379042357 - 21691))) >> (((((max(12576, 1923008780)) & (max(4, 27757)))) - 18383))));
                    var_13 = (max((((7029 << (((-7021 % -471382486374413666) + 7028))))), (min((~144115188075855808), (32 * 117)))));
                    var_14 = (max((min(1, ((-31 ? 4223009041 : 128)))), ((((19 ? -116 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
