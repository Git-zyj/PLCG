/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_13;
    var_16 = (max(var_4, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] &= ((112 == (arr_1 [i_0] [i_0])));
        var_17 += 4294967292;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = ((!(arr_0 [i_1] [i_0])));
            arr_6 [i_0] [i_0] [i_1] = (arr_0 [i_0] [10]);
            arr_7 [i_1] = ((!((((arr_4 [2] [i_0] [i_1]) ? (arr_4 [i_1] [i_1] [0]) : (arr_5 [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4]) && 99)))));
                            var_20 = (((!99) ? 33856 : 65535));
                            var_21 = ((!(arr_8 [i_2] [i_1] [i_2] [i_3])));
                            arr_16 [0] [0] = (((arr_1 [i_2] [i_3]) ? var_13 : var_1));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [9] [i_1] [i_1] [i_2] [i_3] [i_5] = (!-17);
                            var_22 &= (!-929943506);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_2] [i_3]);
                            var_23 = ((arr_15 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5]) - (arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [1] [5]));
                        }
                        var_24 = (arr_17 [1] [i_1] [i_2]);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_24 [i_6] [i_6] = (((arr_12 [0] [i_6]) ? 1 : (arr_21 [i_0] [i_6] [i_6])));
            arr_25 [i_0] [i_0] = (((arr_13 [i_6] [i_6] [i_6] [i_0]) ? var_5 : (arr_14 [i_0] [1] [i_0] [3] [i_0] [i_0])));
        }
    }
    #pragma endscop
}
