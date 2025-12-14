/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 126));
                arr_7 [i_0] [i_1] [i_0] = ((((max((arr_6 [i_0] [i_0]), 15))) ? 12 : ((+(((arr_2 [i_1]) * 128))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_20 = (min(var_20, 2080105944));
        var_21 = (1759276929 <= -1759276930);
        var_22 = ((((((((-9223372036854775807 - 1) ? 8388607 : -80)) != -116))) + (((arr_5 [i_2]) ? (15 != 16256) : ((1736184251916286330 ? 1 : -2147483645))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 = (((((-(arr_9 [i_4])))) >= 1013107681));
                    var_24 = (min(var_24, (~9223372036854775805)));
                }
            }
        }
        arr_14 [i_2] = (((!1736184251916286339) / ((((8192 > (arr_8 [i_2 - 1] [i_2 - 1]))) ? (((!(arr_6 [8] [8])))) : (-224343887818964976 != -29589)))));
    }
    #pragma endscop
}
