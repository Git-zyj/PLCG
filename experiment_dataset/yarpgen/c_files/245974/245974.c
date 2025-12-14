/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (4294967272 <= 3484583094);
    var_20 &= (((min((((var_7 ? var_9 : var_11))), (min(var_0, 25)))) << ((((-9373 ? 0 : 1))))));
    var_21 = (max(var_21, (var_6 >= var_6)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((((((min((arr_0 [10] [13]), var_9))) > (arr_2 [i_0] [i_0]))) ? ((min((!1), ((!(arr_1 [6] [14])))))) : (!-1)));
        var_23 = var_11;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [0] [i_1] = (max((1 == 1750951466), (max((1 / -81), (0 > var_10)))));
        arr_7 [i_1] = var_2;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_24 = ((!((max(((max(80, var_11))), (var_11 >> 1))))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_25 = ((((1 ? var_13 : (arr_14 [i_3 - 2] [5] [i_3 - 2] [i_3 - 2] [3] [i_3 - 2])))) ? (((var_18 ? (arr_2 [i_3 - 2] [i_3 + 1]) : var_2))) : ((-107 ? var_4 : 3058492829)));
                            var_26 = 2172320684;
                            var_27 += (((1 && 3058492829) <= (min((~1750951466), ((max(var_4, -65)))))));
                            var_28 = (min(var_28, 1812451782));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_29 += (max((((arr_17 [i_1 + 2] [i_6] [i_6] [i_4] [i_6]) ? (arr_18 [i_4] [16] [12]) : var_16)), (arr_16 [1] [i_4] [i_3 - 1] [10])));
                            arr_20 [i_1 + 1] [1] [i_1 + 1] [i_1] [2] = (min((arr_2 [i_1 + 1] [11]), ((1 ? (1 * var_8) : -2429))));
                            arr_21 [i_1] [6] = (min((max(var_9, (arr_15 [4] [1] [12] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (((3618349006 >= (arr_15 [i_2 - 1] [13] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [16]))))));
                            arr_22 [i_4] [16] [10] [i_4] [0] [i_3 - 2] [i_1] = var_2;
                            var_30 = ((!((max(var_10, -98)))));
                        }
                    }
                }
            }
        }
        arr_23 [i_1] = (((((arr_18 [i_1] [i_1 - 1] [0]) ? 3686443208 : var_18)) >> (((max(138989532, var_11)) / 1750951442))));
        arr_24 [i_1] = ((var_3 || ((((((var_3 ? var_15 : -22))) ? ((((var_17 == (arr_13 [i_1] [i_1 + 3] [7] [i_1]))))) : (~var_7))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_31 = (max(var_31, var_14));
        arr_28 [i_7] = (((arr_26 [i_7]) || (((((min(var_3, 1))) << ((((var_3 ? 1071644672 : 2822)) - 1071644656)))))));
    }
    #pragma endscop
}
