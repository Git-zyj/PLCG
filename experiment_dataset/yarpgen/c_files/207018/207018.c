/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(!127)));
    var_13 = ((var_5 ? (!-17260) : -17247));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((~3560670284) ? ((17239 ? 3732992823 : 594087856771166664)) : (!0)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 |= (((--561974473) * ((((arr_8 [i_2]) * (((arr_1 [1]) * 1)))))));
                                arr_12 [i_1] = (!3732992814);
                                arr_13 [5] [i_0] [i_1] [1] [4] [i_1] [i_0] = ((((18 ? 9 : 54)) >= -51));
                            }
                        }
                    }
                }
                arr_14 [i_1] [1] = 3732992806;
                var_15 = (min(var_15, 8));
            }
        }
    }
    var_16 = ((!((((~var_8) ? -9 : ((var_6 ? 1764814725542159518 : var_4)))))));

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_17 = (~1);
                        arr_27 [i_5] [i_7] [i_8] |= ((1 ? 14415605426604060651 : 1));
                        var_18 = (~1878877602);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_19 = (arr_17 [i_9]);
                    var_20 = (((!((((arr_31 [i_10] [i_5 + 2] [i_5 + 2]) ? (arr_16 [i_5 - 1] [i_9]) : -10))))));
                }
            }
        }
        arr_35 [4] [4] = 561974481;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_39 [i_11] = ((~((41 ? (arr_37 [i_11]) : -5109529303701261944))));
        var_21 = 98;
    }
    #pragma endscop
}
