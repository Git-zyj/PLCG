/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((~var_0) < (17470504570069651889 > -23159)))));
                                arr_15 [i_4] [i_0 + 4] [i_1] [i_4] [i_2] [i_3] [i_0 + 4] = max((~704529011), ((-((var_0 ? 1 : 15)))));
                                var_17 = (max((((-477432025 != (arr_12 [i_4 + 1] [i_4] [i_2] [i_2] [i_4] [i_0 + 3])))), 11356));
                            }
                        }
                    }
                }
                var_18 = 8704259320576012592;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_23 [i_0 + 2] [i_1] [i_5] = (max(var_3, (((arr_17 [i_0 + 1] [i_0]) ? (arr_17 [i_0 + 1] [i_0 + 1]) : (arr_17 [i_0 + 1] [i_0 + 1])))));
                            var_19 = ((((137438951424 ? (arr_13 [i_0 + 2] [i_0] [i_0 + 3] [16] [i_1] [i_1] [3]) : (arr_13 [i_0] [i_0] [i_0 + 1] [i_5] [i_0 + 1] [9] [i_6]))) * (((max((arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2]), (arr_10 [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 + 4])))))));
                            var_20 = var_4;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
