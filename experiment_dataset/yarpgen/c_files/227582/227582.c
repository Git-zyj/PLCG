/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -65535;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = 2851134287;
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((min(((var_6 ? (arr_0 [i_0]) : (arr_5 [i_0] [i_1] [2]))), (arr_1 [i_0]))) * ((((((!(-2147483647 - 1))) || 1443833014))))));
                    var_21 = (min((((2147483647 ? -0 : 1443833008))), ((+(max((arr_4 [i_0]), 11357760307741922585))))));
                    arr_9 [i_0] [i_0] = min((-2147483647 - 1), 0);
                }
            }
        }
        arr_10 [i_0] = ((((((((-4 ? (arr_5 [14] [i_0] [i_0]) : 50024))) ? ((((arr_3 [i_0] [i_0]) & 0))) : (arr_5 [i_0] [i_0] [i_0])))) ? 2851134303 : ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = -2147483642;
        var_22 = ((1795566445 ? 0 : 7));
        var_23 = (min(var_23, -2831382805193952470));
    }
    var_24 &= ((1 ? var_4 : (((!((var_12 && (-2147483647 - 1))))))));
    #pragma endscop
}
