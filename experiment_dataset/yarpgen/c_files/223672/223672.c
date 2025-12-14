/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = min((max(-14, -1733754703)), ((-1093911559 ? (max((arr_1 [i_0] [i_0]), 1865037975)) : -1093911536)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = -768879590;
                        var_19 = max(120895266, -1498415245);
                        arr_11 [i_0 + 3] [i_1] [i_0 + 3] [i_1] = ((-937741468 && ((max(var_16, var_10)))));
                        arr_12 [i_1] = ((((min((min(var_8, var_15)), (!var_0))) + 2147483647)) << (((-2087223719 + 2087223746) - 27)));
                    }
                    arr_13 [9] = max((!1093911564), -120895263);
                    arr_14 [i_0] [i_1] [7] = min(var_4, 1093911537);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = (((((776293377 >= ((-353516572 ? 8176 : (-2147483647 - 1)))))) != ((((-2147483647 - 1) == 2147483646)))));
                                arr_25 [i_0] [i_4] [i_5] [i_0] [i_4] [i_7] [i_0] = max(549189785, (~2047));
                            }
                        }
                    }
                    arr_26 [8] [8] [i_4] = ((var_2 && ((((arr_7 [i_5] [i_0 + 2] [i_0] [i_0]) ? -2147483643 : 1509671737)))));
                }
            }
        }
        arr_27 [i_0] [i_0] = 1097960467;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        var_21 = (1018545796 - 585743584);
        arr_31 [i_8 + 1] = -1768226770;
        var_22 = ((arr_28 [i_8] [i_8 - 2]) / -674437235);
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_23 -= ((~var_4) ? (var_16 && 718899234) : ((min(549189785, (-2147483647 - 1)))));
        var_24 = (max(var_24, ((1981886049 ? 2147483641 : -585743589))));
    }
    var_25 = max(((583508921 ? -798544674 : 35)), (min(var_9, (1961530537 - var_17))));
    #pragma endscop
}
