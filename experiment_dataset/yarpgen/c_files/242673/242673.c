/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -var_7));
    var_16 *= (min((max(var_9, (!var_10))), (!var_13)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0 + 3]);
        var_17 += (arr_2 [i_0]);
        var_18 += (((arr_1 [i_0 + 3]) || (arr_2 [i_0 + 3])));
        var_19 += (((arr_2 [i_0 + 2]) == 0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 += (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_3 + 1] = -var_9;
                        var_21 += var_3;
                        var_22 -= ((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 3]) || 58596);
                        var_23 = (min(var_23, (((!(12 == 357879330))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
