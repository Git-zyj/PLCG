/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0 + 1] [i_0] [6] [i_0 - 1] = (var_13 - var_4);
                        arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = (((65535 & var_2) ^ var_4));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_0] [i_4] = (arr_8 [i_0] [1] [i_4] [i_4 - 1]);
            arr_14 [1] [i_4] = ((2327252788 - ((var_10 ? var_5 : 1))));

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_15 = 1;
                arr_17 [i_4] [i_5] = ((17 ? 65507 : 32767));
            }
            arr_18 [i_4] [i_4] = (1 != var_8);
            arr_19 [i_4] [i_4] [i_4] = (~var_1);
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            var_16 = (((((1 ? (arr_30 [i_6 + 1] [i_7] [i_6 + 1] [i_10 + 1] [i_6 + 1]) : 1))) ? (65523 & 7) : (~var_8)));
                            arr_33 [i_7] [4] [i_9] [i_8] [i_7] [1] [i_7] = (~(((((((arr_26 [i_9] [i_8] [i_7]) < 0)))) + var_5)));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_17 = (min(var_17, ((((((((((arr_32 [1] [8] [i_6] [i_6] [i_6]) - (arr_21 [i_6]))) > ((var_10 ? (arr_32 [i_11] [i_9] [7] [i_6] [i_6]) : var_9)))))) < var_10)))));
                            var_18 = (((~var_4) != var_0));
                        }
                        arr_36 [i_7] [i_7] [i_7] [i_7] = ((65529 ? (var_13 / -94) : var_5));
                    }
                }
            }
        }
        arr_37 [i_6] = ((((var_11 ? (arr_28 [i_6] [14] [14] [i_6]) : 1)) * 0));
        arr_38 [i_6] = -61439;
    }
    var_19 = ((var_4 ? (!107) : (max(1, var_0))));
    var_20 = var_3;
    #pragma endscop
}
