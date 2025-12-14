/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((~((var_1 ? ((var_4 ? 878474690819309486 : 122)) : var_5))));
    var_11 = ((((var_2 ? (0 - -1242609426) : ((min(var_5, var_2)))))) ? (var_2 - 0) : var_7);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (min(var_12, (((((-(arr_1 [i_0])))) ? -2642 : (arr_1 [i_0])))));
        arr_2 [i_0] = (((46617 == 2663) ? (min(((var_6 ? (arr_1 [i_0]) : var_4)), (arr_0 [i_0]))) : ((min((arr_0 [i_0]), var_5)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                {
                    var_13 *= (min(var_3, (max(var_3, var_7))));
                    var_14 = ((((max(0, var_0))) ? 2147483647 : ((~(!116)))));
                    arr_11 [i_1] [3] [i_1] = ((~((-((var_9 ? var_7 : (arr_3 [i_1] [i_2])))))));
                }
            }
        }
        arr_12 [i_1] = ((((((((arr_6 [i_1] [i_1] [i_1]) ? var_1 : 5))) ? (arr_3 [i_1] [i_1]) : (((arr_10 [i_1] [i_1] [i_1]) ? var_4 : (-32767 - 1))))) >= -var_5));
        var_15 = (max(var_15, 1073610752));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_16 -= var_3;

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [i_4] = (arr_18 [i_4] [i_4] [i_4]);
            arr_20 [i_4] [i_4] [4] &= (4 != 8128);

            for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
            {
                var_17 = (-(arr_15 [i_6 + 2] [i_5] [i_6]));
                var_18 = -0;
                arr_23 [i_4] [i_5] [12] = (arr_21 [i_4] [i_4]);
                var_19 = ((((((-1 + 9223372036854775807) >> (32766 - 32713)))) ? (arr_21 [i_4] [i_6 + 2]) : (0 / 1032192)));
            }
            for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_20 = var_0;
                var_21 = ((var_7 ? ((var_9 ? var_2 : -28018)) : var_2));
                arr_26 [i_5] [i_5] [i_4] [i_4] = (arr_16 [i_4] [i_4] [i_7]);

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_29 [i_4] = -1073610748;
                    var_22 = (((59567 || var_2) ? (((28018 << (-1 + 12)))) : (((arr_22 [i_4] [i_5]) ? 127 : var_7))));
                    var_23 = (((((var_5 ? var_9 : (arr_22 [i_4] [i_4])))) && -1073610766));
                }

                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    var_24 = (((arr_30 [i_9 - 3] [i_9 - 3] [i_9] [i_9 - 2]) ? -28018 : 5972));
                    var_25 = (max(var_25, var_2));
                }
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, (((-2147483639 < (arr_27 [i_4] [i_4]))))));
                        var_27 = (max(var_27, (var_1 % var_3)));
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_4] = ((var_4 ? (arr_16 [i_4] [i_4] [i_4]) : (!1048574)));
                        var_28 = ((1073610767 || (arr_17 [i_4])));
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_29 -= var_8;
                        var_30 = (32788 | 2097152);
                        arr_41 [i_4] [i_4] = ((!(((arr_34 [i_4] [i_5] [i_5] [i_7 + 1] [i_7 + 1] [i_12]) == 2147483639))));
                    }
                    arr_42 [i_4] [i_4] [i_4] [i_4] = ((124 ? var_3 : (arr_28 [i_4] [i_5] [i_7 + 1] [i_10 + 1])));
                    arr_43 [i_4] [i_7] [i_5] [i_4] = (arr_30 [3] [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                }
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_31 -= (arr_44 [4]);
            arr_46 [i_4] [i_4] [i_13] = ((var_6 ? 2147483638 : var_1));
            arr_47 [i_4] [i_13] = ((-1 ? var_3 : 235));
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    arr_56 [i_14] [i_16] = (((((arr_37 [i_15] [i_16]) || (((-418702214 ? (-127 - 1) : 21497))))) ? (min(42554, 2147483647)) : (-2147483647 - 1)));
                    var_32 ^= ((!(~6)));
                }
            }
        }
        arr_57 [i_14] = 59567;
        arr_58 [i_14] [i_14] = (((!var_5) - var_9));
    }
    var_33 *= var_2;
    #pragma endscop
}
