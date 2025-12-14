/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0]);

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_14 = ((((((16932923859181617292 ? 16932923859181617269 : 16932923859181617263)))) || (arr_11 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0])));
                        var_15 = (min((((!(arr_5 [i_0] [i_1 - 2] [i_3 - 2])))), 16932923859181617292));
                        var_16 = -var_13;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_17 = (((((var_4 ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : (arr_1 [i_0])))) ? 16932923859181617284 : (arr_11 [i_2] [i_0] [i_1] [3] [i_0] [i_1 + 2])));
                        var_18 = 1513820214527934323;
                    }
                }
            }
        }
    }
    var_19 ^= var_7;
    var_20 = ((var_10 ? ((var_10 ? var_5 : ((1513820214527934352 ? var_12 : 3804235301)))) : -1513820214527934350));
    #pragma endscop
}
