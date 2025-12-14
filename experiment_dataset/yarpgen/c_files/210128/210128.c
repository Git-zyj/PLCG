/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [10] [i_0] &= (min((arr_6 [24] [24] [24]), 1061359948));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 *= ((var_7 ? -7736 : (arr_12 [11] [i_2] [i_1 - 1] [i_0 + 3] [i_0 - 3])));
                                var_14 = (((arr_2 [i_0]) ? (-7727 && 12) : (min(var_10, var_0))));
                                arr_13 [i_2] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = var_3;
                            }
                        }
                    }
                    var_15 += ((var_5 != ((((min(7746, var_8))) ? (((-7750 + 2147483647) >> (847003238 - 847003212))) : (((arr_1 [i_0 - 2]) ? (arr_7 [i_0] [8] [8] [8]) : 84))))));
                    var_16 += var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_17 += 4294967295;
                var_18 = (min(var_18, var_0));
                var_19 = (min((arr_4 [i_6] [i_5 + 1] [i_5 + 1]), var_6));
            }
        }
    }
    var_20 = -2081673502832735623;
    #pragma endscop
}
