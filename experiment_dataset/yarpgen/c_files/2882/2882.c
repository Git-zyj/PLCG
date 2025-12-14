/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (~(arr_5 [i_0]));
                    var_20 = (((+(max((arr_0 [i_0] [0]), (arr_3 [i_0 - 2] [i_1] [20]))))) & (arr_6 [i_1] [i_0]));
                }
            }
        }
    }
    var_21 = ((~(min(var_10, var_0))));
    var_22 = (min(var_22, (((min(var_6, (min(var_18, var_12)))) * (!var_14)))));
    var_23 = var_4;
    #pragma endscop
}
