/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = ((((((var_5 ? var_7 : 0)))) ? var_15 : (min(((max(var_10, var_7))), (min(0, var_10))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0 - 2]) ? (arr_1 [i_0]) : (((0 ? 0 : 0))));
        var_18 = -9021128749672353407;
        arr_3 [i_0] = ((18211273291632034042 && (arr_0 [i_0 - 2])));
        arr_4 [i_0] = (min((arr_1 [i_0 - 1]), var_9));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = (arr_10 [i_1] [i_1] [i_1]);
            var_19 = (arr_8 [18] [i_1] [12]);
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_20 = (max(var_20, (((var_3 ? 0 : (arr_9 [i_3 - 3] [1] [i_1]))))));
            var_21 = (max(var_21, (((arr_5 [17] [i_3 + 2]) ? (arr_5 [i_1] [i_3 + 1]) : 207))));
            arr_14 [i_1] [i_1] = 1036716629;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_19 [i_1] = 18446744073709551615;
            arr_20 [16] [i_1] [i_1] = 127;
            var_22 = (arr_10 [i_1] [14] [i_1]);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_25 [i_1] [i_5] = (-9021128749672353407 + 0);
            arr_26 [i_1] [i_5] = 52;
            var_23 = (min(var_23, (arr_6 [i_1] [i_5])));
            arr_27 [i_5] = (((arr_15 [i_1] [9]) ? (arr_12 [i_1] [i_1] [i_1]) : (127 <= 3807301616)));
        }
        arr_28 [i_1] = (((arr_22 [i_1] [i_1]) != 0));
    }
    #pragma endscop
}
