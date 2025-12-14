/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = 13800;
                            arr_12 [i_0] [i_0] [i_2] [i_3] = -8921895629431806233;
                            var_19 = (((((208762969 ? var_9 : var_10))) <= ((var_13 ? (8921895629431806233 / var_15) : var_4))));
                            var_20 |= (-55 != 265161085);
                            arr_13 [i_0 + 2] [i_0 + 2] [i_2] = var_2;
                        }
                    }
                }
                arr_14 [i_0] = var_5;
                arr_15 [i_0 + 2] = ((((8631490756642206989 / (2202799839 | -1622723826))) > 800636807));
                var_21 = ((!(((163 / ((1 ? -8921895629431806233 : -8921895629431806233)))))));
            }
        }
    }
    var_22 = 1;
    var_23 -= 8921895629431806245;
    var_24 = 2180426490;
    #pragma endscop
}
