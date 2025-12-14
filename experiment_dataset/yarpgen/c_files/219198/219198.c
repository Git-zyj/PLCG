/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((1 | -4451964385185023350) < (max(1, var_0))));
    var_12 = (((var_3 + var_3) ? ((((var_2 & 2147483647) < (max(var_2, 4185869935072609985))))) : (min(1, 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = 1;
        var_14 = ((1 ? (var_1 / 21643) : -2994144672228646505));
        var_15 = (((54193 || var_10) << (((var_7 >= (arr_0 [i_0]))))));
        var_16 = (min(var_16, 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = ((+((var_10 ? (arr_2 [i_1]) : -1983885129))));
        arr_5 [i_1] = (((arr_2 [i_1]) ? 1 : var_6));
        arr_6 [i_1] [i_1] = (((((1 ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (~558446353793941504) : (((arr_3 [i_1]) ^ var_4))));

        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] [i_1] |= 43892;
            var_17 = ((4032 ? var_3 : (arr_3 [i_1])));
        }
        var_18 = (min(var_18, var_8));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((((max((arr_12 [i_3]), (min(41617, 3092010831))))) ? ((((21643 ? 41642 : 2994144672228646507)) + 61516)) : (((~((min(-122, var_10))))))));
        var_19 = (((arr_12 [i_3]) ? (((max((arr_13 [i_3]), 207)) + ((var_0 ? var_7 : 2994144672228646505)))) : (((arr_11 [11]) ^ -2))));
    }
    var_20 = ((var_5 ? ((var_5 ? ((7 ? 1459923080283311654 : 193)) : (((253 ? -2147483638 : 41629))))) : (((var_5 ? (179 & var_2) : (~1))))));
    #pragma endscop
}
