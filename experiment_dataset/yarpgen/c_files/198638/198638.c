/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (min((((((((arr_1 [i_0 + 2]) ^ -4876582243887657461))) || (!16)))), (arr_4 [i_1] [i_1])));
                    var_15 = (max(var_15, (((((min(53566, (239 == 1425185048190259709)))) > var_12)))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_16 = (!var_6);
                        arr_11 [24] [i_1] [10] [10] = ((-58 ? 239 : 154561894));
                        arr_12 [i_0] [21] [i_0] [i_0] [i_0] = (((((~(3712463785515018313 < 65535)))) ? (max(-154561894, 0)) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0])));
                    }
                }
            }
        }
    }
    var_17 = (((((!(((240 ? var_12 : var_8)))))) - (((~var_9) ? 16 : 62351))));
    #pragma endscop
}
