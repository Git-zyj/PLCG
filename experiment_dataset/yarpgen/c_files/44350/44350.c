/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((271672609 ? 224619670119238067 : -1015059915))) ? 40 : (max(var_0, ((127 ? var_10 : var_7))))));
    var_15 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((min((((min(var_8, var_11)))), (max((max(var_12, var_7)), ((3924643765787845838 ? 14393715966183407800 : 2199014866944)))))))));
                var_17 = (max(24, 127));
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
