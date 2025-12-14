/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((56428602 ^ 5) && ((min((~var_4), (30554 / var_17))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 += ((+((((((max((arr_1 [14]), -51)))) >= ((6265 ? var_9 : 1355706792)))))));
        var_22 += ((-((((((arr_2 [i_0 + 3]) ? (arr_2 [5]) : var_14))) ? (2428111177 ^ 1127615757) : (((-1606727873299658544 ? 2027982672 : var_13)))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1 + 2] [i_1 + 2] = max((arr_0 [i_1 + 1]), (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1]))));
        var_23 |= ((((min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))) ? ((var_18 ? (arr_0 [i_1]) : ((((-106 && (arr_1 [i_1]))))))) : (((((arr_3 [i_1 + 2]) || var_15))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 -= ((((-1 + (arr_0 [i_2]))) > (arr_2 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_25 += ((var_14 > (arr_10 [i_2] [i_3] [i_4 + 1])));
                    var_26 += (arr_0 [i_2]);
                    var_27 = (((arr_12 [i_2] [i_2] [i_4]) ? ((var_16 ? (arr_0 [0]) : var_11)) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                }
            }
        }
        arr_13 [i_2] = -1306055972;
        arr_14 [i_2] = (arr_0 [i_2]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] = (((arr_18 [i_5]) / ((5731873148699785934 | ((((arr_15 [7]) ? var_15 : (arr_17 [i_5]))))))));
        arr_20 [i_5] &= ((((93 && (!54))) && (((var_14 ? 43 : (arr_7 [i_5]))))));
        arr_21 [i_5] = var_19;
        var_28 = (min(var_28, (arr_18 [i_5])));
    }
    #pragma endscop
}
