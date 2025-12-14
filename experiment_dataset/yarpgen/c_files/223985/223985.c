/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (!var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (((arr_0 [i_1 + 1]) * (min((arr_0 [i_1 - 1]), var_2))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (min(-1477782565, 0));
                }
            }
        }
    }
    var_17 = (max((~15), (((~231) ^ ((461288058 ? 236 : var_3))))));
    #pragma endscop
}
