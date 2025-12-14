/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(((var_13 >> (((min((arr_2 [1]), (arr_1 [i_0] [i_0]))) + 1214702610)))), (arr_1 [i_0] [7])));
        var_18 ^= arr_1 [i_0] [7];
        arr_3 [i_0] = ((((-((var_15 ? (arr_2 [i_0]) : (arr_0 [i_0]))))) >> (((((((arr_0 [i_0]) ? var_13 : 420807203)) * -1)) + 2128))));
        arr_4 [13] &= -85;
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2 + 1] [i_3] = (max((max((((var_8 ? var_12 : (arr_11 [i_3] [i_1])))), (max(4, var_8)))), (arr_10 [1] [i_3] [i_1])));
                    arr_15 [i_3] [i_2 - 1] [i_2 - 1] = (-(arr_8 [i_2 - 1]));
                    var_19 *= (arr_11 [i_1] [i_2 + 1]);
                    var_20 += (-127 - 1);
                }
            }
        }
        arr_16 [17] = arr_13 [i_1] [i_1] [i_1];
        var_21 += (min(((-(arr_11 [i_1] [i_1]))), ((((arr_9 [i_1]) && (arr_11 [i_1] [i_1]))))));
    }
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((-((65513 ? (max((arr_13 [i_4] [i_4] [i_4 + 2]), (arr_2 [13]))) : (((-1955368851 ? var_13 : 0)))))));
        var_22 = ((var_7 || var_1) ? (max((max(127, 46345)), 1591088141035116848)) : (((max((arr_10 [i_4 - 2] [i_4 + 2] [i_4]), (arr_10 [i_4 + 1] [i_4 - 4] [i_4 - 2]))))));
    }
    var_23 = max((((max(var_13, 16855655932674434776)) * (((420807214 ? var_9 : var_4))))), var_16);

    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = max((arr_22 [6]), (arr_18 [i_5]));
        arr_24 [i_5] [i_5] = var_4;
        var_24 &= (max((max(18444492273895866368, (((arr_18 [i_5]) ? 3 : var_0)))), (max((arr_6 [i_5]), (arr_21 [i_5] [i_5])))));
        var_25 = (arr_7 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_36 [i_7] [i_7] = ((arr_30 [i_8] [i_7] [10]) ? 1 : (arr_21 [i_8] [i_9]));
                        arr_37 [i_7] [i_7] = (var_3 ^ -16855655932674434759);
                        var_26 = (arr_30 [i_6] [i_7] [i_8]);
                        arr_38 [i_7] [i_8] = ((arr_33 [i_8] [i_7] [4] [i_8] [i_7]) ? (arr_26 [i_7]) : (18446744073709551592 - 55850));
                    }
                }
            }
        }
        arr_39 [5] [5] = (arr_12 [i_6] [i_6] [i_6] [15]);
        var_27 -= 3429707021466787974;
        var_28 |= -5;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_42 [i_10] [i_10] = -134217727;

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_29 -= (((((-(((arr_28 [i_10]) ? (arr_46 [i_10]) : (arr_32 [i_10] [i_10] [i_10])))))) ? 15690536852850636801 : (((7 ? 15 : (arr_12 [i_10] [i_11] [i_11] [i_11]))))));
            var_30 = (max((arr_0 [i_10]), ((max(15, var_1)))));
        }
    }
    #pragma endscop
}
