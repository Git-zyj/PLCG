/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 6893731991663741773;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (262128 < 14422290502734908314);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = 262128;
                        arr_12 [i_0] [i_1] = (arr_9 [i_0 + 3]);
                    }
                }
            }
        }
    }
    var_19 = var_17;
    var_20 = var_14;
    var_21 = max((262128 - 1655358413), ((var_6 ? (max(var_7, 16325316069537482626)) : ((67108863 ? var_9 : var_0)))));
    #pragma endscop
}
