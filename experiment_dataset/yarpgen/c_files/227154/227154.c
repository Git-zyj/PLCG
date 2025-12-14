/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_8, (((max(2574793215, var_2)) | (var_9 | var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = ((810512077 == (!var_9)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 = max((((~(-810512078 + -507680487)))), (min(((min(-4021432005174121394, 4021432005174121394))), (507680486 & var_2))));
                        var_18 -= ((~(((810512077 & 163) >> (var_12 + 1058770527)))));

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [12] [i_1] [i_2] [i_1] [i_1] = ((33538048 ? 507680487 : -16295));
                            arr_14 [i_0] = ((~(-4021432005174121394 | 16898867308039747706)));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!(((~((3082195600 ? 0 : 1892053436)))))));
    #pragma endscop
}
