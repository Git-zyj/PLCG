/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = -23846;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] = (((((!((max(var_3, var_12)))))) - (min(((max(var_8, -33))), (~46216)))));
                        arr_14 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] [5] = -759373950;
                        var_13 = (min(var_13, (301390180 ^ var_5)));
                    }
                }
            }
        }
    }
    var_14 = (((((~(73 + var_9)))) ? var_8 : var_6));
    var_15 = -1895825571;
    #pragma endscop
}
