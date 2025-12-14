/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_10 = ((((1152780767118491648 ? (arr_2 [1]) : (((arr_0 [i_0] [i_0]) ? 830170890307874450 : -24965)))) >= ((min(24965, (max(255, (arr_1 [i_0]))))))));
        var_11 = (max(30, -1152780767118491649));
        arr_4 [i_0] [8] = min((~var_2), 30);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_12 = ((((-29627 != ((min(-29627, 7)))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] = var_7;
                    arr_12 [i_1] [22] [i_3] [i_2] = ((arr_3 [i_3 + 1]) ? (min((arr_10 [i_2] [i_3] [i_3 - 1] [i_1]), (arr_10 [i_2] [i_2] [i_3 + 1] [1]))) : (min(var_2, (var_5 / var_1))));
                    arr_13 [5] [i_2] [i_3] [i_2] = ((((~(arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2]))) <= ((var_5 ? ((-32131 ? 30 : (arr_6 [19]))) : ((var_6 ? var_3 : (arr_9 [i_1] [i_2 - 2] [i_2 - 1] [i_1])))))));
                    var_13 = (((((((5 ? 17824076749837928521 : 2147483647))) && var_0)) ? ((((162 ? 0 : 11353)))) : var_5));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_14 *= ((((1152780767118491648 ? var_7 : (arr_16 [i_4] [i_4]))) <= ((((arr_7 [i_4] [i_4] [i_4]) ? (arr_16 [i_4] [i_4]) : 1)))));
        var_15 = (!-29627);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_5] [17] = (max(((var_0 ? 163 : (arr_8 [i_5 - 1]))), ((((arr_17 [i_5] [i_5 - 1]) ? ((((arr_6 [i_6]) || (arr_10 [i_6] [i_5] [i_4] [i_4])))) : (!3402832289))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_29 [i_6] [i_7] [i_6] [i_7] [7] [i_5] = ((-1 ? -91 : 24964));
                                var_16 -= ((((-0 ? (var_6 * 100) : (!var_1)))) * (min((min((arr_10 [23] [i_5 - 1] [i_7] [23]), (arr_26 [i_8] [i_7] [i_6] [i_7] [i_7]))), (244 - -2067355435524269154))));
                            }
                        }
                    }
                }
            }
        }
        var_17 = (min((min(0, (arr_0 [i_4] [i_4]))), (min((arr_17 [i_4] [22]), (arr_17 [i_4] [i_4])))));
    }
    var_18 = var_4;

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_34 [i_9] = (((((arr_26 [4] [i_9] [4] [i_9] [i_9]) <= 13226)) ? var_1 : (((arr_24 [i_9] [i_9] [i_9] [i_9]) ? var_7 : 251))));
        arr_35 [i_9] = (min((arr_6 [13]), (((arr_8 [i_9]) * (arr_7 [i_9] [i_9] [i_9])))));
        var_19 |= (min(2047, -25));
        arr_36 [i_9] = ((((((((arr_17 [24] [24]) <= var_2)) ? ((min(var_9, (arr_31 [7] [7])))) : ((max(1, (arr_9 [i_9] [i_9] [i_9] [i_9]))))))) ? (((94 ? var_9 : var_5))) : (((var_6 && (arr_6 [i_9]))))));
    }
    #pragma endscop
}
