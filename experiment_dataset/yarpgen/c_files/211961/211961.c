/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((min(((((arr_2 [i_0]) || 101))), (max(1, (arr_0 [i_0]))))) > var_6));
        arr_5 [i_0] &= min(4509068366034910002, -6766513882859693004);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_9 [i_0] = (((var_4 - (arr_2 [i_0]))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 6;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2] [i_4 - 1] = (!(((var_6 << (((arr_8 [i_1] [i_1]) + 116))))));
                            var_11 = (min(var_11, var_2));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 6;i_6 += 1)
                {
                    {
                        var_12 = ((~(arr_3 [i_1])));
                        arr_21 [i_0] [i_1] [i_6] = var_10;
                    }
                }
            }
            arr_22 [i_0] = (192 || 127);
            arr_23 [i_0] = ((((((arr_1 [i_1]) == var_1))) >> (((arr_17 [i_0] [5] [5] [i_1]) + 16530))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                arr_29 [i_8] [i_8] [i_8] [i_7] = ((-((max((arr_20 [i_0] [i_0] [i_0] [i_7] [i_0]), (arr_24 [i_7] [i_8 + 1] [i_8 - 3]))))));
                arr_30 [i_7] [i_8 + 1] = ((((((~var_8) & (60 & 212)))) ? (min(var_3, (~-127))) : 120));
            }
            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {
                arr_33 [i_9] [i_7] [i_7] [i_0] = var_1;
                var_13 = (min(var_13, ((((max((arr_31 [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0] [i_9] [i_9 - 2])))) + (arr_31 [i_0] [i_0])))));
            }
            arr_34 [i_7] [i_7] [i_7] = (max((max((arr_27 [i_7]), (arr_6 [i_0] [i_0]))), (((~(~var_0))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_38 [i_10] [i_10] = (((arr_28 [i_0] [i_0] [i_0] [i_0]) - 12678));
            arr_39 [i_0] [i_10] = (~((-124 ? 6531109721664415478 : 1)));

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_42 [i_10] [i_10] [i_10] [i_0] = arr_15 [i_11] [i_0];
                arr_43 [i_10] [i_11] [i_11] = (var_8 && var_0);
            }
        }
        arr_44 [i_0] = (!(!-87));
    }
    var_14 = ((var_0 ^ ((max((var_3 | 1), var_5)))));
    var_15 = max(var_10, var_8);
    #pragma endscop
}
