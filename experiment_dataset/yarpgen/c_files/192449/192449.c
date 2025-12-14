/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_14 ? var_12 : (((~(var_8 & 469092091)))));
    var_18 = (min(0, 3864548290));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_3));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 = min(((max((arr_2 [i_1]), var_7))), 1182060563);
                        var_21 = ((var_12 ? ((0 ? (max((arr_0 [i_1]), (arr_9 [i_1 - 2] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1] [4]))) : var_12)) : (((min((arr_7 [i_2] [i_1]), (arr_3 [i_1])))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = var_16;
    }
    #pragma endscop
}
