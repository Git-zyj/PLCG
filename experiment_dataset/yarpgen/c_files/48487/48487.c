/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (max((((arr_6 [i_0]) ? 2840983076192397887 : -18)), (((((min(-926642783699454381, 7749935657029697234))) ? (arr_2 [i_0]) : ((-(arr_1 [i_0]))))))));
                    var_13 += ((((-(926642783699454381 | var_11)))) ? (arr_5 [i_0] [i_1] [i_2]) : 7749935657029697244);
                    var_14 = (((((-(arr_5 [i_0] [i_1] [i_2]))))) ? (((var_6 ? (var_10 <= var_10) : 1011264165))) : (((arr_2 [i_2]) ? 1 : -1)));
                }
            }
        }
    }
    var_15 = (max(var_15, var_3));
    var_16 = ((-((-0 ? 926642783699454381 : 0))));
    #pragma endscop
}
