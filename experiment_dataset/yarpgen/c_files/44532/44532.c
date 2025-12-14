/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((!(((((max(var_3, 2147483647))) ? (~2147398061) : 230)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = 127;
        var_18 = 2333238102649751401;
        var_19 = (-2147483647 - 1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((213 && 105) - ((var_12 ? var_15 : 238))));
                    arr_11 [i_0] = -21931;
                    var_20 = var_7;
                    var_21 = (max(var_21, (~-21959)));
                }
            }
        }
    }
    var_22 *= ((((((39 + 21958) >> (var_2 < var_0)))) ? (((-(!var_13)))) : (~var_0)));
    #pragma endscop
}
