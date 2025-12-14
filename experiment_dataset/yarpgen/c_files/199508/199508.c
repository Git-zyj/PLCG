/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (!-47)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 = ((((var_14 ? var_1 : var_11)) & ((~(arr_1 [i_0])))));
        var_22 = 47;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = -17;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_2] [i_2] = 662414390;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 = 1014000282;
                            var_25 = (max(var_25, 39015));
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                var_26 = (((arr_16 [i_6 + 1]) ? var_12 : var_16));
                arr_21 [i_1] [i_6] [i_2] = (!55);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] [i_2] [i_1] [i_7] [i_8] = (-47 && -46);
                            var_27 -= (~47);
                        }
                    }
                }
            }
            var_28 = (-70 * var_2);
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_29 = (((((arr_33 [i_1] [i_9] [i_10] [i_11]) ? (!var_15) : ((1 ? (arr_28 [i_1] [i_1] [i_10] [11] [i_11] [3] [i_11]) : var_0)))) * 20));
                        arr_38 [i_1] [i_11] = ((-((max((arr_6 [i_1] [i_9]), var_7)))));
                        arr_39 [2] [i_11] [i_10] [6] [i_9] = -var_15;
                    }
                }
            }
        }
        var_30 = (min(((var_0 ? (((!(arr_33 [i_1] [i_1] [i_1] [i_1])))) : (arr_11 [i_1] [i_1] [i_1]))), (arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_44 [i_12] = (((~568583177) ? 111 : 47));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_31 -= (arr_43 [i_12]);
            var_32 = 1;
        }
    }
    var_33 = (min(var_11, 1));
    #pragma endscop
}
