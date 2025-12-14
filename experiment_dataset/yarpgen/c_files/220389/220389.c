/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((var_8 ? -72 : -114))) ? var_15 : var_11))) * (min((0 && var_4), 2765535209382692587))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((var_13 ? (15686072183121797423 | var_11) : (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1])));

                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            var_17 = arr_2 [i_1] [i_3];
                            arr_16 [i_2] [i_2] [i_2] [i_3] [i_2] [i_4] = (arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1]);
                            arr_17 [i_1] [i_3] [i_2] [i_2] [i_1] [6] = ((!(arr_8 [i_2] [i_2 + 1] [16] [i_2])));
                            arr_18 [i_0] [7] [i_0] [i_2] [i_4] [i_0] [i_0] = ((!(((arr_13 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]) > var_10))));
                        }
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            var_18 = (((((var_10 ? 47 : var_4))) ? var_14 : ((var_6 ? 29911 : -6851891178179788323))));
                            arr_21 [i_0] [i_1] [i_2 + 1] [i_2] [0] = -3366522068;
                            arr_22 [i_0] [i_0] [i_2] [9] = (((arr_9 [i_5 + 1] [i_5 + 1] [i_3] [i_2 - 1]) ? (arr_14 [i_5 - 4] [i_2] [i_2] [i_2 + 1] [i_2 - 1]) : (arr_9 [i_5 - 3] [i_5 - 3] [i_2 - 1] [i_2 - 1])));
                            arr_23 [i_0] [i_1] [i_0] [i_2] [i_5 + 2] = var_9;
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((204 ? var_5 : (-150017042158769715 + var_5)));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_19 = (arr_10 [3] [i_3] [i_0] [i_0]);
                            arr_28 [i_6] [i_1] [i_1] [i_2] [12] [i_2 - 1] = ((var_6 ? (arr_19 [i_2] [18] [i_2] [i_3] [18]) : var_15));
                            var_20 = ((43341 <= ((-22 ? (arr_10 [19] [12] [19] [12]) : 2778624638083455055))));
                            arr_29 [i_0] [i_1] [i_0] [i_3] [i_2] = (((arr_0 [i_2 + 1]) ? (var_7 << var_13) : (((var_4 || (arr_7 [i_0] [i_1] [i_1] [i_0] [i_3] [i_6]))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_21 = (!8311);
                        arr_34 [i_0] [i_0] [i_2] [i_0] = (arr_10 [i_0] [i_0] [7] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((arr_12 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_8]) ? (arr_20 [8] [i_2 + 1] [8] [i_2 + 1] [i_8]) : (arr_20 [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? var_3 : (arr_20 [i_2 + 2] [i_2 + 1] [11] [i_2] [i_2 + 1])));
                        arr_38 [i_2] [i_2] [1] [i_2] [i_8] = ((~(((arr_5 [i_2 + 1]) ? 17409140702949423333 : (arr_5 [i_2 + 1])))));
                        arr_39 [i_0] [i_2] [i_2] [i_8] = (((var_15 || 13386) ? (arr_19 [i_2] [i_1] [i_2 + 2] [i_2 + 2] [17]) : (arr_19 [i_2] [i_1] [i_2 - 1] [i_1] [15])));
                    }
                    arr_40 [i_2] [5] [i_2] = (-4547272066573502990 && 5545777967567122837);
                    arr_41 [11] [i_2] = var_9;
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = 12102561660714834402;
    #pragma endscop
}
