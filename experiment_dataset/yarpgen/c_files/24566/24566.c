/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((max(2282223932, (arr_2 [i_0] [i_0]))), (var_4 == 221)));
                var_12 = (((min((arr_5 [i_0] [i_0]), 35)) << ((((arr_2 [i_0] [i_1]) != -46)))));
                var_13 += 128;
            }
        }
    }
    var_14 *= ((!(((-1221399878 ? (((85 ? 65535 : -1782945207))) : (max(var_5, 1782945204)))))));
    var_15 = 94;
    #pragma endscop
}
