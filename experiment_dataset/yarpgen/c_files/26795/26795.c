/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 ^= (min((max((min(var_6, 0)), (((0 + (arr_0 [6] [i_0])))))), (((1942100700 ? (((arr_1 [i_0] [i_0]) ? 2147483637 : (arr_1 [i_0] [i_0]))) : ((16 ? 1 : (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3] [i_1] [9] [i_0] = (!0);
                                var_22 = (arr_5 [i_0] [i_1 - 1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
        var_23 = (arr_10 [20] [20] [i_0] [i_0] [i_0]);
        arr_12 [i_0] = 2205436891;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_17 [i_5] [i_6] = 0;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_24 = (((max((arr_7 [0] [i_7 + 1] [1] [i_6 - 1]), var_0)) - (((max(0, 1))))));
                        var_25 = (arr_18 [14] [2] [i_5]);
                        arr_22 [i_5] [i_5] [i_5] [i_8] = (arr_19 [i_5]);
                    }
                }
            }
            arr_23 [i_5] [2] |= (((~(arr_3 [i_5]))));
            var_26 = var_16;
            arr_24 [i_5] [i_6] = (min((min(((((arr_9 [2] [i_6] [i_6 - 1] [i_6] [2]) <= 1))), var_16)), ((min((min(1, var_9)), (arr_19 [i_5]))))));
        }
        var_27 = (min((((arr_18 [15] [i_5] [i_5]) >= (arr_9 [i_5] [9] [11] [i_5] [i_5]))), (arr_18 [i_5] [i_5] [i_5])));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_28 = (min(var_28, (-2147483647 - 1)));
        var_29 &= -1;
        arr_27 [16] = (arr_26 [i_9] [i_9]);

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_30 [i_9] [i_10] = var_13;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_30 = (max(var_30, ((((((((arr_29 [i_12]) & (arr_28 [i_11]))))) ? (min(((min(var_4, (arr_34 [i_12] [i_9] [i_9] [i_9] [i_9])))), ((var_7 + (arr_26 [i_12] [i_10]))))) : ((((min(var_0, var_15))))))))));
                        arr_35 [1] [i_10] = var_0;
                    }
                }
            }
            arr_36 [i_9] = (!var_14);
            arr_37 [i_9] = (((!(arr_32 [i_10] [i_9] [1]))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                var_31 = var_8;
                var_32 = (arr_26 [i_13 + 3] [i_13]);
                arr_43 [i_9] [11] [i_13] [i_9] = (((arr_34 [i_14 + 2] [i_14 - 1] [i_13 + 1] [i_13] [i_9]) ? var_2 : (1001 || var_5)));
            }
            var_33 = (max(var_33, 0));
        }
        arr_44 [i_9] [i_9] = (arr_29 [i_9]);
    }
    var_34 *= var_13;
    var_35 = var_16;
    var_36 = 5716881001192384165;
    #pragma endscop
}
