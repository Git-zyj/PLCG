/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (-1818984600651440209 / var_7);
    var_11 = (max(var_8, ((((!var_0) < (max(var_2, 1818984600651440208)))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (~122);
                    var_13 = (max(var_13, ((min((arr_1 [i_2]), ((-90 ? 9223372036854775807 : -1818984600651440209)))))));
                }
            }
        }
        var_14 &= (((arr_2 [i_0 - 1] [i_0]) ? (((arr_2 [1] [i_0]) ? (arr_6 [i_0 - 1] [i_0]) : var_7)) : (((arr_5 [i_0 - 1] [i_0] [i_0]) | var_2))));
        var_15 = (var_9 ? -1818984600651440192 : ((((arr_0 [i_0 + 1]) ? 93 : (arr_0 [i_0 + 1])))));
        arr_7 [i_0] [i_0] = (arr_6 [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_16 = (min(var_16, ((((arr_8 [7]) > 116)))));
        arr_11 [18] = (((!1) || var_7));
    }
    var_17 = var_4;
    var_18 = (max((max(var_8, var_6)), var_7));
    #pragma endscop
}
