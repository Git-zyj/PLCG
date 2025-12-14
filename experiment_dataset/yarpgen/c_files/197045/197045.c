/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((27016 ? var_17 : 1840739872)), 0))) >= (min(-var_2, ((0 ? 97 : 8543323507310927063))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((!17394763349188022301) == (9903420566398624553 * 0)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = (((min(1, -560))));
                                var_20 = (min(var_20, ((((-(arr_8 [i_0] [i_4] [i_0] [i_0])))))));
                                arr_15 [i_0] [i_1] = ((((15 ? 1 : 2919))) ? var_0 : 1);
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = (max((min((~var_3), (var_4 <= var_5))), ((((((var_5 ? (arr_0 [i_0] [i_0]) : var_15))) ? ((117 ? 57936 : var_18)) : var_13)))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 = (((var_15 & var_1) ? var_13 : ((min((arr_8 [i_5] [8] [8] [i_5]), var_18)))));
        var_22 = (min((!-8543323507310927063), (!65518)));
        var_23 = ((9903420566398624553 ? (((((arr_9 [i_5] [10]) <= 1)))) : (max(1840739889, 3204))));
        arr_19 [i_5] = (((((((3796194608 ? 1604729883 : var_16))) ? (var_0 <= var_5) : var_16))) ? ((((!1156686383) >> ((((var_15 ? var_15 : var_5)) - 438091693))))) : (min(((var_18 ? var_5 : var_12)), var_1)));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_24 = ((var_10 ? 4294967282 : ((min(var_0, var_4)))));
                    arr_29 [i_6] [i_6] [i_8] = (((((102 % ((var_10 ? var_0 : 25))))) ? ((min(var_6, -17380))) : ((1 ? (min(var_5, var_17)) : -16384))));
                }
            }
        }
    }
    #pragma endscop
}
