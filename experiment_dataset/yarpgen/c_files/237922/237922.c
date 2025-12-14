/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (((var_12 / 58) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 - 3])));
        arr_3 [13] = -58;
        var_14 = (!160);
        var_15 = ((var_10 + (arr_0 [i_0 + 1] [i_0 + 1])));
        arr_4 [i_0 - 4] &= (((arr_0 [i_0] [i_0]) - (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = var_5;
        arr_9 [i_1] [i_1] = ((~(arr_1 [i_1])));
        arr_10 [5] = var_10;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = var_2;
        var_16 = ((~(min((~30934), (!-3654)))));
    }
    var_17 = var_5;
    var_18 = ((+((var_6 ? (0 != -12709) : var_2))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = -8901778572767087129;
                    var_20 = (min(1558794957, (max(var_13, (arr_0 [i_3] [i_3])))));
                    arr_20 [i_4] = (((min(((var_3 ? -26065 : var_5)), ((min(119, (arr_0 [i_3] [i_3])))))) | ((((arr_14 [i_3] [i_4]) ? (arr_15 [i_5]) : 9410)))));
                    var_21 = (max(var_21, ((((!(arr_1 [i_3])))))));
                    arr_21 [i_4] [i_4] = ((min((arr_19 [i_3] [i_4] [i_5]), (arr_19 [i_3] [i_4] [i_4]))));
                }
            }
        }
    }
    #pragma endscop
}
