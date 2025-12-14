/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (((717628016642184078 <= -7032) | ((var_9 ? var_7 : var_14))));
                    var_19 ^= ((-8 < 1495851537) ? (arr_0 [i_1 + 1] [i_1 - 2]) : 77);
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_20 = var_15;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_15 [i_5] [i_4] [i_5] [i_5] = min((!1), var_16);
                    var_21 = arr_10 [6] [i_4 - 1] [i_5];
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_22 = -1462638587524986789;
                var_23 |= 92533909;
                arr_21 [i_3] [i_3] = var_1;
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_24 = (((((((((arr_9 [i_3]) < 0))) <= ((-(arr_8 [i_3])))))) >= (arr_14 [6])));
                arr_25 [i_3] [i_3 + 1] [i_3 - 3] [i_3] = ((!(((8128 ? 19038 : (-32767 - 1))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_25 = (max(var_25, -52));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_35 [i_3 - 1] [i_6] [i_9] [i_10] [i_3 - 1] [i_9] [2] = ((~((~(arr_30 [i_3 - 2] [i_3] [i_6] [i_9] [i_10] [8])))));
                            arr_36 [i_3 - 3] [i_3] [i_9] = (var_15 ? var_2 : 196);
                            var_26 = (min(var_26, -1349717606));
                            var_27 = (((((var_11 ? var_12 : -29931))) ? (arr_16 [i_3] [i_3 - 3]) : (arr_14 [i_9])));
                        }
                    }
                }
                var_28 = (17273 < 32640);
                arr_37 [i_3 - 3] [i_3 - 3] [10] [i_9] &= ((((((arr_24 [4] [i_6] [4]) ? (arr_24 [i_3] [i_3] [i_3]) : (arr_19 [i_3 - 1] [8] [i_3] [i_3])))) ? var_8 : (arr_22 [i_3 - 1] [i_6])));
                var_29 += 1;
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_42 [i_12] [i_6] [i_12] [i_13] = (~(((arr_33 [i_3 - 3] [i_3] [i_3] [i_3] [i_3 - 3]) ? (arr_33 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3 - 2]) : -19039)));
                        var_30 = (max(var_30, (((var_1 ? (min(872654974, (arr_26 [i_3 - 2] [0] [0] [i_13]))) : ((min(21, (-24 & 112)))))))));

                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_46 [i_12] [i_14] [i_14] [10] [i_14] [i_14] = ((!((((arr_43 [i_3] [i_6] [i_12] [i_13] [i_12]) ? (arr_33 [i_3 - 1] [i_3 - 1] [i_12] [i_13] [i_14]) : -var_6)))));
                            var_31 -= ((((((48 ? (arr_40 [i_3] [i_6] [i_13]) : (arr_27 [i_14]))) % (arr_16 [i_3 - 2] [i_3 - 1]))) == (((~((max(var_2, (arr_43 [i_6] [i_6] [i_6] [6] [i_14])))))))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_32 = (((min((arr_43 [2] [i_15] [i_15] [i_15] [2]), (arr_44 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 3] [10]))) >= (((((arr_29 [4] [4] [i_15] [i_3]) || (((var_8 ? var_3 : (-127 - 1))))))))));
            var_33 = (max(32640, (min(0, (min(1, 42349))))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_60 [i_3 - 3] [i_3 - 3] [i_16] [i_17 - 3] [i_18] = ((((max(var_15, (arr_50 [i_15])))) ? 52183 : ((-(arr_10 [i_16] [9] [i_16])))));
                            arr_61 [i_3] [2] [i_16] [i_16] [i_17 + 1] [i_18] = ((1 ? 1 : (min((-127 - 1), var_0))));
                        }
                    }
                }
            }
            arr_62 [i_15] [i_15] = (((((~(max(var_9, var_5))))) / (min((min(var_15, 1148417904979476480)), (arr_19 [i_3] [i_3] [i_15] [i_15])))));
        }
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1)
    {
        arr_67 [i_19] = (((((((arr_63 [i_19] [i_19]) ? (((arr_64 [i_19] [i_19]) + var_5)) : (arr_64 [i_19] [i_19]))) + 2147483647)) >> (var_14 + 2653790326240550576)));
        arr_68 [i_19] = max(((!((!(arr_66 [i_19]))))), (((~var_9) || (var_16 < var_1))));
        arr_69 [i_19] [i_19] = (((((arr_64 [i_19] [i_19]) - (arr_64 [i_19] [i_19]))) >= (arr_64 [i_19] [i_19])));
        var_34 = (max(var_34, (((!(arr_66 [i_19]))))));
    }
    #pragma endscop
}
