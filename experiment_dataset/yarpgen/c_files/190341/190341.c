/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] = ((!(~var_17)));
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_0] [i_3] = var_10;
                            }
                        }
                    }
                    var_20 = (max(var_20, ((!((((var_10 ? 166 : (arr_0 [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_6] [i_5 - 1] [i_0] = ((((min((arr_6 [i_0] [i_5 - 1]), 18605))) ? (-11519 | 6380358155923470354) : (((~(var_14 | var_16))))));
                                var_21 -= (min(((~(arr_10 [i_5] [i_5] [i_5 - 2] [6]))), (arr_10 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] = var_5;
                var_22 = ((((((1869208100520274303 & 18605) ? (max(15322230237079074799, 1)) : (((max(173, (arr_26 [i_7] [i_7])))))))) && (~68)));
            }
        }
    }
    var_23 = (max(var_23, (((65 ? (((((var_1 != 1) && (((var_12 ? 45653 : var_9))))))) : (min(((37721 ? var_18 : var_8)), var_15)))))));
    #pragma endscop
}
