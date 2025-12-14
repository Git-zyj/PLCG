/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = var_3;
    var_12 = (min(var_12, (((((((!1431397704) ? (((-2147483647 - 1) + 3251030879)) : var_4))) ? (!var_0) : -67108863)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (~2)));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_14 [i_3] [i_2] [i_2] [i_0] = (max(((((arr_7 [i_0] [i_0 - 1] [i_2 + 2]) ? (min((arr_4 [i_1] [i_2] [i_1]), 0)) : (((arr_13 [i_2]) ? 0 : (arr_0 [i_0])))))), (((-15004 + var_0) ? (min((arr_9 [i_0] [i_0]), var_3)) : ((((arr_7 [12] [1] [i_3]) + (arr_6 [i_0] [i_0]))))))));
                        arr_15 [i_3] [i_3] [i_3] [i_2] = 1431397704;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_14 = (((arr_11 [i_0 + 1]) ? (((~1043936416) ? 186 : (((arr_10 [i_0] [i_1] [i_2 + 2] [i_2] [i_4]) ? 0 : (arr_19 [i_2] [i_3] [i_2] [i_0] [11] [i_2]))))) : (((((arr_12 [i_0] [i_1] [9] [9]) > (arr_13 [i_2])))))));
                            var_15 = (arr_9 [i_3] [i_4]);
                            var_16 = (min(var_16, ((((((4294967295 ? var_2 : ((69 ? var_9 : var_5))))) ? ((var_7 ? ((min((arr_2 [i_2]), var_1))) : (((arr_9 [i_4] [13]) ? 37121 : var_2)))) : (max((arr_12 [i_2 + 1] [i_1] [i_0 + 1] [i_0 + 1]), (!53598))))))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_17 *= 53796;
                        arr_22 [i_0] [i_1] [i_2] [i_5] [16] [i_5 + 1] &= (min((((((var_3 ? var_1 : var_3))) ? (arr_5 [i_2]) : var_2)), 115));
                        arr_23 [i_0] [i_2] [i_5] [i_5] [i_0] [i_0 + 1] = (((arr_6 [i_1] [i_0]) ? (arr_16 [i_0 - 1] [i_2] [i_2] [i_5 - 1] [i_0]) : var_5));
                    }
                    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, var_1));
                        arr_28 [i_0] [i_1] [i_2] [i_2] = 65535;
                    }

                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_31 [i_2] [i_2] [i_2] [i_2] = 14990191049087033050;
                        arr_32 [i_2] [i_7] [i_7] = 5452;
                        var_19 += 9680613;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, 154));
                        var_21 = -8483871829221254588;
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_2] [i_0] = ((((min(115, 3993242665))) && var_4));
                        arr_40 [i_0] [i_2] [i_2] [i_0] [i_2] [i_0] = ((((-(var_9 - 132))) >> (((((arr_37 [i_0 - 1] [i_1] [i_2 + 2]) ? (min(564338391, var_3)) : (arr_21 [i_0 + 1] [i_1] [i_2]))) - 564338370))));
                        arr_41 [i_2] [i_2] = (((max(var_3, -83))));
                    }
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        arr_45 [17] [i_2] [i_2] [i_2] [i_1] [i_0] = ((25794 ? -850184165 : 177));
                        arr_46 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((!((((!-70) ? (arr_1 [20] [i_1]) : (0 && 23))))));
                    }
                    arr_47 [i_2] [i_2] [i_0] = ((!((!((var_4 > (arr_1 [24] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
