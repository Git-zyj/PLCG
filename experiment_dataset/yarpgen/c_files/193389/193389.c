/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_1] = (((arr_0 [i_0]) != 3221225472));
            var_18 = ((~(arr_1 [i_0])));
        }
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_19 = (arr_16 [i_4] [i_2 + 1]);
                            arr_17 [i_4] [i_2] [i_2] = var_12;
                        }
                    }
                }
            }
            arr_18 [i_2] [12] = ((255 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_2 - 2])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_20 -= ((arr_14 [i_2] [i_2 - 3] [i_2] [i_8]) ? (0 / var_14) : (((-(arr_14 [1] [6] [i_0] [i_7 + 1])))));
                            var_21 = (((arr_8 [i_2 - 2] [i_2 - 1]) ? (arr_11 [i_0] [i_2] [i_6] [i_0]) : (arr_21 [i_0] [i_2] [i_2 - 4] [i_7] [i_0] [i_0])));
                            arr_25 [i_6] = ((1073741852 ? -84 : (arr_7 [i_2 + 1] [i_2 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (((var_3 | ((7165931539240580365 ? 4252800316 : 3221225489)))))));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_23 ^= 273172441;
                        var_24 = -2002101070;
                        var_25 = (arr_5 [i_9] [i_9] [i_11]);
                        var_26 = (!var_2);
                        var_27 -= (arr_23 [i_0] [i_0] [i_0] [i_0] [2] [i_10 + 1]);
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 10;i_12 += 1) /* same iter space */
        {
            var_28 = (min(var_28, (((((((arr_12 [i_0]) + var_13))) ? 250 : ((3221225472 ? 3 : 4021794854)))))));
            var_29 = (max(var_29, (((3221225472 ? -17812 : (arr_7 [i_12 + 1] [i_12 + 1]))))));
            arr_37 [i_12] = (((arr_8 [i_12 - 1] [i_12 - 1]) || (arr_8 [i_12] [i_12 + 2])));
        }
        arr_38 [i_0] [i_0] = ((127 ? ((var_1 ? (arr_1 [i_0]) : 25)) : var_5));
        arr_39 [i_0] [12] |= ((!(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_30 = var_7;
    var_31 = var_11;
    var_32 = var_3;
    var_33 = (min(var_33, (((var_5 && ((!(((17804 ? 0 : 17809))))))))));
    #pragma endscop
}
