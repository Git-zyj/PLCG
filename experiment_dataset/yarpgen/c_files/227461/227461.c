/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = ((!(arr_3 [i_1] [i_1] [i_0])));
            arr_7 [i_0] [i_0] [i_1] = 13;
            var_13 = arr_0 [i_1] [i_0];

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_2] [i_1] [i_2] = -2007477815374238090;
                    arr_14 [i_1] [i_1] [i_1] [i_1] &= (arr_9 [i_0] [i_0] [i_1]);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_14 -= (arr_12 [i_0] [i_2] [i_2]);
                    arr_17 [i_2] = (~18446744073709551615);
                    arr_18 [i_2] [i_2] = var_10;
                    var_15 = ((~(((var_8 >= (arr_1 [i_2]))))));
                }
                var_16 = (var_10 && (arr_11 [i_0] [i_1] [i_0] [i_2] [i_0]));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                var_17 = (((arr_19 [i_0] [i_1] [i_0]) > (arr_19 [i_5] [i_1] [i_0])));
                var_18 ^= (var_5 > 22);
                var_19 = (arr_5 [i_5] [i_1]);
                var_20 = (arr_12 [i_5] [i_1] [i_0]);
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, var_4));
                    var_22 += var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_23 = (((~2431684941) ? var_2 : (arr_24 [i_0] [i_9 + 1] [i_7 - 1] [i_8])));
                                arr_31 [i_9] = (arr_20 [i_9] [i_0] [i_0] [i_0]);
                                var_24 = ((var_5 / (arr_28 [i_8])));
                                var_25 = (((arr_22 [i_0] [i_6] [i_7]) ? (arr_16 [i_9 + 1] [i_8] [i_9] [11] [i_7 + 1] [i_9]) : (var_11 || var_9)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_26 = 164752625;
                                arr_38 [i_11] [i_11] [i_10] [i_7] [i_6] [i_0] = (((!30139) > (arr_0 [i_7 - 3] [i_6])));
                                var_27 = var_4;
                            }
                        }
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_28 = (arr_20 [i_0] [i_0] [i_0] [i_0]);
            arr_41 [i_12] [i_12] = ((11068274170725357076 < (arr_24 [i_12] [i_12] [i_0] [i_12])));
            var_29 = (min(var_29, -var_9));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_30 = (!(arr_9 [i_0] [i_13] [i_13]));
            var_31 = (min(var_31, (var_8 == var_1)));
        }
        var_32 = (max(var_32, 1863282329));
        arr_45 [i_0] [i_0] = (((arr_9 [0] [i_0] [0]) ^ (var_0 > 10246)));
    }
    var_33 = ((((((!var_5) ? (!var_0) : var_7))) ? (min(1863282354, (((2007477815374238089 ? var_8 : var_0))))) : (((var_1 ? var_4 : var_11)))));
    var_34 = 1863282356;
    var_35 = ((var_10 ? var_12 : (min(-var_9, (max(2007477815374238071, var_0))))));
    var_36 = max((max(var_6, ((max(var_7, -344184355))))), 2431684941);
    #pragma endscop
}
