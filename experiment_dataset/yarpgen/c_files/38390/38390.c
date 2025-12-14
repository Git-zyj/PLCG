/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 = (+-49);
                                var_20 = (min((max(((58 ? var_1 : -8673673953675283660)), (119 / -95))), ((min(30397437498331166, 122)))));
                            }
                        }
                    }
                    var_21 = (max((-31 != var_15), (min((arr_9 [i_0 + 1] [i_0 + 4] [i_0 + 4]), (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_22 = ((((((arr_15 [i_0] [i_0]) & (arr_15 [i_0] [i_0])))) ? ((min(64, -74))) : ((167 | (arr_15 [i_0] [i_6 + 3])))));
                                var_23 = (min(var_23, (arr_10 [i_2] [i_2] [i_6 - 2])));
                                var_24 = var_1;
                                arr_16 [i_0 + 2] [i_0] [i_0 + 3] [i_0 + 3] [i_0] = min((arr_3 [i_0]), (arr_5 [i_1] [i_1] [i_0 + 3]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= (min(18, -119));
    #pragma endscop
}
