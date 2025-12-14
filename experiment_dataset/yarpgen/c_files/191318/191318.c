/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_9, var_11));
    var_13 = ((var_6 >> ((((((min(var_6, 1792792338))) ? var_10 : (min(var_11, 13933251651727310731)))) - 45478))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 -= (2502174939 ? (((2502174939 ? 1 : -1))) : (max((arr_1 [i_0] [i_0]), 13933251651727310731)));
        var_15 = ((!(~var_10)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 += 2502174983;
            var_17 -= (((arr_6 [i_1]) * 63));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_1] = (((((arr_6 [i_1]) && 93)) ? ((var_6 ? 1 : 13933251651727310731)) : (arr_5 [i_3 - 1] [i_3 - 1])));
            arr_14 [i_1] [i_3] = ((var_9 ? (arr_12 [i_1] [i_3 - 1] [i_3]) : 1792792331));
            arr_15 [i_1] [i_1] = (~93);
            arr_16 [i_1] = 1;
            arr_17 [i_3] [1] [i_1] = (arr_12 [i_3 - 1] [i_3] [i_3]);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_20 [i_1] [i_4] [i_4] = (arr_4 [i_1]);
            var_18 = 3606;
            arr_21 [i_4] = (!var_1);
            var_19 = (((arr_11 [i_1]) >= 4294967295));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_20 += ((!(var_2 || var_9)));
            arr_24 [i_1] = ((163 ? (arr_12 [i_5] [i_1] [i_1]) : 2534226326217960602));
        }
        var_21 = (max(var_21, (arr_7 [i_1] [i_1])));
        var_22 = ((112 ? 0 : ((4513492421982240890 ? 4513492421982240885 : (arr_8 [i_1])))));
        arr_25 [13] = 1;
    }
    #pragma endscop
}
