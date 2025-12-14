/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (((((253952 ? -17 : ((var_7 ? -7434 : 7434))))) - ((5391770910312363106 ? 4080 : 2166875569))));
                    arr_7 [i_2] = ((var_6 - ((var_6 ? 3852629436 : var_0))));
                }
            }
        }
        var_16 = ((1 ? 7434 : 3341077543869617702));
        arr_8 [9] = ((max(1, 49277)));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_17 *= ((3961595629 ? -5988 : -55));
        var_18 = (max(var_18, 2147483392));
        var_19 = 16744448;
        var_20 = (3625310296 == 7532004857903267898);
    }
    var_21 = var_12;
    var_22 = (~var_11);
    var_23 += 7422;
    #pragma endscop
}
