/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (19 && 1167468852);
                                var_20 = (min(3127498444, 11));
                                arr_12 [i_3] = ((-537991506 ? ((1634028714 ? (((-(arr_10 [i_3] [i_3] [i_2] [i_1] [i_3])))) : (max(6591152642627972702, var_6)))) : (((arr_8 [i_0] [i_1] [i_1] [14] [i_3] [i_3]) ? -var_14 : (((max(var_2, 1))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = (((((!((!(arr_6 [i_1] [i_1] [i_1] [i_0])))))) != (((((1167468852 & (arr_8 [i_0] [6] [i_2] [i_3] [i_4] [i_3]))) != -1167468852)))));
                            }
                        }
                    }
                    var_21 = (arr_7 [i_0 + 3] [i_0 + 3]);
                    arr_14 [i_0] [i_0] [i_0] = (((((~(arr_8 [i_0 - 4] [i_1] [i_0 - 3] [i_1] [i_0 - 3] [i_1])))) ? var_9 : (((-6591152642627972717 == 2660938576) ? 1 : (arr_6 [i_2] [i_1] [i_1] [9])))));
                    arr_15 [i_0 + 3] = (1935619192522913583 & ((((~4294967293) ? var_11 : (arr_10 [i_1] [i_1] [i_1] [i_2] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_22 = (32767 > 40895);

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_22 [i_1] = ((((var_0 | -9223372036854775795) != 51095)));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_26 [1] [i_1] [i_5] [i_6 - 1] = (((arr_2 [i_0 + 3] [i_0] [i_6 - 2]) ? (arr_1 [i_0 + 2]) : var_7));
                            arr_27 [i_7] [i_6 + 1] [i_5] [i_0] [i_0] = (((((0 ? -537991491 : (arr_19 [i_1] [i_5] [i_7])))) ? (arr_19 [i_0 - 1] [i_1] [i_0 - 1]) : 13));
                        }
                        var_23 = (min((((!((((arr_16 [i_0]) ? (arr_19 [i_6] [i_1] [i_0]) : 81646705)))))), ((((min(0, -320611654))) ? (((arr_0 [i_1]) ? (arr_6 [i_6] [i_5] [i_1] [i_0]) : var_0)) : (arr_10 [i_0] [i_5] [i_1] [10] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_8] [i_5] [i_0] [i_0] = (min(((0 ? var_11 : (1 != -19482))), (((!(arr_20 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                        var_24 = ((((max((((1 | (arr_18 [i_8] [i_5] [i_1] [i_0])))), (((arr_4 [i_0] [i_5] [i_0]) & 320611650))))) ? 537991485 : (min(320611668, (~1772549635)))));
                    }
                }
                var_25 = (arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_1]);
                var_26 = (arr_20 [i_0] [i_0] [4]);
            }
        }
    }
    var_27 += ((~(~var_16)));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            {
                var_28 = ((+(((((arr_16 [i_9 - 1]) ? (arr_34 [i_9] [i_9] [i_10]) : 15430)) << (!var_7)))));
                arr_38 [i_9] [i_10 - 1] = (!27073);
            }
        }
    }
    var_29 -= (var_4 ? (max((((var_13 ? 4294967295 : var_4))), (max(var_16, 18446744073709551606)))) : 31);
    var_30 = ((((!(!1634028726))) ? var_18 : var_7));
    #pragma endscop
}
