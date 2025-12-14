/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -6548696289967464949;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_14 = (-(1975505783 - var_8));
        arr_2 [i_0] = ((var_0 ? var_4 : (((arr_1 [i_0]) - ((-(arr_0 [i_0])))))));
    }
    var_15 &= ((!(((-((16 ? -329 : var_1)))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [1] = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = (!(((-(((arr_0 [i_1]) >> (var_12 - 70)))))));
                    var_16 = ((var_2 == (!-var_11)));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (((-823349490 == var_3) <= var_6));
                        var_18 = (min(var_18, ((((12402184338232148441 ? var_11 : 0))))));
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_1] [14] [i_3] [2] [i_6] = var_12;
                            var_19 = var_9;
                            arr_21 [6] [i_1] [i_3] [i_1] [i_1] = (-2029632680 >= (arr_15 [i_6 - 1] [7] [i_1] [i_1] [i_2] [i_1]));
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            var_20 = ((-1312511998 ? ((-(arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [18] [i_7] [i_7] [i_7]))) : (((((arr_22 [i_7 - 2] [i_7 - 1] [i_7 - 2] [0] [i_7] [7] [i_7]) < (arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [15] [i_7] [i_7])))))));
                            var_21 = ((((0 & 1) >> ((((var_7 ? var_3 : var_0)) + 1966959114)))) - var_7);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~var_4);
                            arr_25 [6] [i_1] [i_3] [i_5] [i_7] [11] = (-((6044559735477403175 ? 1003373944591187258 : 108)));
                            arr_26 [1] [i_2] [i_3] [i_1] [i_7] = (((~(arr_23 [i_1] [i_2] [i_7 + 1] [i_5] [i_7]))));
                        }
                        arr_27 [i_1] [2] [i_1] [1] [i_5] = 6044559735477403179;
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        var_22 = var_1;
                        arr_30 [i_1] = (((var_6 + 2147483647) >> (((arr_23 [i_3] [i_3] [i_8 - 2] [i_8] [i_8]) + 493150567))));
                        arr_31 [i_1] [i_1] [i_3] = var_1;
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_35 [1] [i_2] [i_3] [i_1] = (arr_15 [i_1] [i_2] [i_1] [i_9] [i_9] [i_9]);
                        var_23 = (!var_2);
                        var_24 = (!0);
                        var_25 = (arr_33 [i_1] [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        arr_40 [i_10] = ((~(~1)));
        var_26 = 1;
    }
    #pragma endscop
}
