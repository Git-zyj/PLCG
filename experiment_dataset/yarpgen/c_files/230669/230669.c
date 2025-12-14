/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((1 ? 1 : 1)))));
    var_21 = max((!var_2), ((((max(var_6, var_11))) ? (min(var_9, var_13)) : var_15)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0 - 2] [13] = (arr_3 [i_0] [10]);

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_2] = (((arr_2 [i_0 - 2] [1]) || (arr_1 [i_1])));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_22 += (arr_5 [i_4] [i_4] [i_3 + 4] [i_2 - 2]);
                            arr_14 [20] [i_0] [10] [i_1] [i_0] = ((-(arr_0 [i_0 - 2])));
                            var_23 = ((!(arr_11 [i_0] [i_0] [1])));
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] [i_1] = (arr_1 [i_2]);
                arr_16 [i_2] [i_1] = (((!1) ? (!var_3) : -0));

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] = var_5;
                    arr_21 [i_0] [i_0] [i_2] [i_0] [i_2] = (((((arr_0 [i_0]) == (arr_10 [i_0] [i_2] [2] [2] [2] [2]))) ? (arr_3 [i_2 - 1] [i_1]) : (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2])));
                    var_24 += (arr_11 [i_0] [i_0 + 1] [i_2 + 2]);

                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        var_25 -= ((523333242 ? 2510524924 : 1));
                        arr_25 [9] [i_0] [i_2] [19] [i_6] [9] [i_0] = (-32767 - 1);
                    }
                    arr_26 [i_5] [i_0] [i_0] = (((-(arr_17 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0]))));
                }
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_26 = (!var_4);
                arr_29 [i_0] [i_0] = (arr_0 [i_0 + 1]);
                var_27 -= ((var_6 ? (arr_22 [i_0 + 1] [i_0 - 1]) : (arr_22 [i_0 - 2] [i_0 - 2])));
            }
            for (int i_8 = 4; i_8 < 19;i_8 += 1)
            {
                var_28 += var_19;
                arr_33 [i_0] [i_0] [i_8] [i_8] = ((17443311163546360460 ? 1 : 18213388750738563991));
            }
        }
        var_29 = (((!var_4) >> (((((arr_23 [15] [1] [i_0] [i_0] [i_0 - 1] [4]) ? ((((arr_32 [i_0 + 1]) ? var_16 : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (min((arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_0]), var_7)))) - 60))));
        arr_34 [i_0] = (max(var_7, (((arr_1 [i_0]) ? (arr_13 [i_0] [i_0]) : (((arr_11 [i_0] [i_0] [i_0]) ? var_17 : 17874492928429391487))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_30 = (min((!var_11), var_0));
        arr_38 [i_9] [i_9] = var_0;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] = ((((((max((arr_36 [i_10] [i_10]), 1))) ? 1 : (max(var_1, var_3)))) > (((var_9 ^ (arr_37 [i_10]))))));
        var_31 = ((((((arr_39 [i_10]) ? (4294967292 - var_4) : (arr_37 [i_10])))) ? (arr_35 [i_10]) : (arr_36 [i_10] [i_10])));
    }
    #pragma endscop
}
