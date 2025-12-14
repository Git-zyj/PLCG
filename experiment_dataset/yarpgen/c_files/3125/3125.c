/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] &= (min((min(var_2, var_13)), (((arr_1 [i_0 + 2] [i_0]) + (arr_1 [i_0 + 3] [i_0 + 2])))));
        var_20 *= ((+(max((~var_17), var_15))));
        arr_3 [i_0] = ((-(max(((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), ((var_2 * (arr_1 [i_0 - 2] [i_0 - 2])))))));
        var_21 = ((~((((arr_1 [i_0 + 2] [i_0 + 2]) && (arr_0 [i_0 - 2]))))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_0] &= arr_0 [i_0 + 1];
            arr_8 [i_0] [i_1] = (((((((arr_0 [i_1]) ? (arr_6 [i_0] [i_0 + 1] [i_0 - 2]) : (arr_4 [i_1] [i_0 - 2])))) ? -var_13 : ((126 ? 70367670435840 : -221561735)))));
        }
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = (min(((-((((arr_13 [i_2] [i_3] [i_2]) >= (arr_10 [i_2])))))), (0 || 70367670435840)));

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 = (((((~(arr_1 [i_2 - 1] [i_2 + 3])))) || ((((arr_5 [i_2 - 3] [i_2 - 3] [i_2 - 3]) ? (arr_17 [i_2] [i_3] [i_2]) : (18446673706039115775 <= 65535))))));
                    var_23 -= (max((min(((min(var_0, (arr_10 [10])))), (arr_14 [i_2] [i_2 + 1]))), ((min((arr_18 [i_2] [2] [i_3] [i_4] [2] [2]), (((arr_0 [i_5]) ? (arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] [i_5]) : (arr_6 [i_2] [i_3] [i_4]))))))));
                    var_24 = ((!(((var_18 ? (((arr_13 [i_2] [i_3] [i_2]) ? (arr_18 [i_2] [1] [i_4] [i_5] [i_2 + 3] [1]) : var_7)) : (((arr_19 [i_2] [i_2] [i_2] [i_2]) ? (arr_19 [i_2 - 1] [i_3] [i_2] [i_5]) : (arr_12 [i_2 - 3] [i_2]))))))));
                }
                var_25 = (min((min(6351535321360175165, 102)), ((((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2]))))));
                var_26 = (min(var_26, (((((arr_10 [8]) ? (arr_10 [0]) : (arr_10 [1])))))));
                arr_21 [i_2] [10] [i_4] = (arr_0 [i_2]);
            }
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_2] = (min(((max(126, 1))), ((((arr_22 [i_2] [i_6] [i_2]) >= (arr_18 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 3] [i_6 + 1] [0]))))));
            var_27 = ((((max(((~(arr_23 [i_2] [i_2]))), (arr_6 [i_2] [i_2] [i_2 - 4])))) ? (((!(((var_5 ? (arr_9 [i_2]) : var_3)))))) : (max((arr_6 [19] [i_6 + 1] [i_2 - 1]), (arr_18 [i_6] [i_2] [1] [i_2 - 1] [i_2] [i_2 - 2])))));
        }
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            arr_27 [i_2] = (min(var_10, (arr_11 [i_2 - 2] [i_2])));
            var_28 += (((min((arr_1 [i_2] [i_7 - 1]), (((arr_9 [i_2]) ? (arr_23 [i_2 - 4] [i_7 - 3]) : var_9))))) ? (arr_26 [5] [i_7 + 1]) : (((!(arr_13 [i_2 - 3] [i_7] [8])))));
            var_29 = (max(var_29, (((!((min((arr_16 [i_2 - 4] [1] [i_7]), (((-(arr_10 [2]))))))))))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            arr_32 [i_2 + 3] [i_2] [i_8] = (((arr_11 [i_2 - 3] [i_2]) || ((((arr_12 [i_2] [i_8]) * var_11)))));
            arr_33 [i_2] [i_2] = (arr_31 [i_2 + 2] [i_8 - 2]);
        }
        arr_34 [i_2] = (((((((max((arr_6 [i_2] [i_2] [6]), (arr_23 [i_2] [i_2])))) ? ((var_5 ? var_13 : (arr_17 [i_2] [i_2 - 4] [i_2]))) : (arr_6 [3] [i_2] [i_2 - 3])))) ? (((((arr_23 [5] [i_2 + 3]) < (arr_28 [i_2] [i_2] [i_2]))))) : ((max(var_18, (arr_25 [i_2 - 2] [i_2] [0]))))));
    }
    var_30 = (~(min((var_8 / var_10), (var_6 > var_6))));
    #pragma endscop
}
