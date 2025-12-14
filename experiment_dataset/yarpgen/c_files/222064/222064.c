/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_3 <= var_5);
    var_14 = var_5;
    var_15 = (((((var_0 ? var_10 : var_4)) - 34542)) >= (((1 || var_5) << (var_3 + 1415108218))));
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~var_9);
        arr_3 [i_0] = (((((arr_0 [i_0]) * (arr_0 [i_0]))) >= ((1 / (1 <= 102)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [10] [i_1] [i_2] [i_2] = (max(1335660864, 1));
                        var_17 = 1;
                        arr_13 [i_3] [i_3] [i_3] [i_1] [i_1] [i_3] = (min((((arr_8 [3] [3] [3] [3]) ? (arr_4 [i_3]) : 1)), (((!(arr_4 [i_3]))))));
                    }
                }
            }
        }
        var_18 -= 1;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_19 = (+-0);
        arr_16 [i_4] = -1335660878;
        arr_17 [i_4] = ((~(max((arr_10 [i_4] [i_4] [i_4] [i_4]), 1))));
        arr_18 [i_4] = var_2;
        var_20 ^= ((!(((var_4 ? 1 : 64970)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = (-1 != 0);
        arr_22 [i_5] = ((arr_20 [i_5]) < (arr_19 [i_5]));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = ((-(((arr_5 [i_6] [i_6] [i_6]) ? (arr_1 [i_6]) : 23))));
        arr_25 [3] = var_0;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = ((-(arr_24 [i_6])));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 *= -1768944706;
                        var_24 = (!(~1314412130));
                        arr_34 [i_7] [i_9] [i_6] [i_8] [i_8] [i_7] = var_10;
                        var_25 = (min(var_25, (arr_7 [4] [i_7] [4])));
                    }
                    arr_35 [i_7] [10] [i_7] [i_7] = -121;
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_26 = ((arr_19 [i_6]) - (arr_19 [i_6]));
            arr_38 [0] [0] [i_10] = (-1 ? (arr_32 [i_6] [i_10] [3]) : (((1 || (arr_29 [i_10] [1] [i_6])))));
            arr_39 [i_6] [i_10] [1] = (!var_2);
        }
        for (int i_11 = 3; i_11 < 9;i_11 += 1)
        {
            var_27 = ((~(arr_10 [i_6] [i_11 + 2] [16] [i_11])));
            arr_43 [1] [8] = (((arr_0 [i_11 - 1]) ? var_9 : 29739));
            var_28 *= (arr_9 [i_6] [15] [i_11] [0]);
        }
    }
    #pragma endscop
}
