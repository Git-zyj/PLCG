/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (min(var_20, 1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((1093026440 ? (((arr_8 [i_0] [i_1] [0] [i_4]) / (arr_6 [i_0] [i_0] [i_2]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [8]))))));
                            arr_14 [i_0] [i_1] = (!20);
                        }
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [9] [i_5] = arr_15 [i_5 + 3] [i_5 - 2] [i_5] [i_5 + 1] [i_1];
                            arr_20 [i_3] [i_3] = (var_12 == (arr_15 [i_5 - 3] [4] [i_5 - 3] [i_5] [i_5 + 3]));
                            var_22 *= ((19767 ? (arr_4 [i_5 + 3] [i_1]) : (arr_3 [i_0])));
                        }
                        arr_21 [i_0] [3] [i_2] [i_3] = ((~(arr_16 [i_0] [i_1] [3] [i_3] [i_3])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_26 [i_0] = (arr_0 [i_0]);
            var_23 *= (((0 | 15) != (arr_2 [i_0] [i_6])));
            arr_27 [i_0] [i_6] = (arr_15 [i_0] [i_0] [i_0] [i_6] [i_6]);
            arr_28 [i_0] [i_0] [11] = 74;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_33 [9] [i_6] [i_7] [i_8] = -var_9;
                        arr_34 [i_0] = -29454;
                    }
                }
            }
        }
        arr_35 [i_0] = (((((-72 ? ((max((arr_9 [i_0] [i_0] [i_0]), var_11))) : (min((arr_5 [i_0]), var_8))))) || ((max(29453, 29476)))));
        var_24 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_25 = (arr_2 [10] [10]);
        var_26 = (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) >= -31));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_27 = ((-(((arr_36 [i_9]) ? (arr_36 [i_9]) : (arr_37 [i_9] [i_9])))));
        arr_38 [i_9] = 1;
    }
    var_28 = (max(var_28, (((0 | (1 / 841387443))))));
    var_29 = var_9;
    var_30 = var_8;
    var_31 = (max(var_3, ((1670183046 | ((1 ? -6113806304675865463 : var_1))))));
    #pragma endscop
}
