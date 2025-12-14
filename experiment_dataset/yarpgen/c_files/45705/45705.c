/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (+(((~var_15) ? (((var_2 ? var_6 : var_4))) : var_2)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (arr_5 [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (min(var_21, var_9));
                        arr_11 [i_0] [i_1 + 1] [i_2 + 1] [i_3] = (var_17 / var_0);
                        arr_12 [i_3] [i_2] [14] [i_1] [i_0] = var_0;
                    }
                }
            }
        }
        var_22 ^= ((-(max(var_8, ((~(arr_10 [i_0 - 1] [11] [i_0 - 1] [i_0 - 2])))))));
    }
    #pragma endscop
}
