/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(var_9, var_0))) ? (var_0 | var_9) : (1 | var_7)))) & var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 *= ((!(((((max(var_12, 2749764805))) ? ((max((arr_3 [i_1] [i_1]), 51020))) : (!5671099066968345398))))));
                arr_7 [i_0] [i_1] = (((((((arr_3 [i_0] [i_0]) ^ (arr_6 [i_0])))) && var_13)));
            }
        }
    }
    #pragma endscop
}
