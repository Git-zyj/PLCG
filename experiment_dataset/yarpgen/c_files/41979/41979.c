/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 ^= ((arr_0 [i_0 + 1] [i_0 + 1]) - (((arr_2 [10] [i_0]) ? var_0 : var_4)));
        arr_3 [i_0] = (-1 ? 7070 : 6592);
        arr_4 [i_0 + 1] = ((-(arr_1 [i_0 + 1])));
        var_19 -= (((arr_2 [i_0 - 1] [i_0 - 1]) ? ((var_4 ? (arr_0 [0] [i_0]) : var_5)) : (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (arr_1 [i_1]);
            arr_7 [i_0] [i_1] = var_4;
            var_21 = (((!15572320382953408676) ? (var_15 | var_3) : (arr_2 [i_0] [i_0 + 1])));
            var_22 = (arr_5 [i_0 - 1]);
        }
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_23 = ((-(min((((-55 ? -7053 : 255))), var_16))));
                        var_24 = var_15;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = max((((arr_17 [i_2] [i_6]) ? -255 : (arr_18 [i_2] [i_2 - 1] [i_8]))), (((!(arr_24 [i_2] [i_2 - 1] [i_2])))));
                        arr_27 [i_8] = (max(((min(-4294967295, (max(var_3, 937241190))))), ((-(max(var_1, (arr_26 [4] [i_6] [i_2 + 2])))))));
                        arr_28 [i_8] [i_6] [i_6] [i_2] &= ((((((arr_19 [i_2 - 1] [i_2 - 1]) ? (arr_19 [i_2 - 1] [i_2 - 1]) : (arr_19 [i_2 - 1] [i_6])))) ? var_13 : (((arr_19 [i_2 - 1] [i_2 - 1]) & var_17))));
                        arr_29 [17] [i_6] [i_6] [i_8] [i_6] = (!var_6);
                        var_26 = var_13;
                    }
                    for (int i_9 = 4; i_9 < 21;i_9 += 1)
                    {
                        arr_32 [i_2 - 4] [i_6] [i_9] [i_9] = (arr_30 [i_9]);
                        var_27 = (max((((((arr_16 [12] [11] [17] [i_6] [17] [i_2 + 1]) ? (arr_14 [i_9 - 3] [i_7] [i_6] [11]) : var_1)))), (arr_21 [i_2] [i_2])));
                        arr_33 [i_9] = 11755177990896966770;
                        var_28 = (min(var_17, ((((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2]) ? (((arr_24 [6] [i_7] [9]) ? var_6 : (arr_16 [i_9] [19] [3] [i_6] [i_2] [i_2]))) : -var_2)))));
                        var_29 = (((((-11750 * (((arr_20 [18]) ^ 16899))))) && (((((max(1, 0))) ? ((var_14 ? (arr_21 [i_7] [i_9]) : var_13)) : (((~(arr_23 [3] [12])))))))));
                    }
                    var_30 = (((-29590 / 55789) ? (((arr_25 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4]) ? (arr_25 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 2]) : (arr_25 [i_2 + 2] [i_2 - 4] [i_2 - 2] [i_2 - 4] [i_2 - 2]))) : ((-(arr_25 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 4] [i_2 + 1])))));
                }
            }
        }
        arr_34 [i_2 - 4] = (~((-((1 ? (arr_11 [i_2] [i_2] [i_2]) : var_7)))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_31 = var_8;
        var_32 = (max((((arr_21 [i_10] [i_10]) ? 1041401468505468305 : (((2367281073055864529 ? var_15 : 29589))))), ((((arr_20 [i_10]) <= (min(var_1, var_4)))))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        var_33 -= (var_9 ? (arr_26 [i_11 + 1] [i_11] [i_11]) : (arr_31 [14] [8] [i_11 + 1] [i_11]));
        var_34 = var_5;
        arr_42 [i_11] = ((-((15028423112651920861 + (arr_24 [i_11] [i_11 + 3] [i_11])))));
    }
    var_35 = var_3;
    var_36 = ((~((min((var_2 < var_0), var_6)))));
    var_37 = var_11;
    #pragma endscop
}
