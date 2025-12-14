/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (arr_3 [i_0 - 1] [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (~-1);

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_2] = var_0;
                            var_15 = (max(var_15, (10198171567485164629 < 26)));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_16 [i_5] [i_2] [i_2] [i_2] [i_0] = var_7;
                            arr_17 [i_0 - 2] [i_1 - 1] [i_2] [i_2] [i_5 + 1] = (((arr_2 [i_0 - 2]) - (arr_8 [i_0 + 1] [4] [i_2])));
                            var_16 += var_3;
                            var_17 = (min(var_17, (arr_3 [i_1 - 1] [1])));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_18 = (arr_8 [i_0] [i_3] [i_0]);
                            var_19 = (((arr_6 [i_0 - 1]) ? (arr_6 [i_0 + 2]) : var_6));
                            var_20 -= ((arr_11 [i_0] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_6] [i_1]) ? (((-6 ? 0 : 69))) : (arr_10 [i_0 - 2] [i_1] [i_2] [i_2] [4]));
                            var_21 = 24478;
                        }
                        arr_22 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_3] = 3859045005400785408;
                    }
                    for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        var_22 = arr_19 [8] [i_1] [i_2];
                        var_23 = (min(var_23, ((((arr_2 [i_0 + 2]) ? (arr_15 [i_0] [5] [i_1] [i_2] [i_2] [i_7 + 1] [i_7 - 1]) : (arr_9 [i_0] [i_1] [i_2 + 1] [4] [i_2 + 1]))))));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_24 = (arr_18 [i_8 - 1] [i_8 - 2] [i_2 - 1] [i_0 - 2] [i_2]);
                        var_25 *= (arr_8 [i_8 - 3] [i_8 - 1] [i_8 + 1]);
                    }
                    var_26 = ((var_9 * (((24 <= (arr_12 [i_2]))))));
                    var_27 = (((arr_0 [i_0 + 1]) || (arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
        var_28 = (min(var_28, (arr_21 [i_0])));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 4; i_10 < 8;i_10 += 1)
            {
                var_29 = (arr_26 [i_0 - 1] [i_10]);
                var_30 -= arr_1 [i_10];
            }
            arr_34 [i_9] [i_9] = ((1 | (((arr_30 [i_0 - 1]) ^ (arr_11 [1] [i_9] [i_9] [i_9] [1] [i_9])))));
            var_31 = (((((var_1 < (arr_3 [i_0] [6])))) + var_5));
            var_32 = ((((arr_26 [i_0] [i_9]) <= (arr_29 [i_0 + 2]))));
        }
    }
    var_33 = ((var_12 ? var_0 : var_1));
    var_34 = (((var_10 - var_10) > ((((((var_6 ? var_4 : var_5))) < var_9)))));
    var_35 = var_12;
    #pragma endscop
}
