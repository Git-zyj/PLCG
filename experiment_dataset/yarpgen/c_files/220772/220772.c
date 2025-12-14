/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 -= (((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_18 -= (arr_0 [i_0 + 1] [i_0 + 1]);
        var_19 = (var_16 ? (48 < var_2) : var_10);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (((((arr_1 [i_1] [i_1]) ? (arr_3 [i_1]) : var_13))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_21 = ((((max(67, (arr_6 [i_3 - 2] [6] [i_1])))) == (arr_0 [i_3] [i_2])));
                    arr_9 [i_1] [i_2] [i_3] [i_3 + 1] = (arr_7 [i_3] [7] [i_1]);
                    var_22 = (min(var_22, (((((min(-44, var_5))) ? (!3539080959) : (min((arr_0 [i_1] [i_1]), 424010954)))))));
                }
            }
        }
    }
    var_23 = (~3539080959);
    #pragma endscop
}
