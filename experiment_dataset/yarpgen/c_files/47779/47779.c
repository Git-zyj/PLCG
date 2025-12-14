/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(30, ((202 ? (!255) : var_3))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (min(var_13, (((((((((arr_3 [i_0]) * (arr_2 [i_0])))) ? (arr_3 [i_0]) : (max(1462278511, 137)))) <= (arr_5 [i_0] [i_1] [i_0]))))));
            arr_6 [3] [i_1] = (((!11) ? (arr_0 [i_0]) : (max(1462278509, 30))));
            arr_7 [i_1] = var_1;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_14 += ((-((1462278509 ? (arr_8 [i_0] [i_2] [i_0]) : 4294967284))));
            var_15 |= 252;
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_14 [i_0] |= (!103);
            arr_15 [i_0] [i_3] [i_3] = var_10;
            var_16 = (arr_9 [i_3 + 1] [i_3 - 3]);
        }
        var_17 = 1;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] = (arr_10 [14] [14]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_23 [i_5] = ((!(arr_11 [i_5])));
            arr_24 [i_5] [i_5] = (arr_2 [i_4]);
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_27 [i_6] = 516693599;

        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_18 = (!148);
            var_19 = (((((arr_25 [20]) ? (arr_26 [11]) : 20684))));
        }
        var_20 = ((((((arr_28 [i_6] [10]) ? (arr_28 [24] [24]) : (arr_25 [i_6])))) ? ((195 ? 135 : 239)) : 0));
    }
    var_21 = 498642820;
    #pragma endscop
}
