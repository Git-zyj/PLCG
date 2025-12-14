/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(var_8, -109))) > var_8)) ? var_7 : (max(var_2, var_8))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0 + 2]) / 1882078995553656910)) - (arr_0 [i_0] [i_0 - 2])));
        var_11 = (min(var_11, ((14 ? ((48127 ? (arr_0 [i_0 + 2] [i_0 + 1]) : var_0)) : (((~(arr_0 [i_0] [i_0]))))))));
        var_12 = (max(var_12, ((((((+(((arr_0 [i_0] [i_0]) ? (arr_0 [6] [6]) : 1807514033))))) & (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 = (arr_5 [i_1] [i_1]);
        arr_6 [i_1] = (((((1615608514 & (arr_3 [i_1]))) ? (~4139) : ((-1807514022 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = (((arr_7 [i_2] [i_2]) ? (arr_3 [i_2]) : var_3));
        arr_10 [i_2] [i_2] = (!32767);
    }
    var_14 = (max(var_14, 3337155929155251571));
    var_15 -= var_0;
    #pragma endscop
}
