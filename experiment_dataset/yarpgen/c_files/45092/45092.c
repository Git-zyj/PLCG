/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_12 = (var_7 * var_7);
                var_13 = arr_5 [i_0] [i_1] [i_2];
                var_14 = ((-(var_1 >= var_4)));
                var_15 = (~9);
            }
            var_16 = (arr_4 [i_0] [i_0]);
            var_17 = (~(arr_4 [i_0] [i_1]));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 |= ((var_9 ? (((!(arr_2 [i_0 + 1])))) : var_6));
                        var_19 = var_3;
                        var_20 = ((arr_13 [i_3 - 1] [i_3 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 70368744177663 : var_4);
                        var_21 = (~(1248861743 | 124));
                        var_22 = (((((var_8 / (arr_10 [i_1] [i_1])))) ? (arr_8 [1] [i_1] [i_1] [i_1]) : var_7));
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_23 = (((~(((3934928174 < (arr_12 [i_0] [i_0] [i_0] [i_0])))))));
            var_24 = ((max(var_4, (((arr_10 [i_0] [i_5]) ? var_7 : (arr_12 [4] [i_5 + 1] [4] [4]))))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_25 = (max(var_0, ((-(max((arr_15 [i_0] [i_0] [i_0 - 1]), var_5))))));
                            var_26 = (((min(((((arr_19 [i_0 + 1] [i_5]) || 2201149470))), -var_4)) / ((((((max(var_7, 2093817826))) && (((79 ? 30 : (arr_13 [i_5] [i_5] [i_6 + 1] [i_5] [i_8]))))))))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_27 = (min(var_6, (max((arr_7 [i_0] [i_0 + 3] [i_0 + 2] [i_0]), var_9))));
            var_28 = (((((!((((arr_3 [i_9]) ? 53340 : var_3)))))) < ((min(27, (arr_13 [i_0 + 2] [i_0] [12] [i_0 + 3] [i_0 + 2]))))));
            var_29 = (max(((min(((max(124, var_8))), var_9))), (max(var_3, (max((arr_6 [i_0 + 3] [i_0] [i_0] [i_0]), (arr_20 [i_9] [i_9] [i_9])))))));
            var_30 = 1213414601;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_31 -= (((arr_2 [i_0 + 3]) < var_3));
            var_32 &= ((var_10 ? (arr_2 [i_0]) : (!-5814947580772017626)));
        }
        var_33 = (min((((((~(arr_29 [i_0] [i_0])))) ? (~var_8) : (min(var_2, 15)))), (((((min(var_7, (arr_16 [i_0])))) ? ((min((arr_13 [i_0 - 1] [2] [i_0 + 1] [i_0] [i_0]), 1))) : (((arr_9 [i_0]) ? var_7 : var_7)))))));
        var_34 = (-(min(var_8, (min(var_10, var_4)))));
        var_35 = (((5814947580772017626 ? -3603142332589076979 : (arr_20 [i_0 - 2] [i_0 + 2] [i_0 - 2]))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        var_36 |= -var_6;
        var_37 = (-2847393779708444071 != var_7);
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_38 = (((((arr_36 [i_12]) - (arr_36 [i_12]))) / (arr_5 [i_12] [i_12] [8])));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 12;i_15 += 1)
                {
                    {
                        var_39 = var_2;
                        var_40 = ((((((var_2 && 2201149489) ? -1130776181748447479 : ((((arr_30 [i_15]) ? var_7 : var_1)))))) && ((135 || ((max(var_4, (arr_39 [i_12] [i_12] [i_12]))))))));
                    }
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 16;i_16 += 1)
    {
        var_41 = ((var_7 >= (((((189 ? 39098 : -2847393779708444072)) <= var_1)))));
        var_42 = min((arr_32 [i_16] [i_16]), 150);
        var_43 = ((((((44712 ? 105 : 3655220446643357392))) ? (min(var_6, var_8)) : 1718585255)) * ((2093817807 ? ((var_4 ? 53729624 : 255)) : (((min(1499, (arr_48 [i_16]))))))));
    }
    var_44 = (~254);
    var_45 = var_8;
    #pragma endscop
}
