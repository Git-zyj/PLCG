/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((~((16856 ? 4294967295 : 8321499136)))))));
    var_15 |= (((max(7758462900395042290, 8521919699407354416))) ? var_10 : (((((51458 << (((var_4 + 8583880522801263685) - 14))))) ? (var_4 && var_0) : 4294967277)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_0] [i_1 - 2] [i_2 - 1] [i_4] [i_0] [i_2 - 1] = (~var_4);
                                arr_12 [i_0] [i_1 - 2] = 0;
                                var_16 = var_8;
                                arr_13 [i_3] [i_0] [i_0] [i_3] [10] [i_2 - 1] = (((max(14171289178529701269, ((min((arr_4 [i_2] [i_2] [i_4]), 3))))) & (((((arr_5 [i_0 - 1] [i_2 + 1] [i_2]) < (arr_1 [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = 32746;
                                arr_23 [i_0] [11] [i_1] [i_2] [i_2] [i_5] [i_6] = ((-((((arr_19 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_0] [i_6]) ? 134217600 : 2854305972)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((min(-674722139, 4275454895179850347))) ? var_13 : (min(var_2, ((4095 ? var_3 : var_12))))));
    #pragma endscop
}
