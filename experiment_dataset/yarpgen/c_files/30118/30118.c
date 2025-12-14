/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (((min((arr_6 [i_0] [i_1 - 1] [9]), (arr_5 [i_2] [i_1] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((11 ? -137833007 : var_1)))));
                        arr_11 [0] [i_1] [i_2] [i_0] = (((arr_8 [19] [i_1] [i_0 - 2] [i_3] [i_3] [i_0 - 2]) ? 4047448384 : (((arr_0 [i_0]) ? var_12 : (arr_2 [i_0 + 1] [3] [3])))));
                        arr_12 [i_3] = (arr_10 [i_0 + 1] [i_2] [i_1 + 1] [i_1]);
                        var_20 = var_10;
                        var_21 = (((4047448384 != 3957452363) / (arr_5 [i_1] [i_2] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_22 = (max(var_22, ((((arr_13 [i_1]) ? (((((5425 ? 16331433839396128178 : 3340))) ? (-32767 - 1) : 9223372036854775807)) : 29168)))));

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            var_23 = (~-157);
                            arr_19 [1] = ((-((-((var_16 ? 2115310234313423438 : (arr_1 [i_0] [i_1])))))));
                            arr_20 [i_0] [i_1] [i_2] [i_4] [i_2] = ((~(arr_15 [i_0] [i_1] [i_2])));
                            var_24 += arr_5 [i_1] [i_2] [i_4];
                            var_25 = 0;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_26 = ((-125 ? var_1 : (((8179108257536262040 ? 1 : 1)))));
                            var_27 = (min(var_27, 19));
                        }
                        var_28 = ((((((arr_2 [i_0 + 1] [i_0] [i_0 + 1]) ? 8407232774607744523 : -22131))) ? (((!(arr_2 [i_0 + 1] [i_0] [i_0 - 2])))) : -var_14));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_26 [i_1] = ((!(((((max(8093, (arr_21 [i_0 - 2] [14] [i_2] [i_7] [i_2] [i_7])))) ? (-18251 == 16211702093201579170) : (arr_6 [12] [i_2] [i_7]))))));
                        var_29 = ((((-(arr_1 [i_0 - 1] [i_1 - 1]))) == (~var_9)));
                        var_30 = (arr_23 [i_0] [i_0] [i_0] [i_0 - 2] [2] [5] [i_0]);
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, (((~((~((var_10 ? var_9 : var_4)))))))));

    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_33 [i_8 - 1] [i_9] = 16331433839396128178;

            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                var_32 = (-(arr_4 [i_8] [i_8]));
                arr_37 [i_10] [10] [i_8] = var_1;
            }
            var_33 = (((~16211702093201579170) ? (((~(arr_14 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_9])))) : ((~(arr_36 [i_8 - 1] [i_8 + 1] [i_9])))));
            var_34 += ((!(!1)));
        }
        var_35 = 2640708048;
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_36 = var_3;
        var_37 = 247518911;
    }
    var_38 = (min(((-var_13 ? 2115310234313423438 : var_6)), 1));
    #pragma endscop
}
