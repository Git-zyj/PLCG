/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(0, (max(51707, 32418))));
        arr_3 [i_0 + 2] = (!(((((((arr_1 [i_0]) ? var_2 : 115))) ? (124 && 19407) : -3876))));
        arr_4 [i_0] = (((~var_2) << (((((min(723808412, -723808413)) + 723808437)) - 9))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((((arr_5 [i_0 + 1] [i_0 + 1]) ? (arr_5 [i_0 + 2] [i_0 + 2]) : (arr_5 [i_0 - 1] [7])))) ? (max(59, (arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_1]))) : (arr_5 [i_0 + 2] [i_0 + 2])));
                    arr_11 [i_0] [i_0] [i_0] = (-19408 == 2047);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [10] = ((+(min(((var_7 ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_8)), 17648662125612562992))));
                                arr_19 [i_2] [8] [i_2] &= ((((((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) + (arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) ? ((79 ? 31593 : 15)) : ((((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) >= 43)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_23 [i_5] = (max(((-39 ? ((max(132, -40))) : 56277)), -15076));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] = (min(((min(-723808412, 22983))), (64 && 58696)));
                                arr_35 [i_9] [i_9] [i_7] [i_9] [i_9] = (96 != 255);
                            }
                        }
                    }
                    arr_36 [i_6] [0] [0] [i_6] = ((138 ? (2718325140 & 3) : (max(12408657222316124074, 4))));
                    arr_37 [i_5] [i_5] [i_6] [i_7] &= (26 + 22983);
                    arr_38 [i_5] [i_5] = 7;
                }
            }
        }
    }
    var_10 = ((((min((4194303 != 245), var_6))) && (((min(22981, 253))))));
    var_11 = (((((3867 ? 9258 : (3876 >> var_1)))) ? var_5 : (((-9223372036854775807 - 1) << ((max(var_1, 0)))))));
    var_12 = ((-(max((var_4 != 102), (min(var_4, var_7))))));
    var_13 = ((((((-9223372036854775807 - 1) ? var_2 : 205))) ? 16754116458823226379 : ((1 | (1533927434 >= 2857039685)))));
    #pragma endscop
}
