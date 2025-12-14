/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_2] [7] [i_2] [i_0] = var_1;
                                arr_16 [i_0 + 1] [i_2] [i_3] [i_4] = (!var_5);
                            }
                        }
                    }
                    var_13 = var_4;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0 + 1] [i_0] [i_6] [i_5] [i_2] [i_2] |= ((2257982380 ? -1616030834122580456 : 2257982380));
                                var_14 = ((((var_0 ? var_10 : var_9))) ? var_10 : var_10);
                                arr_23 [i_2] [i_2] [i_2] = -10841771389509288726;
                                arr_24 [i_2] [i_6] = ((var_5 ? var_0 : ((var_0 ? var_6 : var_7))));
                                var_15 += (~97);
                            }
                        }
                    }
                    arr_25 [i_2] [i_1] [8] [i_1 - 1] = var_3;
                }
            }
        }
    }
    var_16 = var_10;
    var_17 -= (((((var_8 ? ((var_8 ? var_4 : var_7)) : var_11))) ? var_6 : ((((var_9 ? var_7 : var_7))))));
    #pragma endscop
}
