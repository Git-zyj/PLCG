/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_15);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0] = var_15;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [1] [1] [i_1] = 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [14] = ((-(((arr_4 [i_3] [i_3] [i_3]) * var_1))));
                        arr_14 [13] [i_1] [11] [i_3] = (((arr_7 [i_0 + 2] [i_0 - 3] [i_0 + 2]) ? -24602 : (arr_4 [i_0] [i_1] [i_2])));
                        arr_15 [i_3] = -23939;
                        arr_16 [i_0] [i_1] [i_2] [i_3] [5] [i_0 - 2] = ((-((((arr_0 [i_0] [i_1]) || 45295)))));
                    }
                }
            }
            arr_17 [i_0] [i_1] = ((-284049491 ? var_15 : (arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_26 [i_0] [i_4] = 284049491;
                        arr_27 [i_0] [i_0] = (((((((284049490 ? 1 : (arr_18 [i_0] [1] [i_6])))) ? (((arr_4 [i_0 - 3] [i_4 - 1] [i_6]) ? var_0 : var_15)) : var_3)) << (((max(284049490, -9223372036854775788)) - 284049475))));
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = 15823446937685223588;
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        arr_33 [i_7 + 2] [10] = 12582912;
        arr_34 [i_7] [i_7] = (!134209536);
    }
    #pragma endscop
}
