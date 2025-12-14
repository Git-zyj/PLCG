/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_8 < 15355107181413574770);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = max(var_2, (arr_0 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((arr_9 [i_0 + 1]) / (min((arr_5 [i_0] [i_3 + 1] [14] [i_3]), -10170)))))));
                            var_21 -= ((((~((-22471 ? (arr_6 [i_0] [i_1] [i_0] [i_3]) : (arr_1 [i_3]))))) >= (arr_1 [i_2 - 2])));
                            arr_10 [i_0] [i_1] [1] [i_2] [i_3] = (arr_8 [i_0 - 2] [i_3] [i_2 - 1] [i_1 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_22 += (((((-((var_18 ? var_10 : var_14))))) ? (min(var_6, -var_18)) : var_3));
    #pragma endscop
}
