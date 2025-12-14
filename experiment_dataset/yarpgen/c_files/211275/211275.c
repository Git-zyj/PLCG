/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_17);
    var_21 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = -1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_1] = (((-11 + 2147483647) << (((arr_2 [i_1]) - 6308402985281029209))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (!8986676181854485265);
                }
            }
        }
        var_23 = ((-(!var_7)));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_5] = (arr_13 [i_3] [13] [i_5] [i_5]);
                    arr_16 [i_3] [i_3] [i_4] [i_5] = var_1;

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_3] = (~-1);
                        var_24 = (((-1 && var_15) || (!var_4)));
                        var_25 = 0;
                        var_26 = ((((arr_17 [i_3] [i_4] [i_5] [i_6]) != (arr_9 [i_6]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
