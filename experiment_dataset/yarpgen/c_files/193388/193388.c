/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_1] [i_1]);
                arr_6 [i_1] [3] [i_1] = (((((((-(arr_0 [i_1]))) * (arr_1 [i_1] [i_0])))) ? (max(((var_0 ? var_10 : var_8)), -var_0)) : var_3));
            }
        }
    }
    var_16 = var_5;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = var_5;

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_15 [i_4] [i_3] [i_3] [i_2] = var_13;
                var_17 = (((((((((arr_11 [i_4] [17] [17]) ? 62 : (arr_10 [i_2] [i_2])))) ? ((~(arr_4 [i_3] [i_3]))) : (((-4 ? -18 : 26438)))))) % (((arr_3 [i_4]) ? (arr_12 [i_4]) : var_3))));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_19 [i_2] [i_2] = ((+((((arr_11 [i_2] [i_3] [i_5]) <= ((~(arr_16 [i_3]))))))));
                arr_20 [i_2] [i_3] [i_5] [i_3] = (max((arr_10 [i_2] [1]), 127));
                arr_21 [1] = ((var_9 ? (max((arr_4 [i_2] [i_3]), (arr_4 [i_3] [i_5]))) : (arr_13 [i_2] [i_2] [i_2])));
                arr_22 [i_2] [i_2] [i_5] = (((max(1, var_13))) ? (((((var_13 ? 208 : (arr_1 [i_2] [i_3])))) ? var_1 : (max((arr_3 [i_2]), 3531034240)))) : (~var_9));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_18 = -var_4;
                var_19 = var_10;
                var_20 = 25;
            }
            arr_25 [i_2] [i_3] [i_3] = (((0 | 39231) ? 43440 : (((3 && (arr_16 [i_2]))))));
        }
        arr_26 [13] = 46029;
        var_21 |= var_12;
    }
    var_22 = 5948525215770680896;
    #pragma endscop
}
