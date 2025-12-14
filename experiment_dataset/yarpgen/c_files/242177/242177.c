/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_0 [i_2]) ^ -78)) ^ (((arr_7 [i_2] [i_2] [i_2 - 1] [i_2]) ? -4321243637585568824 : -18)))));
                    var_18 = (((77 * 1) | (arr_0 [i_2])));
                    var_19 = (min(var_19, (arr_0 [i_1])));
                    var_20 = (((arr_2 [i_0] [i_0]) ? (arr_1 [i_2] [i_0]) : (((77 * ((-25741 ? -77 : 148319218)))))));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = var_8;
    var_23 = (max(var_23, (((-2411385613833433720 ? 0 : 2)))));
    #pragma endscop
}
