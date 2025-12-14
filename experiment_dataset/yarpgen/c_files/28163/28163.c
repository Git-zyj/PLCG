/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((34359730176 > var_11) | var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_3;
                var_15 *= (min((!18446744073709551615), (min(1, var_4))));
                var_16 = (min(var_16, (((44255 ? (((((21261 ? -6884239981732154343 : var_6))) ? (var_12 - var_6) : var_1)) : (((min(1, var_0)))))))));
            }
        }
    }
    var_17 = 4035225266123964416;
    var_18 = (min(((var_1 ? (min(1, 260046848)) : 56)), var_2));
    #pragma endscop
}
