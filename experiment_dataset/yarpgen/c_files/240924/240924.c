/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = (arr_7 [i_0] [i_0] [i_1] [i_1 + 2]);
                            arr_9 [i_3] [12] [i_1] [12] [i_1] [i_0] = (~((~(max((arr_1 [i_1]), (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                            var_18 = -18242;
                            var_19 = ((~((((((arr_4 [i_0] [i_1]) ? var_5 : var_12))) ? (arr_7 [i_3] [i_2] [i_1] [i_0 - 1]) : (((!(arr_3 [i_1]))))))));
                        }
                    }
                }
                var_20 += (((arr_4 [8] [i_1 + 1]) && ((!(((-(arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))))))));
                var_21 = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_22 = (-var_7 ? ((var_6 ? ((-18214 ? -5557540857838459470 : 11854541928498736049)) : (~var_7))) : ((((arr_14 [i_4] [i_4] [i_5]) ? var_4 : ((var_1 ? var_8 : var_1))))));
                var_23 = var_10;
            }
        }
    }
    #pragma endscop
}
