/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 = (((0 * 0) >> 1));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (max((!var_5), var_1));
            var_13 = (max((arr_1 [i_0]), (var_9 & var_8)));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    {
                        var_14 = (((!13532227849539647873) ? ((9 ? var_2 : 1)) : var_1));
                        arr_14 [i_0] [i_3] = (~2685014440);
                        arr_15 [i_0] [i_3] = ((var_6 || (1 != 8621285759721084827)));
                    }
                }
            }
            var_15 = (min(var_15, var_7));
            arr_16 [1] [i_2] = (((arr_12 [i_0] [i_0 - 2] [i_2] [2] [i_0 - 3]) ? (var_6 ^ 1) : (arr_10 [i_0 - 1] [i_0] [i_0 - 1])));
            var_16 = var_2;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_19 [i_0 - 2] [i_0 + 1] [i_0 - 2] = -var_7;
            var_17 = (max(1, 18446744073709551615));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_28 [i_0 - 3] [i_5] [i_0 - 3] [i_0 - 3] [i_6 + 3] = (((arr_26 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6]) && ((max((arr_26 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 3] [i_6]), 0)))));
                            var_18 = (min(var_18, var_7));
                        }
                    }
                }
            }
        }
        var_19 = (min(var_19, 1));
    }
    var_20 = ((var_2 ? var_3 : (((max(((max(1, 1))), var_5))))));
    var_21 = max(((((~var_4) ? 43164 : (!var_9)))), var_3);
    #pragma endscop
}
