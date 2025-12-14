/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((arr_0 [i_0]) ? 134 : -29)))) ? (((arr_3 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_2 [1] [i_0] [i_0]) ? 96 : var_1)))) : var_5));
                var_18 = ((((-((var_6 / (arr_0 [i_1 - 2]))))) <= (((arr_3 [i_1 + 3] [i_0] [i_0]) ? var_14 : (((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_1 - 1] [i_1 - 2]) : (arr_0 [1])))))));
                arr_6 [i_0] = (((((((28 >> (112 - 87)))) ? 179 : ((var_16 ? var_6 : var_16)))) >> (((min(var_17, ((var_11 ? -118 : var_6)))) + 126))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] &= (arr_1 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_2] = (arr_8 [i_2] [i_2]);
            arr_15 [i_2] [i_3] |= (((var_13 ^ var_15) != ((((arr_13 [i_3] [i_2]) ? -32766 : (arr_0 [i_2]))))));
            var_19 = (arr_11 [3]);
            arr_16 [i_2] = 72;
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_20 = (max(var_20, ((((158 ? -28785 : (arr_19 [i_2] [i_4])))))));
            var_21 |= ((!(((-(arr_4 [i_4] [1]))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            arr_27 [i_5] [i_6 + 1] = arr_25 [i_6];
            var_22 += (-29 == 255);
            arr_28 [i_5] [i_6 + 2] = 1570799667;
            arr_29 [i_5] [i_6] = ((~(arr_20 [i_6 + 2] [i_6 - 1] [i_6 - 1])));
        }
        arr_30 [i_5] = ((!(arr_18 [i_5] [i_5] [i_5])));
        var_23 |= -26;
        var_24 = (((arr_10 [i_5]) ? -28803 : ((var_1 ? var_2 : -23431))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_25 = ((((min((arr_32 [i_7] [i_7]), (arr_32 [i_7] [i_7])))) ? var_17 : 0));
        var_26 = 134217696;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_27 = (((arr_0 [i_8]) / 101));
            arr_37 [i_7] [i_8] = var_6;
            var_28 -= ((~(arr_0 [i_7])));
        }
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            var_29 = (((arr_0 [i_9]) ? var_8 : ((min(27143, var_0)))));
            var_30 = (((arr_0 [i_9]) ? (((((arr_38 [i_7] [i_7] [i_7]) ? (arr_1 [i_7] [i_7]) : -1101420334)) % ((min((arr_35 [i_9 + 1]), 1))))) : (arr_3 [i_9 - 1] [i_7] [i_7])));
            arr_40 [i_9] [i_9] [i_9] = (!(arr_31 [i_9 + 2]));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_31 &= (min((((arr_42 [i_7] [i_7]) + (arr_31 [i_10]))), ((min(var_14, var_6)))));
            arr_45 [1] [i_10] [i_10] = ((((min(-72, 1)) / ((176 ? (arr_32 [i_7] [i_10]) : 114)))));

            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_48 [i_7] [i_7] = 1;
                arr_49 [i_7] [i_10] [9] = ((min((var_9 * 149), (((arr_33 [i_11 - 1] [i_10]) / var_13)))));
                arr_50 [18] = (min(((var_12 ? (min(-97, var_13)) : (arr_44 [1] [i_10]))), 234));
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                arr_53 [3] [i_10] [i_12] = ((((!(arr_51 [i_7] [14]))) ? (((arr_51 [i_12] [i_12]) ? (arr_51 [i_7] [i_12]) : (arr_44 [i_12] [i_10]))) : (arr_44 [i_7] [i_12])));
                arr_54 [i_7] [i_7] = (((min((var_7 & var_16), ((-8446974428150048102 ? 63 : (arr_36 [2]))))) << (arr_51 [i_7] [i_10])));
                var_32 = (min(var_32, ((((((~(arr_39 [i_7])))) ? ((((((arr_0 [i_7]) ? (arr_36 [i_10]) : (arr_34 [i_10])))) ? (arr_43 [8] [i_10]) : (((arr_36 [i_12]) ? (arr_44 [i_12] [i_10]) : var_6)))) : ((((min((arr_43 [i_12] [i_10]), (arr_35 [i_7])))) ? ((1 ? (arr_44 [i_7] [i_10]) : (arr_31 [16]))) : (-2147483647 - 1))))))));
            }
        }
    }
    #pragma endscop
}
