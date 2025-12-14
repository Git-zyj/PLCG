/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_11 ^= (max((~1), ((var_9 - (min(1633372239, 12526576494598957759))))));
                    arr_7 [i_0] [i_1] [12] = ((~(~5496804128810094361)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = -1363907329;
                        var_13 = (~5496804128810094361);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_14 = var_1;
                            arr_15 [16] [i_1] [i_4] [i_4] [i_5] = (arr_11 [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5]);
                        }
                        arr_16 [i_4] [i_2] [i_1] [i_0] = (((((~(arr_0 [i_0])))) == var_9));
                        arr_17 [i_4] = var_3;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_15 = -var_4;
                        var_16 = (((arr_0 [i_0]) > var_3));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_17 = (arr_21 [i_7] [i_2] [i_1]);
                            arr_23 [i_0] [i_7] = (((arr_4 [i_2]) < (arr_4 [i_2])));
                        }
                        var_18 = ((-(arr_9 [i_6] [9] [i_2] [i_1] [i_0])));
                    }
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_19 = 5496804128810094361;
                        arr_30 [i_8] [i_8] [i_8] = var_2;
                    }
                    var_20 = (max((min(var_10, var_4)), 2984134703));
                    arr_31 [10] [i_1] [i_8] = (arr_21 [i_0] [i_1] [i_8]);
                    var_21 = (--2979414308);
                }
                var_22 = ((-(max((arr_26 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
                arr_32 [i_0] = -var_8;
                arr_33 [i_0] [8] = (arr_19 [i_1]);
            }
        }
    }
    var_23 = var_0;
    var_24 = (min((!var_4), 5496804128810094361));
    var_25 |= var_8;

    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_36 [i_10 - 1] [i_10] = (((((var_4 ? (min((arr_34 [i_10]), 0)) : (arr_2 [i_10] [i_10])))) ? ((min((max(var_4, 16)), (arr_28 [i_10] [i_10] [6] [i_10 - 1] [i_10])))) : (min((arr_19 [i_10]), (arr_12 [1] [6] [i_10 + 1] [i_10] [i_10] [i_10] [i_10])))));
        arr_37 [i_10] = var_3;
    }
    #pragma endscop
}
