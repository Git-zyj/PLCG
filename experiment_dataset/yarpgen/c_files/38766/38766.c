/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (((var_9 ? ((-var_14 / (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1 + 4] [i_1]))) : ((((!3214483803728680069) != ((29967 ? 3214483803728680050 : var_4))))))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [i_0] [i_3] [i_1] [i_0] = 11490;
                            var_20 = ((((((237 < (arr_9 [i_4] [i_2 + 3] [i_2 + 3] [i_0]))))) ^ (arr_4 [i_0] [i_1] [i_0])));
                        }
                        var_21 = (var_11 / (min(1, -8958208880581001896)));
                    }
                }
            }
        }
        arr_16 [i_0] = (arr_10 [1]);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_22 = (min(var_22, 54035));
        var_23 = (arr_20 [1]);
    }
    var_24 = -var_4;
    #pragma endscop
}
