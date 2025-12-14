/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_0;
    var_13 = ((-var_1 >> (var_7 - 1300968807)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 = (~(((!var_11) / (((arr_1 [1] [19]) ? var_3 : var_6)))));
        arr_3 [i_0] = (((((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_11)))) || (arr_0 [i_0])));
        arr_4 [i_0 - 1] = ((~var_7) ? (arr_2 [i_0 + 1]) : (((var_7 ? 2521142211 : var_0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = max(2521142218, (arr_8 [i_0] [i_1] [i_2] [i_0 + 1]));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = (1773825062 ? var_6 : ((4294967285 >> (var_8 - 105388858))));
                        arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] = (~var_2);
                    }
                    var_15 += (-((~((var_4 << (3622062136 - 3622062116))))));
                }
            }
        }
    }
    #pragma endscop
}
