/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_12;
        var_18 = ((-(arr_0 [i_0])));
        arr_5 [7] = ((((((3659 ? (arr_0 [i_0]) : var_8)) >> ((min((arr_0 [i_0]), (arr_0 [i_0]))))))) == var_12);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 = (max(var_19, (((((max((arr_6 [i_1]), (arr_6 [i_1])))) ? (arr_6 [i_1]) : (((max((arr_6 [i_1]), (arr_6 [i_1]))))))))));
        var_20 = (((((~(arr_2 [i_1] [i_1])))) || 243));
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_21 -= ((!(arr_13 [i_4] [i_4] [i_3] [4])));
                    var_22 ^= (((((var_8 ^ 1776124916) ? (arr_12 [i_4] [i_3] [i_2]) : (var_12 || var_2))) * (((arr_12 [i_2] [12] [i_4]) ? (arr_9 [i_4] [i_2]) : (var_8 | 176010200)))));
                }
            }
        }
        arr_14 [i_2] = 57094;
        var_23 = (min(var_23, ((((((min((arr_8 [i_2]), var_8))) ? var_4 : ((86 ? -9213 : 11986800602850428130))))))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_24 = (((arr_13 [i_5] [i_5] [4] [i_5 + 1]) >= ((86 * ((1150627190 ? var_9 : var_6))))));
        var_25 *= (((((((min(46, var_7))) ? ((var_16 << (((arr_16 [i_5] [i_5]) - 35)))) : (arr_11 [i_5 + 1])))) ? (((95 == 100) ? ((var_8 ? -16 : (arr_16 [i_5] [i_5]))) : ((((arr_10 [i_5] [i_5 - 1] [i_5 + 1]) || 1776124908))))) : (((~var_1) | var_17))));
        arr_19 [i_5] [i_5 + 1] = ((!((min(((min(var_13, 13791))), (max(46, 4294967284)))))));
        var_26 = ((((max((!123), (((arr_16 [i_5] [i_5 + 1]) <= (arr_18 [3])))))) - (arr_12 [i_5 - 1] [i_5] [i_5 + 2])));
    }
    var_27 = (max(var_27, var_10));
    var_28 = var_9;
    #pragma endscop
}
