/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_9 ? (min(358969194, ((358969194 ? 3998303963 : 296663346)))) : var_6));
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 ^= 2596716093;
                arr_4 [i_0] [9] = ((358969194 ? var_11 : 3998303985));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_21 = (max((arr_0 [i_0]), ((296663364 ? 1586266588 : 1827087068))));
                    var_22 = (max(((~(max(1506498085, 3935998102)))), (((1619141732 ^ 115) << (1698251202 - 1698251190)))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = 759619541;
                    var_23 -= ((~(((((2596716098 ? 76 : 2467880228))) ? -62 : ((var_14 ? var_5 : 1))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_24 += ((var_13 && var_4) ? ((1698251202 ? var_16 : (((max(-118, 1)))))) : (113 && -103));
                                var_25 = (arr_11 [i_0] [0] [i_4] [i_3] [i_1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_26 = (var_5 ? ((-(((arr_12 [i_6] [i_6] [i_0] [i_6] [i_6 + 1] [i_6]) << (var_8 - 3496033912))))) : (min((min((arr_17 [i_0] [i_1 - 2] [i_3] [7] [10]), 3479063516)), (arr_2 [i_1]))));
                                var_27 = arr_23 [i_6 - 1] [i_1 + 1] [i_0] [i_6];
                            }
                        }
                    }
                    arr_25 [i_0] [2] = ((((var_12 ? 3844369236 : (arr_19 [i_0] [i_1 + 2] [i_1 + 2] [1])))) ? ((~(((arr_0 [i_0]) ? var_2 : (arr_2 [i_3]))))) : ((1827087070 ? (((arr_15 [i_0] [3] [i_0] [i_0]) ? var_8 : (arr_20 [i_0] [i_0] [1] [i_1] [i_0]))) : (((arr_24 [i_3] [i_3] [i_0] [i_0] [i_0] [5]) ? var_16 : var_17)))));
                    var_28 = 358969198;
                    var_29 -= var_1;
                }
            }
        }
    }
    #pragma endscop
}
