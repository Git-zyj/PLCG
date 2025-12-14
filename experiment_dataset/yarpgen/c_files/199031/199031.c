/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = (arr_10 [i_2 + 1] [i_2 - 4] [i_2 - 2]);
                            var_16 = (min(var_16, (arr_10 [2] [6] [i_1])));
                            arr_11 [i_0] [9] [i_2] = ((((((!30908) << var_4))) || 1490633387));
                            arr_12 [i_1] [i_2] [i_2] [i_0] = -9411891682102562298;
                        }
                    }
                }
                arr_13 [i_0] [8] = ((-(arr_3 [i_0] [i_1])));
            }
        }
    }
    var_17 = (var_6 >> var_0);
    var_18 = (min(var_18, var_0));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] = var_5;
                    var_19 = (max(3203982993, 0));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_20 = (max(3048242508, ((2132311238 ? 3048242508 : var_0))));
                                var_21 = ((((((arr_17 [i_5]) ? -1544683209 : 58352)) + ((max(var_6, (arr_18 [i_4] [i_4])))))));
                                arr_27 [i_8] [i_7] [i_6] [i_7] [i_4] = (arr_17 [i_4]);
                                var_22 = ((-26163 ? (var_5 * 62702) : var_12));
                                var_23 = (58720256 % 2949686963);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_5] [15] = (arr_30 [i_10] [i_10] [i_10 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 2] [i_4]);
                                var_24 = (max(var_24, ((((max((var_5 != 0), (min((arr_29 [i_9] [i_9]), 129024))))) ? (((~(arr_15 [i_4] [i_4])))) : ((max(-76, var_4)))))));
                                var_25 = var_10;
                                var_26 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
